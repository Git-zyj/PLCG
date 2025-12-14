/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] = 18446744073709551615;
                var_20 = (!(arr_2 [i_1] [1] [i_1 - 2]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 *= var_0;
                var_22 -= (((1821546823716505441 >> 0) ? (arr_10 [i_3]) : (arr_8 [i_3])));
                arr_12 [i_2] [i_3] = (((((max(1, (arr_8 [3]))) ? (var_4 >= var_5) : ((0 >> (14746 - 14688)))))));
            }
        }
    }
    var_23 = var_14;
    var_24 = (((((var_2 ? var_3 : var_4))) ? var_15 : ((min(var_9, (max(var_0, var_17)))))));
    #pragma endscop
}
