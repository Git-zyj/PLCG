/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~3072) ? 3077 : 118)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_2]);
                    arr_10 [i_0] [i_1 - 1] [i_2] = (min((((arr_8 [i_1 + 1] [i_1 + 1]) ? var_3 : (arr_8 [i_1 + 1] [i_1 + 1]))), 0));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_13 [i_3 - 2] [i_0] [i_0] [i_0] = ((((arr_8 [i_3 - 2] [i_1 + 1]) < (arr_4 [i_0] [i_1 - 1] [i_0]))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_12 -= var_2;
                            var_13 = (max((((((3072 ? 3102 : -3073))) ? 1 : 3055)), -22499));
                            var_14 = (min(var_14, ((min((!var_6), (min((max(-22499, 10708323525988988016)), (((1514782368 ? 58 : -4))))))))));
                            var_15 = ((-22499 ? (min((-3055 / 11), (min(var_5, (arr_1 [i_0] [i_1 - 1]))))) : (((~((72057594037927920 ? 262136 : -3055)))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(13299512562149176136, (((var_9 ? 0 : var_7)))))) ? ((var_4 - (min(var_0, var_3)))) : var_6));
                            var_16 = (min(var_16, ((((((5 ^ ((var_4 ? var_7 : var_0))))) ^ (min((((3055 ? var_4 : var_10))), (~var_8))))))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_3] [i_0] = (arr_3 [i_0] [i_1 - 1] [i_0]);
                        arr_20 [i_0] = (min(var_2, (((arr_0 [i_0]) ? 16256 : (arr_1 [i_0] [i_0])))));
                    }
                    var_17 = (max(228, var_9));
                }
            }
        }
    }
    var_18 = var_8;
    var_19 = ((~var_3) ? ((((var_5 > (var_1 > var_0))))) : -15787241077446337150);
    #pragma endscop
}
