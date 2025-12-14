/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 = ((var_1 ? ((-1045588798187893476 ? -7550 : (!43374))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [2] [i_1 + 1] [4] &= 549755813887;
                var_22 &= (arr_4 [2] [4]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_0] [7] = ((-((~(((arr_8 [i_4] [i_0] [i_3] [i_4]) ? (arr_0 [i_0] [i_1]) : -7550))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [1] = 4294967295;
                                arr_17 [i_0 - 2] [i_3] [i_2] [6] [i_0 - 2] |= (18014398509481983 / ((max(-549755813903, ((var_10 >> (4294967295 - 4294967293)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_5] = ((~(~var_11)));

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_23 = (max((max(((-(arr_6 [i_0] [i_6]))), (-1 > -549755813888))), (((var_13 << (((arr_14 [7] [i_1] [i_1 + 1]) - 169)))))));
                                var_24 = 1238236297;
                                arr_27 [i_1] [i_1] [i_1] [i_0] [i_1] = 549755813896;
                            }
                            for (int i_8 = 1; i_8 < 13;i_8 += 1)
                            {
                                var_25 = ((-(arr_4 [i_1 - 1] [i_0])));
                                var_26 = (arr_11 [9] [i_0 - 2] [i_8 - 1] [i_8] [i_8 + 1] [i_8]);
                                var_27 = ((((((arr_19 [i_0 + 1] [i_8 + 1] [i_0]) ? (arr_19 [i_0 + 1] [i_8 + 1] [i_0]) : var_6))) % (((arr_19 [i_0 - 2] [i_8 + 2] [i_0]) ? (arr_19 [i_0 + 2] [i_8 + 1] [i_0]) : -549755813891))));
                            }
                            var_28 = (((((((arr_18 [i_5] [3] [i_0]) % 1238236288)) > (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_14)))) ? (((((-(arr_0 [i_0 - 2] [6])))) ? 1 : ((((arr_9 [i_0] [i_1 + 1] [i_0]) < (arr_11 [i_0] [i_0] [i_1] [i_5] [1] [12])))))) : ((~(var_17 && -23)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
