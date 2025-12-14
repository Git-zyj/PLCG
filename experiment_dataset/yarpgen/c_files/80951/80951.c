/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = (max(var_19, (((((2698234115696945830 >> (var_4 - 160976419))) << (2698234115696945805 + 487265699))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((-(max((!var_14), 15748509958012605786))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_21 = ((15748509958012605786 | ((-(arr_0 [i_0])))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] = 2698234115696945814;
                        arr_12 [i_2] [i_1] &= (((((arr_0 [i_2]) << (((var_9 / var_4) + 26295948817))))) ? ((((arr_5 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) || ((max(67108860, var_14)))))) : 1334308506358532286);
                        var_22 = var_0;
                        var_23 += var_3;
                        var_24 = (arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_25 = (max(var_25, (min(2698234115696945814, 10573))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = ((((~-67108860) ? 2698234115696945789 : ((((arr_14 [i_4] [i_1 + 1] [i_2] [i_0]) + (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) + (((arr_8 [i_1 + 2] [i_0] [i_0] [i_0 - 1]) ? var_0 : (arr_8 [i_1 + 1] [i_0] [i_0] [i_0 - 1]))));
                        var_26 = ((15748509958012605785 ? 5 : var_3));
                    }
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_27 = (((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]) * 0));
                    var_28 = ((((((((arr_6 [i_1] [i_1] [i_0]) ? var_13 : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))) || (((arr_0 [i_0]) < (arr_9 [i_1] [i_1] [i_1] [i_0] [i_1]))))) ? var_7 : ((max(var_10, -118)))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_30 [i_6] [i_1] [i_8] |= (arr_27 [i_8] [i_6] [i_6] [i_7]);
                                var_29 = (min(var_29, ((max(var_15, (min((max(469762048, 1073741823)), var_8)))))));
                                var_30 = ((!((((12 >> (-12 + 30)))))));
                                arr_31 [i_0 + 1] [i_1] [i_0] = (min(((((arr_13 [i_0 - 1] [i_0] [i_1 + 2] [i_6] [i_8] [i_8]) && (arr_24 [i_0 - 1] [i_0] [i_1 - 1] [i_8])))), (arr_24 [i_0 + 1] [i_1] [i_1 - 1] [i_1])));
                                var_31 = ((~(((arr_29 [i_0] [i_8] [i_8] [i_7 - 1] [i_0] [i_0]) ? (0 | 15748509958012605785) : 2623812613))));
                            }
                        }
                    }
                    var_32 = 21656;
                }
                arr_32 [i_0] [i_0] [i_1 - 1] = (min((!1761448533), (arr_29 [i_0] [i_0] [i_0 - 2] [i_1 + 2] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
