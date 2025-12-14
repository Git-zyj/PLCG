/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_0] = (max((3940926655 | 1362413390), (((!(((161 | (arr_0 [i_2])))))))));
                    arr_10 [11] [2] [2] = (arr_0 [i_0]);
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_3] [i_0] = var_4;

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_13 = (max(var_13, (((((4047805196043106772 >= (arr_3 [i_4 + 3] [i_1 + 1]))) ? var_4 : ((((!(arr_3 [i_4 + 2] [i_1 - 2]))))))))));
                        arr_19 [i_3] [i_4] [i_3 + 1] [i_0] [i_4] = (arr_16 [i_1 + 1] [i_3] [11] [i_1 + 1]);
                        var_14 ^= ((1362413390 << (-512 + 522)));
                        arr_20 [i_0] [i_0] [i_1 + 1] [10] [i_1 + 1] [14] |= 4611686018427387903;
                        var_15 += (arr_5 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_3] [i_5] [i_6] [i_6] = (arr_4 [i_1 - 1] [14] [i_3 - 1]);
                                var_16 = (max(((-(max(var_4, (arr_8 [i_5]))))), -31586));
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, (((+((var_0 ? 16396 : ((min((arr_14 [i_0]), 125))))))))));
                    var_18 = (min(var_18, (((!(((((((arr_2 [i_0]) || var_1))) * (var_0 == 776539496)))))))));
                }
                var_19 = (((((arr_24 [i_0] [i_1]) < ((var_12 ? (arr_2 [i_0]) : 963243772)))) ? ((((((var_10 ? var_11 : 31585))) ? ((min((arr_24 [i_0] [i_1 - 2]), var_5))) : ((var_11 ? (arr_24 [i_0] [i_1]) : 45))))) : ((((var_0 > (arr_4 [i_1] [i_0] [i_0]))) ? ((3863208598 >> (13477 - 13453))) : -17849))));

                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_33 [i_9] [i_1] [i_1] [i_0] = ((((((((arr_5 [i_0]) ? (arr_12 [i_0]) : (arr_4 [i_0] [13] [i_0]))) ^ ((min(var_2, var_4)))))) ? (arr_23 [i_0] [i_0] [i_8] [13]) : ((~((-31586 ? 4611686018427387903 : (arr_18 [i_0] [i_1] [i_8 - 1] [i_0])))))));
                        arr_34 [i_9] [i_8] [i_0] [i_0] = (arr_22 [i_1 - 2] [i_9] [i_8 + 1]);

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_8] [i_9] [i_9] |= (((arr_36 [i_0] [i_9] [i_8 + 1] [i_8]) ? var_10 : (arr_36 [i_0] [i_9] [i_8 - 1] [i_0])));
                            arr_38 [i_0] [i_1] [14] [i_9] [i_10] = ((-17849 ? var_11 : var_8));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_41 [2] [i_9] [i_8] [i_8 + 2] [14] [14] [14] = var_3;
                            arr_42 [i_0] [i_1] [i_8] [i_9] |= 1052593304;
                            arr_43 [2] [i_1 - 1] = ((1362413390 ? 522314685 : 96));
                        }
                    }
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        arr_46 [i_0] [i_12] = (!-9223372036854775807);
                        var_20 ^= ((((max(702852777, (90 + 165)))) ? (arr_7 [i_0]) : -31043));
                        var_21 = ((((((max(var_12, var_5))) ? (((-(arr_1 [i_0] [i_0])))) : (max(-1141866531, 7073881090388063084)))) * (arr_29 [i_0] [i_1] [i_1])));
                        var_22 = (min(var_22, ((max(((0 >> (!1309337423))), var_12)))));
                    }
                    arr_47 [i_0] [i_1 + 1] [i_8 + 2] [i_8] = ((((~101) + 2147483647)) << (var_0 - 7413949874491879318));
                }
            }
        }
    }
    var_23 -= ((+((min((-2227 < 31326), var_4)))));
    #pragma endscop
}
