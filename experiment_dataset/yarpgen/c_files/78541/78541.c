/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((var_2 ? -1002977518907667472 : ((~(arr_5 [i_0 + 1] [i_0 + 1]))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_18 = (max(var_18, (((((arr_5 [i_0 - 2] [i_0 - 2]) <= (arr_5 [i_0 - 2] [i_0 + 1])))))));
                    arr_9 [i_0 + 2] [i_0 + 1] [3] = ((((((arr_4 [i_2] [i_2]) - (arr_4 [i_0] [i_1])))) ? ((-1953283065 ? (arr_4 [i_1] [i_2]) : (arr_4 [i_2] [i_0 + 1]))) : (!0)));
                    arr_10 [i_0] [i_0] [7] = var_12;
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    var_19 = (max(var_19, (((~(var_10 == var_2))))));
                    arr_13 [9] [15] = (((max(1679601661, 2615365635))));
                    arr_14 [i_0 - 2] [i_0 - 2] [14] = (max((((!((!(arr_3 [i_0])))))), (((arr_11 [i_0 + 2]) ? ((min(var_3, (-127 - 1)))) : (min(var_0, (arr_12 [i_0] [i_1] [i_3 - 3])))))));
                    var_20 += var_8;
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((max(((min(var_4, ((((arr_3 [i_1]) || (arr_18 [10] [i_1] [i_0] [10] [i_0]))))))), (max(((~(arr_4 [i_0] [2]))), var_3)))))));
                            var_22 += 1679601659;
                        }
                    }
                }
                var_23 *= ((var_13 ? (((arr_8 [i_0 - 1] [14] [i_0 - 1] [i_0 + 1]) ? (max(4294967294, (arr_19 [i_0]))) : (var_6 - var_3))) : (!1679601653)));
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
