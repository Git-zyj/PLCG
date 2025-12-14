/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = ((1029 >> (-20 + 39)));
        arr_3 [i_0] = (max((((arr_2 [0] [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 16909454802901168660)) : 3270822984313746313)), 1537289270808382968));
        var_12 = min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? ((min((arr_2 [i_0] [i_0]), (arr_2 [1] [i_0])))) : ((-(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_1] = ((1537289270808382955 + ((1537289270808382937 ? 1537289270808382982 : 12694))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] = (max((((((~(arr_10 [i_0] [i_0] [i_0] [4]))) ^ (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_6 [i_1])))))), (arr_10 [i_3] [i_2] [i_1] [i_0])));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_18 [i_4] [i_4] [i_2] [i_2] = (arr_12 [i_4] [i_4] [i_4] [i_4]);
                            var_13 = (min(16909454802901168645, 12698));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_23 [i_5] [1] [i_2] = ((+(((arr_6 [i_1]) ? (arr_8 [10] [15] [i_0]) : 0))));
                            var_14 += 107;
                            arr_24 [i_5] [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_25 [i_1] [4] = (arr_21 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5]);
                        }
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_1] = ((!((!(((1537289270808382988 ? 15651092892168422001 : -119161576824961012)))))));
                            var_15 = (min((--119161576824961012), (arr_21 [i_3] [i_3] [i_3] [i_3] [6] [i_3])));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_16 *= ((17321075734913374047 ? ((((arr_5 [i_0] [i_0]) ? (arr_17 [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_0] [i_7 + 1] [i_7 - 2] [i_7 - 1]) : (((arr_9 [i_0] [i_1] [i_0] [i_1]) ? (arr_31 [i_7] [i_1]) : 76))))) : 9223372036854775807));
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (max(8863965675096378182, 12714));
                        }
                    }
                    arr_33 [i_0] [i_1] [i_2] = -12694;
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
