const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f0f0f", /* black   */
  [1] = "#6B6E70", /* red     */
  [2] = "#8E706B", /* green   */
  [3] = "#AF9D6A", /* yellow  */
  [4] = "#71768A", /* blue    */
  [5] = "#8D788C", /* magenta */
  [6] = "#798694", /* cyan    */
  [7] = "#c4c0c6", /* white   */

  /* 8 bright colors */
  [8]  = "#89868a",  /* black   */
  [9]  = "#6B6E70",  /* red     */
  [10] = "#8E706B", /* green   */
  [11] = "#AF9D6A", /* yellow  */
  [12] = "#71768A", /* blue    */
  [13] = "#8D788C", /* magenta */
  [14] = "#798694", /* cyan    */
  [15] = "#c4c0c6", /* white   */

  /* special colors */
  [256] = "#0f0f0f", /* background */
  [257] = "#c4c0c6", /* foreground */
  [258] = "#c4c0c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
