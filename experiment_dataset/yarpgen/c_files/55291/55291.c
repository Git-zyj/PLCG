/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_12 = (max(var_12, ((((((arr_7 [i_0] [i_2] [i_0] [i_0]) ? ((((arr_5 [i_0]) ? var_7 : 1))) : (max((arr_6 [i_0] [i_0] [i_0]), var_1))))) | (((arr_4 [i_1 + 2] [i_1 + 1] [i_1]) << ((((var_5 ? (arr_8 [i_0] [i_0] [i_1 + 3] [i_2 + 1] [i_3]) : (-127 - 1))) - 157))))))));
                        var_13 = ((((((((min(63055, 63)))) + (arr_7 [i_0] [i_0] [i_0] [i_3])))) ? var_9 : (arr_10 [i_1] [i_1] [i_1] [i_3])));
                        var_14 = (min(var_14, (arr_11 [9] [9] [i_2] [15])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_15 = (((min((max(14584606223894967535, (arr_2 [i_0]))), 16208019854799767027)) << (var_9 - 5801)));
                                var_16 *= (min(((((615434034 ? var_9 : (arr_2 [i_4]))) + ((max(var_2, var_6))))), ((var_5 << (var_8 - 10581352952409978117)))));
                            }
                        }
                    }
                    var_17 = ((var_2 | ((var_7 ? 2468 : 2238724218909784600))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 = arr_16 [i_0] [i_1 + 1];
                                var_19 = 63;
                                var_20 = (min(((((((arr_17 [i_0] [i_1 - 1] [i_2 - 1] [9] [i_7 - 1]) ? var_1 : var_0))) == 16208019854799767044)), ((var_5 <= (arr_1 [i_0])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_21 = arr_0 [i_2];
                        var_22 *= ((var_3 ? 18446744073709551615 : (((((arr_2 [i_8]) || var_7))))));
                        var_23 = (((-7520680577844722886 + 9223372036854775807) << (7520680577844722905 - 15577)));
                        arr_24 [i_8] [4] = (~var_6);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = (min(var_24, (((var_9 >> (16208019854799767027 - 16208019854799767026))))));
                        var_25 = -32753;
                        var_26 = ((-7520680577844722889 ? -80 : -11662));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_30 [i_2] [i_10] = (arr_14 [i_10] [5] [i_1 + 2] [i_1] [19] [i_0]);
                        var_27 = ((-(((arr_19 [i_10] [i_2 - 1] [i_1 + 3] [i_0]) ? (arr_6 [i_0] [i_2 - 1] [i_0]) : (arr_27 [i_0] [i_0] [i_1 + 1] [i_2] [14] [14])))));
                        var_28 = (min(var_28, (((((min(-73474148, -32753))) || ((((-32759 + 2147483647) >> (((arr_16 [i_1 - 1] [i_1 - 1]) + 12082))))))))));
                    }
                }
            }
        }
    }
    var_29 = (((((var_6 ? (((var_0 << (var_9 - 5793)))) : -3804635471479233305))) ? var_1 : ((18446744073709551615 | (!var_9)))));
    var_30 = 1;
    var_31 &= ((((~((var_4 ? var_5 : var_9)))) != var_4));
    #pragma endscop
}
