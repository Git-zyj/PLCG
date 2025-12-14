/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((var_13 + -25114) & (var_0 > 25114))) & ((min(25114, (210 > 9535420096123063015))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_1 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_20 = (((((max(var_6, 25129)) >= -14542)) ? (arr_5 [i_0 - 1] [i_0 - 1]) : ((4294967295 ? (((var_14 ? 25114 : (arr_3 [i_4])))) : ((var_13 << (arr_12 [i_2] [i_4])))))));
                                arr_13 [i_2] [14] = (max((((~(arr_3 [i_0 + 1])))), (max((((arr_4 [i_3]) ? var_10 : -25115)), var_7))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_21 = (min((arr_2 [i_2] [i_5]), 112));
                                var_22 = (((arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] [i_5]) ? (~var_7) : (((arr_6 [i_2 - 3] [i_1 + 2]) ? ((max((arr_3 [i_2 + 1]), var_16))) : ((min(-25099, 39982)))))));
                                arr_16 [i_2] [i_3] = (2802419678013217773 / 226);
                            }
                            var_23 = (max(var_23, (((1932584765 ? ((((var_6 + (arr_8 [i_0] [i_1 - 2] [i_2 + 2] [i_3] [i_0 - 2]))) - (arr_11 [i_0] [i_3]))) : ((-(arr_3 [i_0 - 2]))))))));
                            arr_17 [i_0 - 1] [i_0 - 1] [i_2] [6] [i_0 + 1] = ((((!(arr_7 [i_0] [i_2])))));
                            arr_18 [i_2 + 1] [i_2] [i_2] = (((arr_6 [i_1] [i_3]) ? ((((-25133 ? 32 : (arr_8 [i_0 + 1] [7] [7] [i_2] [7]))))) : (arr_1 [i_2])));
                        }
                    }
                }
                var_24 -= (!((min((min((arr_0 [i_1]), (arr_8 [i_0 - 2] [i_1 - 2] [i_1] [6] [i_1 + 1]))), (((25099 ? -9881 : (arr_3 [i_0]))))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_25 = ((((32766 ? ((var_2 ? 13011 : var_15)) : ((min(1, 25099)))))) ? (max((!-25099), ((var_5 ? (arr_9 [i_8]) : (arr_15 [i_7] [i_1] [i_0]))))) : 25113);
                                var_26 = -25099;
                            }
                        }
                    }
                }
                arr_29 [4] = (((((arr_23 [i_0 - 1] [4] [i_1] [i_1 + 2] [i_0 + 1]) - -25099)) + -119));
            }
        }
    }
    #pragma endscop
}
