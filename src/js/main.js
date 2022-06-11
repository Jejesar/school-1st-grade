var video_one = document.querySelectorAll('#video1')[0];
var video_two = document.querySelectorAll('#video2')[0];
var video_three = document.querySelectorAll('#video3')[0];

function hiddeAll() {
    video_one.classList.add('hidden');
    video_two.classList.add('hidden');
    video_three.classList.add('hidden');
}

function video1() {
    hiddeAll();
    video_one.classList.remove('hidden');
};

function video2() {
    hiddeAll();
    video_two.classList.remove('hidden');
};

function video3() {
    hiddeAll();
    video_three.classList.remove('hidden');
};