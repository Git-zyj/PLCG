/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 18446744073709551615;
                arr_6 [i_0] [i_1] = var_5;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 ^= (1 * var_11);
                    var_18 -= var_0;
                    var_19 = (min(var_19, ((((arr_7 [i_1 - 3]) ? ((((arr_7 [i_1 - 2]) > (arr_7 [i_1 - 2])))) : ((min((arr_7 [i_1 - 1]), (arr_7 [i_1 - 1])))))))));
                    var_20 = var_13;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_21 = ((min(var_12, (arr_1 [i_1 - 2]))) < (arr_1 [i_1 - 1]));
                    var_22 = (((arr_4 [i_0] [i_1 - 2]) ? (arr_4 [i_0] [i_1 - 3]) : (((arr_4 [i_3] [i_1 - 3]) * (arr_4 [1] [i_1 - 2])))));
                }

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_23 = (min(var_23, (((((((((arr_4 [i_4 - 1] [i_4]) | (arr_12 [i_0] [i_1 + 1] [i_4])))) ? (arr_11 [i_0] [i_1] [i_1 - 3] [i_4 - 1]) : (((~(arr_9 [i_0] [i_1] [i_0])))))) & (~0))))));
                    var_24 = (min(var_24, (min(((max((arr_9 [15] [i_1 - 2] [15]), (arr_9 [i_0] [15] [i_4 + 1])))), (~var_7)))));
                    arr_14 [1] [i_4] [i_4] [1] = (((((!var_12) & (var_10 > var_2))) == (((max(var_0, -57))))));
                }
            }
        }
    }
    var_25 = var_4;
    #pragma endscop
}
