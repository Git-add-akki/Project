// The event. target property returns the HTML element that triggered an event. By using this property we can get access to the element's properties and attributes.


let string= "";
let buttons=document.querySelectorAll('.button');
Array.from(buttons).forEach((button)=>{
  button.addEventListener('click',(e)=>{
    if(e.target.innerHTML== '='){
        string=eval(string);
        document.querySelector('input').value=string;
        string=""
        }
    else if (e.target.innerHTML=='C'){
        string=""
        document.querySelector('input').value=string;
        }
    else if (e.target.innerHTML=='cr'){
        string=string.slice(0,-2)
        document.querySelector('input').value=string;

    }    
    else if (e.target.innerHTML=='X'){ //this is used so i can use ''X in stead of'*' in calclator
        string=string +'*';
        document.querySelector('input').value=string;

    }  
    else{
        console.log(e.target)
        string= string + e.target.innerHTML;
        document.querySelector('input').value=string;
        }
    })
})

























// let string= "";
// let buttons=document.querySelectorAll('.button');
// Array.from(buttons).forEach((button)=>{
//   button.addEventListener('click',(e)=>{
//     if(e.target.innerHTML== '='){
//         string=eval(string);
//         document.querySelector('input').value=string;
//         if (e.target.innerHTML=='C'){
//             string=""
//             document.querySelector('input').value=string;
//             }
//         else if (e.target.innerHTML=='cr'){
//             string=string.slice(0,-1)
//             document.querySelector('input').value=string;
//             }    
//         else {
//             console.log(e.target)
//             string= string + e.target.innerHTML;
//             document.querySelector('input').value=string;
            
//             }
//         }
//     else if (e.target.innerHTML=='C'){
//         string=""
//         document.querySelector('input').value=string;
//         }
//     else if (e.target.innerHTML=='cr'){
//         string=string.slice(0,-1)
//         document.querySelector('input').value=string;

//     }    
//     else{
//         console.log(e.target)
//         string= string + e.target.innerHTML;
//         document.querySelector('input').value=string;
//         }
//     })
// })

// just for own writing practice




