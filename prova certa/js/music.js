const musicPlayer = document.getElementById('music-player');
const musicSource = document.getElementById('music-source');
const prevButton = document.getElementById('prev');
const nextButton = document.getElementById('next');
const musicSelect = document.getElementById('music-select');

const tracks = ['music1.mp3', 'music2.mp3', 'music3.mp3'];
let currentTrack = 0;

prevButton.addEventListener('click', () => {
    currentTrack = (currentTrack - 1 + tracks.length) % tracks.length;
    updateTrack();
});

nextButton.addEventListener('click', () => {
    currentTrack = (currentTrack + 1) % tracks.length;
    updateTrack();
});

musicSelect.addEventListener('change', (e) => {
    currentTrack = tracks.indexOf(e.target.value);
    updateTrack();
});

function updateTrack() {
    musicSource.src = tracks[currentTrack];
    musicPlayer.load();
    musicSelect.value = tracks[currentTrack];
}

updateTrack();
