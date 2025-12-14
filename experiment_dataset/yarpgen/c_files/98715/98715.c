/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [1] = (max(((+((((arr_2 [i_2]) || (arr_5 [i_0])))))), ((12958 ? 27090 : 0))));
                    var_14 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, var_10));
                                var_16 ^= ((((2032 ? (((arr_7 [i_3] [i_3] [i_3]) - (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_6 [1]))) == (((((((arr_10 [i_0] [i_1] [i_3] [i_0]) ? 7 : (arr_3 [i_4] [i_4] [i_4])))) ? (((arr_8 [i_3]) ? (arr_3 [i_0] [14] [i_4]) : (arr_6 [i_1]))) : (arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3] [i_2]))))));
                                var_17 = (min(var_17, (((((min(((4254 ? var_1 : var_2)), (((var_11 << (((arr_4 [i_1]) - 30501)))))))) ? var_3 : -290)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [10] [i_2] [i_5] [i_6] = ((+(((((arr_7 [i_0] [i_1] [i_1]) & (arr_18 [i_2] [19] [1] [i_2] [i_2] [i_2] [22]))) | (((arr_3 [i_0] [i_0] [i_6]) ? var_7 : (arr_18 [i_0] [i_0] [6] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_20 [i_0] [i_1] [i_2] [i_5 - 1] [i_6] = ((((14 ? 2032 : ((29720 ? 1 : var_4)))) / var_8));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (((~((16383 | (arr_3 [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [0] [i_7] [i_0] [i_8] [i_9] &= arr_18 [i_0] [i_0] [12] [i_0] [4] [i_0] [i_0];
                                var_19 = 16204856007799831509;
                                arr_30 [i_8] [i_0] [i_1] [1] [1] [24] [0] = (((((arr_17 [i_0] [i_1] [i_0] [i_1] [i_9]) ? (((arr_24 [i_9] [i_8] [i_8] [i_0]) | var_4)) : var_5)) >> ((1 & (arr_14 [i_0] [i_0] [i_0])))));
                                var_20 = (max(var_20, (arr_14 [i_1] [i_1] [i_7])));
                                arr_31 [i_7] [i_8] [20] [20] [i_7] [i_8] [20] = (arr_11 [i_0] [i_1] [i_7] [i_9]);
                            }
                        }
                    }
                }
                var_21 = (max(var_21, ((((((((min((arr_6 [i_1]), (arr_8 [i_0])))) ? (~8167680285480128595) : (((max((arr_16 [i_0] [i_0] [i_0] [i_1]), var_4))))))) + (arr_8 [i_0]))))));
            }
        }
    }
    var_22 = ((var_5 ? (~3111190423) : var_7));
    #pragma endscop
}
