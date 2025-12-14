/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 &= ((-(-267381184307934455 <= 3477622536)));
    var_18 = var_6;
    var_19 = (((3477622524 ? 3477622536 : -267381184307934472)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 &= ((-(arr_2 [i_0 - 1] [i_0 - 1])));
                var_21 = ((((((var_13 || 817344774) ? (arr_0 [i_0]) : (arr_3 [i_0])))) ? ((-(arr_4 [i_0 - 1]))) : (arr_4 [i_1 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3] [i_4] = (arr_11 [i_1] [i_2] [i_3] [i_4]);
                                arr_14 [i_0 - 1] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (-(min((32767 + 3477622517), (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [15] [i_0] [i_0 - 1]))));
                                var_22 = ((!(((8519329351968747908 + (-267381184307934455 / -6500763382708562467))))));
                                arr_15 [i_1] [i_1] [i_3] [i_3] [i_4] = 0;
                            }
                        }
                    }
                }
                arr_16 [i_0 + 1] [i_1] = (arr_11 [i_1] [i_0 + 1] [i_0 + 1] [i_1]);
                arr_17 [i_1] = (((arr_7 [i_1 - 2] [i_0 - 1]) * 0));
            }
        }
    }
    #pragma endscop
}
