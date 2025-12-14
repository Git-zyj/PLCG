/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_12, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((4019444606227104186 ? (!var_12) : ((-3068239026830379130 ? ((var_2 ? 2442605171 : 4294967295)) : var_13)))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_4] = 0;
                                var_19 = (((((-(arr_6 [i_1] [i_1 + 1] [i_1 + 1])))) ? ((-((-350296317 ? 127 : -195258465)))) : ((((max(1, 1)) ? (((arr_6 [1] [i_1] [1]) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : var_1)) : 1)))));
                                var_20 += 1227728427;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_0] = min((~1292532220231189329), var_1);
                    arr_13 [i_0] [i_0] = (min((min((arr_10 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2]), var_8)), (-127 - 1)));
                    arr_14 [i_0] [i_0] [i_0] [11] = var_10;
                }
            }
        }
    }
    var_21 = min(var_10, var_12);
    #pragma endscop
}
