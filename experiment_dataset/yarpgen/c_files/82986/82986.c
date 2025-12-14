/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 36;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = (arr_6 [i_1] [i_1] [i_1] [i_1]);
                        var_11 = (((((((arr_1 [i_0]) ^ var_2))) ? var_3 : (arr_7 [16] [i_0 - 1]))));

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_0] [i_4] [i_1] [i_1] [i_1] [i_4] [i_0] = (arr_1 [i_0]);
                            arr_15 [i_4] = (min(((-(max(-32740, -5153735425972009910)))), 43548));
                            var_12 = ((-36 / (((var_5 >= var_8) ^ (arr_5 [i_2] [i_2])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_13 -= (arr_17 [i_0] [i_1] [i_0] [i_1]);

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_14 = (!7437);
                            arr_21 [i_0] [i_1] [i_0] [i_5] [i_6] [i_5] = var_3;
                        }
                        var_15 = ((-(~35)));
                        var_16 = (((arr_3 [i_0 + 1] [i_5] [i_2]) - (((var_0 <= (arr_7 [i_5] [i_5]))))));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_17 = (-54 / 1);
                        var_18 = (min(((((((arr_17 [i_1] [i_1] [i_1] [i_1]) / var_2))) ? -36 : (((arr_19 [i_0] [i_0] [13] [i_0]) / var_4)))), 0));
                        var_19 = (max(var_19, 0));
                    }
                    arr_25 [i_1] [i_0 - 1] = var_9;
                    var_20 = var_5;
                    var_21 = (min(var_21, (var_2 != 13383)));
                }
            }
        }
    }
    #pragma endscop
}
