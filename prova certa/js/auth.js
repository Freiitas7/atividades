document.getElementById('github-login').addEventListener('click', function() {
    const clientId = 'Ov23livhmlgfMDX1lhND'; // Substitua pelo seu Client ID
    const redirectUri = 'http://localhost:8000/callback.html';  // Substitua pelo seu URI de redirecionamento
    const scope = 'read:user user:email';
    const githubOAuthUrl = `https://github.com/login/oauth/authorize?client_id=${clientId}&redirect_uri=${redirectUri}&scope=${scope}`;
    window.location.href = githubOAuthUrl;
});
