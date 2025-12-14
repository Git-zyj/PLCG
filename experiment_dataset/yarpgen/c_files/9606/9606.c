/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((max((min(var_9, var_14)), (max(37355, var_5)))), (max((min(var_5, 167)), (min(14368, 14352)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((max((max(var_13, var_5)), (max(var_3, var_7)))), (max((min(65527, 14368)), (min(14368, var_7)))));
        arr_3 [8] [i_0] = min((max((min(51168, var_0)), (max((arr_1 [i_0]), (arr_1 [i_0]))))), (max(36653, 0)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (min(var_20, (max((max((max((arr_5 [i_1]), 16)), (min(var_17, 20099)))), (max((min(var_7, var_10)), (min((arr_5 [i_1]), 9333))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] = min((max((min(var_4, 56226)), (max((arr_13 [i_1] [i_2] [i_3] [i_4]), var_11)))), (max((max((arr_1 [i_3 - 1]), 6144)), (max((arr_6 [i_1]), 22358)))));
                        arr_15 [i_1] [i_3] [i_3] [i_3] [i_1] = min((max((max(var_18, var_10)), (max(var_1, var_15)))), (min((max((arr_6 [8]), var_2)), (min((arr_8 [i_1] [i_4]), (arr_6 [i_2]))))));

                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_21 = max((max((max(var_1, (arr_10 [i_1] [i_1]))), (min(45425, 49152)))), (max((min(14368, var_18)), (min(var_0, var_0)))));
                            var_22 = min((min((min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), 49366)), (max(var_1, 14368)))), (max((max(var_7, 14367)), (min(var_16, var_17)))));
                            arr_18 [i_5 - 2] [i_3] [i_3] [i_3] [i_1] = max((max((min(32768, 49143)), 36653)), (max((max(20099, (arr_4 [i_4]))), (max(var_8, 65535)))));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_3] [i_3 - 2] [8] [i_3] [i_1] = max((max((max((arr_11 [i_1] [i_2] [i_3] [13]), (arr_5 [i_3]))), (min(60720, 53839)))), (min((min(var_5, 65532)), (max(21089, (arr_11 [i_6 - 1] [i_4] [i_3] [i_1]))))));
                            arr_22 [i_1] [4] [i_3] [i_4] [i_3] = min((max((max((arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1]), 14379)), (max((arr_4 [i_6]), 49143)))), (min((max(10, 56242)), (max(var_15, var_14)))));
                            arr_23 [i_2] [i_6] [i_6] [i_2] |= min((max((max(0, var_13)), (max(var_12, (arr_8 [i_1] [i_1]))))), (max((max((arr_16 [i_1] [13] [i_3] [i_4] [i_4] [i_4] [i_6]), var_17)), (max((arr_1 [i_3 + 1]), (arr_4 [i_3]))))));
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_23 = min((max((max((arr_7 [i_1]), (arr_4 [i_1]))), (min(0, 34255)))), (max((max((arr_24 [i_7] [8] [i_3] [i_1] [i_1]), 7936)), (max(39969, 56442)))));
                            var_24 = (min(var_24, (max((min((min(33489, 39029)), (max(var_16, (arr_11 [i_1] [i_1] [i_1] [i_1]))))), (min((max(var_9, (arr_1 [i_3]))), (max(var_10, (arr_16 [i_1] [i_1] [i_2] [i_3] [7] [i_4] [i_7])))))))));
                            var_25 = max((min((max(var_1, 60594)), (min((arr_0 [i_7 + 1]), var_11)))), (max((max(33727, 53787)), (max((arr_12 [i_1] [i_2] [i_4] [i_1] [i_7] [i_1]), (arr_25 [i_2] [i_4] [i_7]))))));
                        }
                        var_26 = max((min((max((arr_26 [i_1] [i_2] [i_3] [i_3] [i_4] [5]), (arr_5 [i_3]))), (min(25290, (arr_20 [i_1] [i_1]))))), (max((max(30536, var_2)), (max(33727, var_15)))));
                    }
                }
            }
        }
        arr_27 [i_1] [i_1] = max(9325, 49119);
        arr_28 [i_1] = max((max((min(var_3, 56360)), (min((arr_5 [i_1]), (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (min((min(var_9, var_16)), (max((arr_7 [i_1]), (arr_10 [i_1] [i_1]))))));
    }
    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_34 [i_8] [i_9] [i_8] = min((min((min(63767, (arr_0 [i_8]))), (min((arr_13 [i_9] [i_9] [i_9] [i_8 + 1]), (arr_32 [i_8 - 3] [i_8 - 1] [i_9]))))), (min((max((arr_4 [i_9]), 34999)), (max(1769, (arr_8 [i_9] [i_8]))))));
            arr_35 [i_8] = max((max((min(38325, 43802)), (max(60102, (arr_19 [i_8 - 1] [i_8] [i_9] [i_9] [i_9]))))), (max((min(var_7, (arr_11 [i_9] [i_8] [i_8 + 1] [i_8]))), (min(var_0, var_14)))));
            var_27 = max((min((max(58198, var_12)), (min(44775, 1233)))), (min((max((arr_26 [i_8] [i_8] [i_8] [i_8] [1] [i_9]), var_18)), (max(var_3, 0)))));
        }
        var_28 &= max((max((max(var_0, var_0)), (min(19253, 27493)))), (max((max(var_16, var_9)), (min((arr_29 [i_8]), var_5)))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_40 [i_10] = 0;
        var_29 = (max(var_29, 25650));
        arr_41 [i_10] = 50821;
        var_30 = 44798;
    }
    var_31 = max((max((min(33380, 60948)), (min(11083, 17735)))), (max(12842, 65535)));
    var_32 = (min(var_32, (max((min(52336, 46650)), (min(16416, 49152))))));
    var_33 = min((max((min(var_12, 5937)), (max(var_2, var_9)))), (min((max(var_18, var_6)), (min(39036, var_14)))));
    #pragma endscop
}
