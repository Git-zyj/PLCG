/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((13717529737764041600 ? (~13717529737764041617) : 10209242648316338887)), ((~(~6869256836454610087)))));
    var_12 = min(var_8, (min(2132305649, var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = 1;
                    var_13 = (((((arr_4 [i_1] [i_1]) ? (min(13717529737764041578, -1)) : -127)) & -222));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_14 *= ((~((11590079783810400217 ? 13717529737764041578 : 1))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 = (min((arr_4 [i_0] [i_0]), (((((min((arr_12 [i_0] [i_5] [i_5] [i_3]), (arr_1 [7])))) / ((-(arr_0 [i_0] [i_0]))))))));
                                var_17 = (max(var_17, (((((min(((((arr_11 [i_3] [i_3] [i_3] [1]) && 1122340952))), 1088344022))) ? (arr_5 [6]) : (arr_3 [i_5] [i_3]))))));
                                var_18 = (((min((var_9 & var_8), (1580244641 + -1401772152))) >= ((((var_1 >= (arr_13 [i_0] [i_0] [i_5])))))));
                                var_19 = (max(var_19, (((1 ? (min(2147483634, 202)) : (arr_13 [i_0] [i_1] [i_3]))))));
                            }
                        }
                    }
                }
                var_20 = ((-((202 ? ((min(-1856039855, 81))) : (max((arr_8 [i_0]), var_1))))));
                var_21 |= (((((((max((arr_13 [i_0] [i_1] [i_0]), (arr_8 [i_0])))) ? (!-1580244623) : (min(4729214335945510049, 1))))) ? (((!((max((arr_12 [i_1] [i_1] [i_1] [i_1]), (arr_11 [4] [i_1] [i_1] [i_1]))))))) : ((-2147483635 ? -585474220 : 16383))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = (arr_16 [i_8] [i_7] [i_6] [6] [i_1] [i_0]);
                                var_23 = (arr_4 [i_1] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
