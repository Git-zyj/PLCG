/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 = (max(var_14, (3 ^ 2)));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_15 = (min(var_15, ((min(255, ((((arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) > (arr_9 [i_2] [i_1] [i_1 - 2] [i_1 - 2])))))))));
                            var_16 = ((var_8 << (((4068169725 + var_7) - 4068169801))));
                            var_17 *= (!4068169740);
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [3] [i_5] [i_3] [i_5] = (arr_8 [i_0] [i_0] [1] [i_0 + 1] [i_0]);
                            var_18 -= 0;
                            var_19 *= var_3;
                            arr_19 [i_5 - 1] [i_1] [i_5] [i_5] [i_1] [i_0] = (min(4068169740, 4294967293));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_20 = ((var_10 ? ((-2673788102 >> (var_7 - 62))) : (arr_14 [3] [i_3] [i_2] [i_0] [i_0])));
                            arr_22 [i_6] [i_2] [i_2] [i_3] = ((!((min(1811161285, 4294967295)))));
                            var_21 = ((((~(arr_1 [i_0 - 1] [i_0 + 1]))) * 32758));
                        }
                    }
                    var_22 = (arr_20 [i_2] [i_2] [i_2] [i_2] [1] [i_2]);
                }
            }
        }
    }
    var_23 = 12794;
    #pragma endscop
}
