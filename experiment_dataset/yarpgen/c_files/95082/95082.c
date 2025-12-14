/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_1 ? var_4 : 255)))) ? (((var_9 >= var_2) & -262143)) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [6] [i_1] [i_2] = ((((((3506461122 ? 71 : 126)) < (((!(arr_7 [i_2] [i_1 + 3] [i_0 + 1])))))) ? 4294705144 : ((min((3506461109 || 15786), ((-15670 ? 3382 : 1)))))));
                    var_13 ^= (min(4190090006717007105, ((((arr_4 [i_0 + 1] [i_1] [i_1 + 3]) ? (arr_4 [i_0 + 2] [i_1] [i_1 + 3]) : (arr_3 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 ^= -84;
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0 + 2] = ((((((min((arr_0 [i_3]), (arr_6 [i_0] [i_1] [i_3] [i_1])))) ? (arr_11 [i_0 - 1] [i_2 - 1]) : ((var_5 ? 262127 : 10028)))) / (min((arr_8 [i_4] [i_1] [i_1] [i_0]), -10503))));
                                arr_18 [i_1] [i_2] [i_2] [i_1] [i_3] [i_1] = (min((((((((arr_4 [i_1 + 3] [18] [i_3]) & (arr_7 [i_1] [i_3] [i_1])))) < (((arr_4 [i_0] [i_0] [i_2 - 1]) ? 109 : (arr_16 [i_0 - 1] [i_1] [i_0 - 1])))))), (((arr_16 [i_0] [i_1] [i_4]) ? (arr_3 [i_0 + 1]) : ((var_5 + (arr_3 [i_2])))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_0] = (arr_5 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
