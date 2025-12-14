/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((12986225583825557235 <= (~var_8)));
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [4] [4] [4] [i_4] [i_4] = ((5460518489883994374 ? 18446744073709551615 : var_2));
                                var_12 -= ((((var_6 ? var_5 : var_3)) * 18));
                                var_13 = (((var_7 ? var_9 : 16)) * (((var_3 ? var_5 : var_8))));
                                arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [4] [i_0] [i_4] = ((!31343) % ((var_8 ? 5460518489883994398 : 18446744073709551578)));
                                var_14 = (~13758960249929936884);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [3] [i_0] [i_0] [i_0] = (((var_1 | 32765) ? ((var_1 ? var_0 : var_0)) : (var_3 >= 16383)));
                        arr_20 [i_0] [i_1] [i_0] = ((!(!17)));
                        arr_21 [i_0] = (-var_1 ? (var_4 <= var_8) : (((((var_4 ? 11363295930790039039 : var_2))) ? (7298 >= 5422211855942020240) : var_3)));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] = (~var_8);
                        var_15 = (((((var_7 ? 32742 : -32741))) ? (5460518489883994362 % 14) : (~var_6)));
                    }
                    arr_25 [i_2] [i_0] [i_2] [i_2] = (((((21495 ? ((-32750 ? 32723 : var_0)) : 11932))) ^ 12349448431719232489));
                }
            }
        }
        arr_26 [i_0] = (((~var_5) ? (!-17578) : (!18446744073709551601)));
    }
    var_16 = (((((17552 ? var_1 : 32745))) || ((3940 <= ((9578455249350847483 << (23474 - 23427)))))));
    #pragma endscop
}
