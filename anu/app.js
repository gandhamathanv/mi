const template = `
<section class="container">
    <div class="container-div">
        <img class="img-prf" src="admin.png" alt="admin" />
        <h3>{%CLASS%}</h3>
    </div>
</section>
`;
const array = [
    'CSEA',
    'CSEB',
    'CSEC',
    'CSED',
    'anu',
    'boo boo',
    'ts',
    'hasjfk',
];

let temp = '';
array.forEach((el) => {
    temp += template.replace('{%CLASS%}', el);
});
console.log(temp);
document
    .querySelector('.main-cointainer')
    .insertAdjacentHTML('beforeend', temp);