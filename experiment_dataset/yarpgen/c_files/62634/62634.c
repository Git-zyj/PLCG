/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((((20532 ? var_2 : 15147)) * (var_0 || var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_12 -= -15165;
                var_13 = ((!((-15147 && (arr_1 [i_0])))));
                var_14 ^= (~15134);
                var_15 = (min(var_15, (((((((255 % 15135) || ((((arr_0 [i_1] [i_0]) >> (((arr_2 [i_0] [i_1] [i_0]) - 122)))))))) == -1441360437)))));
            }
        }
    }
    var_16 = ((-(min(1441360436, -871750387507540271))));
    var_17 = ((((-7486355463961594519 + (-1441360434 + var_0))) < (((var_4 ? (!1168553922) : (20 - -576460752303423488))))));
    #pragma endscop
}
