function validateEmail() {
    const email = document.getElementById('email');
    const errorMessage = document.getElementById('error');
    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

    if (!emailRegex.test(email.value)) {
        email.setAttribute('aria-invalid', 'true');
        errorMessage.style.display = 'block';
    } else {
        email.setAttribute('aria-invalid', 'false');
        errorMessage.style.display = 'none';
    }
}