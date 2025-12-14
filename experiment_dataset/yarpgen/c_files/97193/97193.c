/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = var_3;
                var_17 = var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = ((!((min((min((arr_2 [i_0]), (arr_6 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_2 [i_0]))))));
                            arr_9 [i_0 - 1] [i_1] |= 14372;
                            var_19 ^= var_0;
                            arr_10 [i_1] [i_0] [i_2] [i_1] [2] [i_1] &= (((((min(((var_13 == (arr_3 [i_1] [i_2] [i_1]))), (arr_0 [i_1] [1]))))) >= (((max((arr_1 [i_1]), (arr_3 [i_0] [i_1] [7]))) / ((max(var_9, (arr_6 [i_3] [i_3] [15] [i_1] [i_0] [i_0]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 |= var_7;
                            var_21 &= (arr_12 [i_0 - 1] [i_1] [i_4] [i_1]);
                            arr_18 [i_0 - 1] [i_0] = ((var_9 | (arr_0 [i_0] [i_1])));
                            var_22 *= (((arr_0 [i_5] [i_1]) ^ ((-((max(var_12, (arr_2 [i_4]))))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((((!(((var_14 ? var_13 : var_9))))) ? ((max(((var_15 ? var_5 : var_7)), var_12))) : var_1));
    var_24 |= ((var_3 + ((min(var_12, var_0)))));
    var_25 = ((((min((((14390 ? 71 : 51145))), (-5708926013264320532 / var_9)))) && ((var_7 || (((5708926013264320532 ? 72 : 102)))))));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            {
                var_26 = (((((((max((arr_21 [i_6]), (arr_20 [i_6]))) > (((!(arr_20 [i_6])))))))) / (max(((~(arr_3 [i_6] [i_6] [i_6]))), (arr_2 [i_6])))));
                var_27 = ((((min(-var_6, (max(var_15, (arr_11 [i_6])))))) ^ (max((((var_11 <= (arr_5 [3] [i_6 - 1] [i_7] [i_7])))), (~var_4)))));
            }
        }
    }
    #pragma endscop
}
