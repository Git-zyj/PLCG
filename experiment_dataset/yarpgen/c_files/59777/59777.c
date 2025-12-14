/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] &= (((((var_1 >> (((arr_2 [i_1] [i_1]) + 83))))) ? (~var_2) : ((~((-648649794 ? 6120654926196767811 : 6120654926196767812))))));
                arr_8 [i_0] |= ((-((((var_6 ? (arr_1 [i_0]) : var_5))))));
                var_10 = (min(var_10, ((((((~3048118303) ? (var_9 < var_9) : (76 <= 1)))) ? (max(var_8, var_1)) : 6120654926196767812))));
            }
        }
    }
    var_11 |= (var_9 ? (((~12326089147512783800) ? 33554424 : var_1)) : var_1);
    var_12 = ((var_9 ? (((-33554424 ^ var_5) ? (!0) : var_1)) : ((((12326089147512783800 ? var_1 : -4096)) + (((var_3 ? var_2 : var_6)))))));
    var_13 = ((!(~var_9)));
    #pragma endscop
}
