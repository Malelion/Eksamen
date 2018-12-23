<script>
    // Skifter mellem at vise og skjule menuen når der klikkes på knappen.
        function myFunction() {
        document.getElementById("myDropdown").classList.toggle("show");
    }

    // Luk dropdown hvis brugeren klikker uden for menuen
        window.onclick = function(event) {
        if (!event.target.matches('.dropbtn')) {
        var dropdowns = document.getElementsByClassName("dropdown-content");
        var i;
        for (i = 0; i < dropdowns.length; i++) {
        var openDropdown = dropdowns[i];
        if (openDropdown.classList.contains('show')) {
        openDropdown.classList.remove('show');
      }
    }
  }
}
</script>