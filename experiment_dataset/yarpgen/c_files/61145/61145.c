/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (-1165510608 + 2982130529606573924);
    var_13 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((var_3 ? 1165510608 : ((max((arr_3 [i_0 + 3] [i_0 + 1]), (arr_3 [i_0 + 3] [i_0 + 1]))))));
                arr_7 [i_0] [i_0] [i_1] = (((((arr_2 [i_0 + 1]) >> (((arr_2 [i_0 + 3]) - 232900173)))) & (((arr_2 [i_0 + 2]) << (((((arr_0 [i_0 + 3]) ? var_6 : var_2)) - 5630))))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_2] = var_0;
                    var_14 = var_9;
                    arr_11 [i_2] [i_2] [i_0] [i_2] = (arr_2 [i_0 + 2]);
                    var_15 = (arr_5 [i_0 - 2]);
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_16 = ((~((var_0 ? ((((arr_0 [i_1]) ? var_6 : 255))) : var_10))));
                    var_17 = ((15464613544102977691 ? -237503004 : 2305842992033824768));
                    var_18 += ((+(((arr_8 [i_3] [i_3] [i_3 - 1]) >> (((arr_8 [i_0] [i_1] [i_3 - 1]) - 1000735322730799904))))));
                    var_19 = (((arr_3 [i_0 - 1] [i_0 - 1]) ? ((-(arr_3 [i_3] [i_3 + 1]))) : (((arr_3 [i_0] [i_0]) ? (arr_3 [i_3 + 2] [i_1]) : (arr_3 [i_0 - 1] [i_3])))));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max(((-(arr_12 [i_0 + 2]))), (arr_1 [i_0 - 1]))))));
                                var_21 ^= var_2;
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_0] = ((((((var_6 + var_10) ? ((39946 ? var_1 : var_4)) : var_0))) ? (arr_21 [i_0] [i_5]) : (((-var_1 ? ((((arr_15 [i_1] [i_1] [i_6]) - 1165510614))) : (((arr_2 [i_6]) ? var_11 : 237502997)))))));
                                var_22 ^= ((var_3 * ((((var_3 ? var_3 : var_10)) / var_1))));
                            }
                        }
                    }
                    var_23 = ((arr_18 [i_0] [i_0] [i_0] [i_0]) * ((((arr_5 [i_1]) ? -var_7 : (arr_15 [i_0] [i_1] [i_4])))));
                }
            }
        }
    }
    var_24 = (max(var_24, var_7));
    #pragma endscop
}
