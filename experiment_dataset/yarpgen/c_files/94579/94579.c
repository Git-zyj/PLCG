/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0 - 1] = (((((arr_5 [i_2] [i_2] [i_1] [i_0]) | (arr_0 [i_1] [i_1]))) & ((max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))))));
                    var_20 = (((((((arr_3 [i_0] [1] [i_0]) ? 29 : (arr_0 [i_1] [i_2]))))) ? (arr_2 [i_0]) : ((((-5220 / (arr_4 [i_0] [i_1] [i_1] [i_2]))) + ((max((arr_4 [i_1] [i_1] [i_1] [5]), (arr_2 [8]))))))));
                }
            }
        }
    }
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_22 &= (((((max((arr_7 [i_4]), (arr_10 [i_3] [i_4]))) >> ((((arr_7 [i_3]) > (arr_10 [i_3] [i_4])))))) << ((((var_10 ^ ((1 ? -1885666925 : 17637881195903622471)))) - 13252309471017976588))));
                arr_13 [i_4] [i_4] = (max((min((max((arr_10 [i_4] [i_4]), (arr_11 [i_4] [i_4]))), (var_2 ^ var_15))), ((((~var_18) != (arr_7 [12]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                var_23 = ((((((var_5 % 60) & ((((arr_14 [i_5 - 1]) ? (arr_5 [6] [i_6] [i_6] [i_6]) : (arr_5 [i_5] [i_6 + 1] [i_5] [8]))))))) ? (((min((arr_15 [i_5]), (arr_7 [i_5 + 2]))))) : (max((arr_11 [i_6] [2]), 808862877805929164))));
                var_24 = (max(var_24, (arr_14 [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_25 = ((((min(var_1, var_2)))));
                            var_26 = (max(var_26, (((-9208155946625079334 * (min(15528032692269118950, -17637881195903622451)))))));
                        }
                    }
                }
                var_27 = (min((((arr_8 [i_5]) - -83)), (min((arr_15 [i_5 + 3]), ((-(arr_17 [i_6])))))));
                var_28 -= ((arr_14 [i_5 - 1]) != (6 & 50378));
            }
        }
    }
    #pragma endscop
}
