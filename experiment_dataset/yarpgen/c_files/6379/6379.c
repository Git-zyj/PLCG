/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -500511290;
    var_16 = (max(var_16, var_7));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 ^= arr_1 [7];
        arr_3 [i_0] = (var_5 ? (min(var_9, ((~(arr_2 [i_0] [i_0]))))) : ((~(2122248651 & var_6))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_0] [14] [i_0 - 1] [i_1] [i_0] [i_0] [i_0] = var_0;
                            var_18 = ((arr_0 [i_0] [i_0]) | (((((arr_13 [i_0] [i_1] [i_0] [11] [i_4] [i_4]) ? var_6 : var_11)) | (arr_11 [i_2] [i_1] [i_2] [i_1] [i_4]))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_19 = max((((max(var_2, (-2147483647 - 1))) | (min((arr_18 [i_2] [7] [i_5]), var_7)))), (((arr_9 [7] [i_0 - 2] [i_0 - 2]) % var_12)));
                            arr_19 [3] [i_1] [i_2] [i_1] = 134217727;
                            arr_20 [i_1] [i_1] [i_1] = (592375125 >= -858456231);
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] = min((((var_3 && (arr_6 [4] [i_1] [4])))), (arr_7 [i_1]));
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_6] = var_10;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_27 [i_1] = ((!((min(((var_4 ? var_9 : (arr_18 [i_0] [i_0] [i_0]))), -1270106457)))));
                            var_20 = (min(var_20, (min((((var_5 >> (-1321573001 + 1321573011)))), (((2122248651 - 1519978014) ? (var_11 & var_6) : (arr_14 [i_0] [i_1] [i_0] [i_3] [i_7] [i_3] [i_0])))))));
                        }
                        arr_28 [i_1] [i_1] = max(-1361244664, var_0);
                        var_21 = var_11;
                        var_22 = var_0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
