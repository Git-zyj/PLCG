/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_6 ? (var_7 || var_8) : var_1)) == (((-(min(520093696, 127)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_11 ^= (((((255 ? (arr_0 [i_0]) : ((24 / (arr_4 [i_0] [i_1 - 4] [i_1])))))) ? (arr_4 [i_0] [i_0] [i_1 + 1]) : ((var_4 | (var_7 | var_3)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = var_7;
                    var_12 = (((((var_5 ? (((-97 + 2147483647) >> (((arr_6 [i_0] [i_1]) + 21743)))) : 15))) ? (arr_7 [i_0] [i_1] [i_2]) : var_5));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_13 = (((((arr_6 [i_0] [14]) ^ (arr_6 [i_1] [1])))) ? var_3 : ((((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])))));
                    var_14 = 520093702;
                    var_15 = ((-0 ? (((2114640617 / (arr_4 [i_0] [i_3 - 1] [i_1 - 3])))) : ((((var_7 ? 18446744073709551615 : (arr_3 [0]))) * (arr_7 [i_0] [13] [i_3])))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [6] [i_1 - 1] [i_1 - 1] [i_3] = (~var_2);
                        var_16 -= ((max((((arr_6 [i_0] [i_0]) > (arr_9 [i_4]))), (arr_11 [i_1] [i_1] [i_0] [12] [i_1] [i_1 + 1]))) ? 65472 : var_0);
                        arr_14 [i_0] [i_3] [15] [i_4] = (max((1 / 6142925193814427764), (((((max(var_6, (arr_3 [i_1])))) * (arr_9 [i_3]))))));
                        var_17 -= (((((arr_12 [i_0] [i_1] [i_3] [i_4]) ? (arr_2 [i_0]) : (~var_4))) & 1));
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_1 + 2] [i_3] [i_3] = (5121945413664982036 || var_9);
                        arr_19 [i_3] [i_1 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] = (((arr_2 [i_0]) && var_6));
                        arr_20 [i_0] [i_1] [12] [12] &= ((!((((!(arr_7 [i_0] [i_1] [i_3 - 1]))) && (arr_3 [i_0])))));
                        arr_21 [i_0] [i_0] [i_3] = 32767;
                    }
                }
            }
        }
    }
    #pragma endscop
}
