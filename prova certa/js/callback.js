const clientId = 'Ov23livhmlgfMDX1lhND'; // Substitua pelo seu Client ID
const clientSecret = '6e909311314a6759b220e134e91f94af5814cf7c'; // Substitua pelo seu Client Secret

function getQueryParams() {
    const params = {};
    window.location.search.substring(1).split('&').forEach(param => {
        const [key, value] = param.split('=');
        params[key] = decodeURIComponent(value);
    });
    return params;
}

async function fetchAccessToken(code) {
    const response = await fetch('https://github.com/login/oauth/access_token', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
            'Accept': 'application/json'
        },
        body: JSON.stringify({
            client_id: clientId,
            client_secret: clientSecret,
            code: code
        })
    });
    const data = await response.json();
    return data.access_token;
}

async function fetchGitHubUser(token) {
    const response = await fetch('https://api.github.com/user', {
        headers: {
            'Authorization': `token ${token}`
        }
    });
    const user = await response.json();
    return user;
}

(async function() {
    const params = getQueryParams();
    if (params.code)
