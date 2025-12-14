/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((var_2 ^ ((((max(591329724, -12)))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_11 = -770000106135730122;
                        arr_14 [2] [i_0] [i_1] [i_0] [16] = ((~((~(arr_7 [4] [i_1] [4] [18])))));
                        var_12 = (arr_13 [i_0] [i_0] [i_2] [i_0] [i_3]);
                        var_13 = ((((!(((-15 ? var_6 : var_1))))) ? var_8 : (arr_4 [6])));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [1] = ((var_8 ? (((arr_7 [i_0] [i_1] [5] [i_4]) - (arr_0 [i_2]))) : (((1 <= (arr_9 [4] [i_1] [i_0]))))));
                        var_14 = (max(var_14, (((var_5 / (max(((var_4 << (var_4 - 16552492542977663614))), ((var_5 ? var_8 : (arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4]))))))))));
                    }
                    arr_18 [i_1] [i_0] = (((((var_8 ? -15 : 30601))) & ((var_10 ? (((max(var_7, (arr_1 [i_2] [i_2]))))) : var_10))));
                    arr_19 [i_0] [i_1] [i_0] = ((var_8 ? (((((-1158131537 % 8429803244496963259) && var_7)))) : (((127 | 9223372035781033984) ^ var_1))));
                    var_15 = (max(34935, -997158334));
                }
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
