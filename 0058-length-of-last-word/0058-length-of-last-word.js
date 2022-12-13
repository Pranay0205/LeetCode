/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  var x = s.trim().split(" ");
  var y = x.length;
  if (y <= 0) {
    return 0;
  } else {
    LastWordlength = x[y - 1].length;
    return(LastWordlength);
  }
};