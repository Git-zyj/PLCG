/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 89;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_0;
                var_21 = (((((3694886622 ? 68715282432 : -6608495077838750139))) ? (((~(arr_3 [i_1] [i_0])))) : ((((((arr_0 [i_1] [i_1]) ? (arr_5 [i_0] [i_1]) : 5493064843591427753))) ? (arr_2 [i_0] [i_1 + 1]) : (267603417771426154 & 6249328461736547681)))));
                var_22 = (min((arr_0 [i_1 - 2] [i_1 - 2]), (var_10 ^ var_12)));

                for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, var_0));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_0] = ((((((((arr_6 [i_0]) ? var_1 : (arr_2 [i_0] [5]))) | (var_17 & var_13)))) ? (((((~(arr_2 [i_1 - 3] [i_3 - 1])))) ? 1 : (((arr_6 [i_0]) ? var_19 : 5493064843591427753)))) : (((((arr_6 [i_2 - 2]) > (arr_6 [i_2 - 1])))))));
                        arr_13 [16] [i_1 + 1] [i_3 - 1] [i_3] [i_3 - 1] [6] &= (arr_1 [i_3]);
                    }
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, var_2));
                    var_25 ^= (((((var_7 ? var_8 : (arr_17 [i_0] [i_1 - 2] [i_1 - 2] [i_0])))) & (arr_1 [i_4])));
                    arr_18 [i_4 - 2] = (((arr_6 [i_0]) & (arr_2 [i_4 + 1] [i_1])));
                    var_26 = ((326452844 > 3694886626) | var_19);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_27 = (((arr_20 [i_6] [i_5] [i_0] [i_0]) ? (((127 == ((var_3 ? 0 : (arr_0 [i_0] [i_0])))))) : (((((arr_6 [i_5]) & (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))))));

                            for (int i_7 = 2; i_7 < 19;i_7 += 1)
                            {
                                var_28 = (arr_11 [i_5] [i_5] [i_5] [i_5]);
                                var_29 = (max(var_29, (((((min((min((arr_8 [i_0] [i_7]), var_8)), var_19))) % var_7)))));
                            }

                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                var_30 = (max(var_30, (((~(((((-(arr_2 [i_1 - 3] [i_0]))) < var_12))))))));
                                var_31 += (min((max((arr_10 [i_0] [i_0] [i_0]), (((var_12 > (arr_4 [0] [i_1] [i_8])))))), (((((var_7 ? var_5 : var_11))) ? (min(136373113, var_1)) : (arr_27 [i_0] [i_1 - 3] [i_5] [i_5] [i_0])))));
                                arr_28 [i_0] [i_0] [i_5] [i_0] [i_8] [i_0] = -30132;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
