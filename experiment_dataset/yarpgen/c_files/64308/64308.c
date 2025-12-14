/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((arr_0 [i_0] [i_1]) ? var_5 : (arr_1 [i_1]))) + (((arr_1 [i_1]) * var_11))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_2] = (((((arr_4 [i_0] [i_1] [i_0]) + (arr_4 [i_0] [i_1] [i_2]))) * (-8443578761229822153 >= 0)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4 - 1]);
                                var_16 = (max(var_16, (((63938 ? 9223372036854775807 : (((0 << (67108856 - 67108849)))))))));
                            }
                        }
                    }
                    var_17 = ((((((arr_7 [i_0] [i_1]) ? 65535 : 33234))) ? 1203864720929561733 : 536346624));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = ((var_10 + (arr_8 [i_0] [i_5] [i_2])));
                                var_19 = (min((max((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_18 [i_2] [i_2] [i_6]) : (arr_14 [i_6] [i_5 - 2] [i_2] [i_1] [i_0]))), ((min(var_8, (arr_5 [i_0] [i_5] [i_6])))))), (((!((((arr_3 [i_0] [i_0]) + (arr_16 [i_0] [i_0] [i_0] [i_0] [i_5 - 1] [i_6])))))))));
                                arr_21 [i_2] [i_1] [i_2] [i_5 + 1] [i_2] = (24844 == 1008);
                                var_20 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_21 = (((arr_24 [i_7 - 1] [i_7 - 1]) ? (arr_25 [i_7] [i_7] [i_9]) : 0));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, (arr_27 [i_7] [i_7 - 1] [i_7 - 1])));
                                var_23 = (min((((20927 > (min((arr_22 [i_7]), (arr_33 [i_7] [i_8] [i_9] [i_10] [i_11])))))), ((-(var_2 >= var_10)))));
                                var_24 = ((1743103744 != (((var_11 ? (!var_7) : (arr_30 [i_9] [i_9] [i_9]))))));
                                var_25 -= arr_22 [i_8];
                                var_26 -= (((arr_27 [i_7 - 1] [i_11] [i_7 - 1]) ? (min((arr_33 [i_7 - 1] [i_8] [i_8] [i_8] [i_10]), (arr_27 [i_7 - 1] [i_11] [i_11]))) : (arr_33 [i_7 - 1] [i_10] [i_10] [i_10] [i_11])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (((((var_12 ? var_0 : var_2))) ? ((min((-2068388243 == 95), -686055908))) : ((((var_8 ? var_14 : 39835)) | (((max(var_13, 0))))))));
    #pragma endscop
}
