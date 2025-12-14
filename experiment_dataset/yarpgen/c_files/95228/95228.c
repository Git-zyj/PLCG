/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((!((max(var_7, var_5))))) ? var_14 : (((((min(var_7, var_1))) ? (max(0, var_5)) : -2047)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((((min((arr_1 [i_0]), (arr_8 [i_2] [i_1] [14] [i_0])))) * (((8931601841173035730 % ((max(var_9, 289953044))))))));
                    var_16 = (min(var_16, (((arr_5 [i_0] [i_0] [3]) || ((min(2041, (((36 ? 7286 : (arr_4 [14])))))))))));
                }
            }
        }
    }
    var_17 = ((((max(2047, var_0))) ? var_0 : var_3));
    #pragma endscop
}
