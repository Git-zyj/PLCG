/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((-(4294967295 + var_12))) - ((max(((252 ? var_7 : 3)), ((65535 ? var_5 : var_4)))))));
                arr_8 [i_1] [9] = (max(var_8, var_8));
                var_14 = (((((var_4 ? var_11 : var_13)) > (min(var_0, -118161674)))));
                var_15 = ((var_8 ? 4 : ((229 ? 65535 : (arr_6 [i_1] [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_2] [i_3] [i_2] = (((!var_6) ? (arr_10 [i_2]) : var_6));
                        var_16 = (min(var_16, 8));
                        arr_20 [i_5] [i_2] [i_4] [9] = ((238 ? 247 : 251));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_17 = (max(var_0, (arr_17 [i_2] [i_2] [i_3] [i_4] [i_6])));
                        var_18 = var_11;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_19 = (max(var_19, var_8));
                        var_20 *= (((((min(var_2, var_5)))) == ((var_3 ? var_13 : 885278779174433661))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_21 = (((((var_7 ? var_11 : 1))) / ((((var_6 ? var_11 : var_10)) | ((6358 ? -2712209513192679716 : 251))))));
                                arr_35 [i_2] [i_2] [i_3] [i_4] [i_8] [1] = var_12;
                                var_22 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_23 = ((((min(var_10, 1))) ? (((~(max(0, -2121762440))))) : (max((arr_43 [i_13 - 1] [i_10 + 1] [i_10 + 2]), (arr_42 [i_13 - 1] [i_13 - 1] [i_10 + 1] [i_10])))));
                                arr_50 [2] [1] [i_13] [11] = min((66 - var_5), (((((224 ? 131071 : var_1))) ? (var_10 > var_8) : var_6)));
                            }
                        }
                    }
                    arr_51 [5] = var_12;
                    var_24 = min(0, 65535);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 3; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            {
                var_25 = (((((4294967282 ? (!28) : var_13))) ? var_5 : ((((((var_10 ? 0 : var_11))) || ((max(var_4, 1))))))));
                var_26 += (arr_54 [i_15]);
                var_27 &= ((((((!var_11) ? (~3239258511) : var_7))) ? (var_13 < var_12) : var_12));
            }
        }
    }
    #pragma endscop
}
