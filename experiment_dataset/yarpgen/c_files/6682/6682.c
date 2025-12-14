/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 | var_12);
    var_14 |= var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (19 / var_4);
                                var_16 = (min(var_16, (((((arr_1 [i_2 - 1]) || (arr_6 [i_4 - 1] [i_3 - 1] [i_2 + 1] [i_1 - 1]))) ? (min((arr_6 [i_4 - 1] [i_3 - 3] [i_2 - 1] [i_1 + 1]), (arr_6 [i_4 + 1] [i_3 + 1] [i_2 + 2] [i_1 + 1]))) : var_4))));
                                var_17 = ((((((44 * 0) ? 44 : 212))) && ((((1 ? 63 : 19)) == 1035457998))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 = ((((((var_6 ? var_9 : 4094383258254857583)) / (((min(var_9, (arr_2 [14] [i_6]))))))) / ((min((((arr_14 [i_0] [i_1] [i_2] [i_1]) ? (arr_10 [12] [19] [i_1] [i_2] [19] [i_6]) : var_3)), var_2)))));
                                var_19 = (max(var_19, (((13412586240265346791 ? ((var_3 ? 7347361986339289403 : (((arr_15 [i_2] [i_5] [i_2] [i_1] [i_2]) % (arr_5 [i_0] [15] [i_0] [8]))))) : -var_2)))));
                            }
                        }
                    }
                    var_20 = ((((((var_2 | var_2) ^ (var_12 & 87)))) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : ((((((165 & (arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])))) ? 39070 : ((var_1 / (arr_4 [10] [i_1]))))))));
                }
            }
        }
        var_21 = (!63713);
    }
    var_22 = (min(var_22, (((((((var_10 >= var_0) & var_5))) <= var_10)))));
    #pragma endscop
}
