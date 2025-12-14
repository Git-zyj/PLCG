/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_11 = (max(var_11, ((32767 ? 12526955552687305507 : 26858))));
                        arr_12 [i_2] [i_2] = (arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1]);
                        arr_13 [i_0] [i_1] [i_2 - 1] [i_2] = (arr_2 [i_0] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_12 = (min(var_12, (((-(arr_4 [i_2 - 2]))))));
                        var_13 = (arr_10 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0]);

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_19 [i_2] = (((arr_10 [i_1] [i_1] [i_1] [i_2] [i_2 + 1] [i_1]) - (arr_10 [i_1] [i_1] [i_1] [i_1] [i_2 + 1] [i_5])));
                            arr_20 [i_0] [i_2] [i_1] [i_2 + 2] [i_4] [i_4] [i_5] = 1;
                            var_14 = (max(var_14, ((((((7967869627672163647 ? 1 : 18107))) ? (arr_6 [i_2 - 3] [i_5] [i_5] [i_2 - 3]) : ((10478874446037387947 ? (arr_17 [i_0] [i_1] [i_2] [i_2] [i_2]) : 5875571198665059303)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_15 *= ((-(arr_16 [i_6] [i_2 - 3] [i_6] [i_7] [i_6] [i_1])));
                                var_16 = (arr_14 [i_1] [i_1] [i_7] [i_2] [i_1]);
                                var_17 = (min(var_17, (((((-(arr_16 [i_6 - 1] [i_2] [i_2] [i_0] [i_2 - 1] [i_6]))) * (((max((arr_8 [i_0] [i_0] [i_1] [i_2 - 1]), var_6)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= var_8;
    #pragma endscop
}
