/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((var_5 ? var_2 : (((var_7 * var_5) % var_3))));
    var_12 = (-var_3 || var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((((((((arr_0 [i_0]) ^ var_4))) && (((var_5 ? (arr_2 [i_0 + 2] [i_0 + 2] [i_1 - 1]) : (arr_0 [i_1]))))))), 57325));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 ^= ((+((((arr_1 [i_2]) < (min((arr_7 [0] [0] [i_2] [0]), (arr_6 [i_0] [i_1 + 1] [i_1] [1]))))))));
                    var_14 = var_7;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = ((((!(((var_3 ? (arr_3 [i_0] [i_1] [i_3]) : var_1))))) ? 702115530 : (((-(arr_8 [i_0 - 1] [i_0 + 1] [i_1]))))));
                    var_16 ^= var_9;
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_1] [i_0 + 2] [i_0 + 2] [i_1] = var_6;
                    arr_16 [i_1] [i_1] [i_4] [i_1] = (((((~(arr_3 [i_1 + 1] [9] [i_1 + 1])))) ? (((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_1] [5]) : (arr_3 [i_1 + 1] [i_1 + 1] [4]))) : ((~(arr_3 [i_1 + 1] [i_1 + 1] [i_1])))));
                }
                var_17 = arr_4 [i_1] [i_0 + 1];
                var_18 ^= ((((((((var_5 ? 21 : var_6))) ? (var_9 & 8) : (arr_2 [i_0] [4] [4])))) ? (((max((arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]), 5097736752572063955)))) : ((((max(65535, 4045364154))) ? (((1353940209 && (arr_14 [i_0] [i_1 + 2] [1] [i_0])))) : var_4))));
                arr_17 [i_1] [7] = (((((5385524486020372045 ? 1 : 4074853908399101221))) || (((arr_13 [8] [i_1] [i_1 + 1] [8]) && var_1))));
            }
        }
    }
    #pragma endscop
}
