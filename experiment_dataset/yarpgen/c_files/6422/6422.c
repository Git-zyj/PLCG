/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (370883542 ^ 1812855408486961090);
    var_17 = -133709444;
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((arr_4 [i_0] [i_1]) ? ((((17 ? -1949500573 : 1949500576)) - (((arr_4 [i_1] [i_1]) ? -2145585727 : 1)))) : (((arr_3 [i_0 - 2] [i_1 - 1]) - 38769))));
                var_20 = (((arr_3 [i_0 - 2] [i_1 - 1]) ? ((((arr_3 [i_0] [i_1]) ? 815601332 : (arr_3 [i_1] [i_0 + 2])))) : (var_1 - var_15)));
            }
        }
    }
    #pragma endscop
}
