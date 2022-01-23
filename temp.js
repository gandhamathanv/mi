//server information
const class1 = {
    className: 'IICSEA',
    students: 67,
    advisorI: 'R S Mohana',
};
const class2 = {
    className: 'IICSEB',
    students: 67,
    advisorI: 'BOO BOOO',
};
const class3 = {
    className: 'IICSEC',
    students: 67,
    advisorI: 'WOVV WOVV',
};
const class4 = {
    className: 'IICSED',
    students: 67,
    advisorI: 'AKKA',
};
const classDetails = [class1, class2, class3, class4];

///andfgdskgjfokd
let html = '';
// console.log(classDetails);
const split = classDetails.map(
    (el) =>
    (html += `<p>for class ${el.className} of ${el.students} with advisor ${el.advisorI}</p>`)
);
console.log(html);
const p = document.querySelector('.paragraph');
p.innerHTML = html;