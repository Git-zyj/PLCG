/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [16] = ((1812026128 / ((((max((arr_3 [i_0] [i_0] [21]), var_7))) ? var_13 : (arr_0 [i_0 - 2])))));
                var_15 = var_9;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] = 2482941183;
                    var_16 = (arr_5 [15] [i_0] [i_2]);
                    var_17 = (((((((max(var_14, (arr_0 [i_0])))) ? (arr_5 [i_0 - 1] [i_0] [i_0 + 2]) : (arr_3 [i_0] [i_1] [i_2])))) < ((-16 ? -30 : 2482941170))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [5] [7] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = (((((((3931733085 ? var_5 : (arr_1 [i_3] [i_3])))) % var_0)) == ((((arr_8 [i_0 + 2] [i_0 - 3] [i_0] [i_0 + 2] [i_0 + 1]) | var_3)))));
                                arr_14 [i_0] [3] [i_0] [i_0] [i_4] = var_12;
                                var_18 += ((((-23857 ? var_2 : ((var_3 ? var_9 : (arr_3 [i_2] [i_3] [13]))))) % (((-(~var_4))))));
                                arr_15 [9] [i_4] [i_4] [i_0] [i_2] [i_4] = ((1812026151 ? (((((-(arr_6 [i_0] [i_0] [i_0])))) ? (var_4 & 4294967295) : (var_9 == var_12))) : ((((((((!(arr_8 [i_0] [i_0 - 1] [i_0] [8] [i_0]))))) > (max(var_0, (arr_6 [i_0] [18] [i_2])))))))));
                                var_19 = var_11;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_7] [0] = (((((2016305136095137818 ? 122 : -1))) ? ((min((arr_1 [i_0] [i_0]), var_7))) : (((((arr_12 [i_7] [i_6] [i_5] [i_1] [i_1] [i_0]) <= var_12)) ? 225 : (arr_11 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6] [i_7])))));
                                var_20 = ((~var_0) ? var_13 : (((-(arr_21 [i_0] [19] [i_6] [i_0 + 2] [i_1])))));
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] [i_7] = (min(-13, 1));
                                var_21 = ((((158 ? 8 : 3)) / ((~(arr_12 [i_0] [i_1] [i_5] [i_5] [i_6] [i_1])))));
                                arr_25 [i_0] [16] [0] [i_1] [i_0] = var_5;
                            }
                        }
                    }
                    var_22 = ((8 % (235 - 14598474275615038414)));
                    arr_26 [i_0] [i_0] [i_0] [i_5] = ((-390068798 ? 14 : -1));
                }
            }
        }
    }
    var_23 = -var_10;
    var_24 = ((((!var_12) ? (min(var_12, var_4)) : var_10)));
    #pragma endscop
}
