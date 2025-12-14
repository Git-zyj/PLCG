/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((((((~-8) >= (~var_8))))) <= (((min(var_5, -32750)) - (((14642 ? var_3 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_11 |= ((((((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_5 [10] [i_1 - 4] [i_1]))) << (((arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 4]) - 57892))))) || ((max((max(var_2, var_8)), (((-(arr_2 [i_0] [5] [i_2])))))))));
                    var_12 += (((~-35035997523505121) >> (24179 - 24125)));
                    arr_7 [2] [i_2] [i_1] [i_2] &= arr_3 [i_0] [i_0] [i_2];
                }

                /* vectorizable */
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    arr_10 [i_0] [i_1 - 2] [i_3] = -32750;

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [12] [i_0] = ((((((arr_11 [i_3]) > (arr_1 [i_0])))) - (32749 || 4294967295)));
                        var_13 += (229 != 112);
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_3 + 1] = (((arr_3 [i_3 - 3] [i_5 + 1] [i_3]) > 3739825831));
                        arr_17 [i_0] [i_0] [i_3 + 1] [i_3] [i_0] = 1227649227;
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_6] = (12536721540407711698 * 196);
                        var_14 = (max(var_14, ((((arr_6 [i_0]) || ((((arr_8 [2]) ? var_9 : 9207714816532496620))))))));
                        var_15 = (max(var_15, ((((arr_14 [i_1 - 4] [6] [i_3 + 1] [4]) - (((~(arr_4 [i_3 - 2])))))))));
                        var_16 = ((((24162 ? -10 : 0)) <= ((~(arr_3 [i_0] [4] [5])))));
                        var_17 = ((7150206793471112417 ? (arr_14 [i_1 - 2] [i_3] [i_3 + 2] [12]) : (((((arr_3 [i_0] [i_3 - 3] [i_6]) || var_6))))));
                    }
                    var_18 += (arr_14 [i_1 - 2] [i_3 - 3] [i_3 + 1] [6]);
                    var_19 += (~908919527);
                    var_20 = ((~(arr_19 [i_0] [i_1] [i_0] [i_3 - 3] [i_0])));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_21 = 24154;
                    arr_24 [i_0] [i_0] [i_0] = (arr_11 [i_1 - 1]);
                }
                arr_25 [i_0] [i_0] [12] &= (max((arr_2 [i_0] [i_1 - 3] [i_1]), (((arr_14 [0] [i_1 - 4] [i_1 + 1] [0]) >> (((~32749) + 32787))))));
                arr_26 [i_0] = ((((32750 / 65535) ? -107 : (24154 & 1))));
            }
        }
    }
    #pragma endscop
}
