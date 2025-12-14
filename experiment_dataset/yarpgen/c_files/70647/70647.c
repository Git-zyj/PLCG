/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_14 ? ((var_15 ? var_12 : var_14)) : (((1382894418 ? var_8 : var_5))))), (((var_8 ? var_1 : ((max(var_0, var_6))))))));
    var_18 = ((31725 ? 3584 : 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0 + 2] [i_1] [i_1 + 1] = (arr_5 [i_0 + 2] [i_1] [i_0]);
                var_19 = (((arr_2 [i_0] [i_1]) ? (((((((arr_3 [13]) ? (arr_2 [0] [0]) : (arr_3 [i_0 - 1])))) ? (arr_0 [i_1]) : (max((arr_5 [i_0] [i_0] [i_1 + 1]), (arr_4 [i_1 - 1] [i_0] [i_0])))))) : (min((arr_1 [i_0]), (max((arr_2 [i_0] [i_0]), (arr_0 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            {
                var_20 = (min((arr_12 [i_2]), ((((((arr_10 [6]) ? (arr_2 [i_2] [i_3]) : (arr_11 [i_2] [i_3 + 2] [3])))) ? (arr_2 [i_2] [8]) : (arr_7 [i_2] [i_2])))));
                var_21 = (arr_11 [i_2] [17] [i_3]);
                var_22 = ((-4051389007646821241 ? -59 : 123));
                arr_13 [i_2] [i_2] [i_2] = (arr_1 [i_2 - 1]);
                arr_14 [i_2 - 1] [i_3] [i_3 + 1] = (min((min(((((arr_12 [i_2]) ? (arr_1 [i_2 + 1]) : (arr_9 [i_2])))), (arr_7 [1] [8]))), (arr_4 [i_2 + 1] [i_3 - 1] [21])));
            }
        }
    }
    #pragma endscop
}
