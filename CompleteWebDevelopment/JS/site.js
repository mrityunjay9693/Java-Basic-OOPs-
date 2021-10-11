<script>

var a;
let c;
function message1() {
    {
        var b = 10;
    }
    {
        let d = 20;
    }
    //return b;
    alert(b);
}

function message2() {
    //d = d + 50;
    {
        d = 50;     //var
    }
    alert(d);
    document.write(d);
    console.log(d);
    //document.getElementById('para1').innerHTML = d;
    return d;
}
</script>



//JSON
//Web API   --> node.js, .net
//REST API
//Flipkart