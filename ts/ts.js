const info = [{
        stuName: 'gandhamathan V',
        rollnumber: '20CSR051',
    },
    {
        stuName: 'aanandhene M',
        rollnumber: '20CSR003',
    },
    {
        stuName: 'booo boooo',
        rollnumber: '20CSR030',
    },
    {
        stuName: 'ts',
        rollnumber: '20CSR041',
    },
    {
        stuName: 'mohana',
        rollnumber: '20CSR000',
    },
    {
        stuName: 'maju',
        rollnumber: '20CSR000',
    },
];
//temp
const asd = document.querySelector('.info-box');
const template = ` <figure class="info"> <div class="info-emoji">🎓</div>

<div class="detail-box">
    <h2 class="stu_name"> {%name%} </h2>
</div>

<div class="sub">
    <div class="sub-box">
        <h2 class="rollno rollno--20CSR">{%number%}</h2>
    </div>

    <a class="stu_link" href="#">
        <span> <i class="emoji-pen">🖊 </i></span>
    </a>
</div>
</figure>`;
let html = '';

info.map((el) => {
    console.log(el.stuName);
    let hl = template;
    hl.replace('{%name%}', el.stuName);
    html += hl;
});
console.log(html);
asd.innerHTML = html;