/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((((var_16 ? -1 : var_3)) - (-4125584461792830342 + var_5))), var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 &= (((((~((var_4 ? var_0 : 45))))) ? (arr_3 [2] [2]) : var_8));
                    var_19 = var_7;
                    var_20 = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = -var_3;
                                var_22 = (((arr_3 [i_0] [i_0]) ? (arr_11 [8] [i_1 - 3] [i_1 - 3] [0] [i_1 + 1] [0] [i_3]) : ((18446744073709551615 ? 49532 : 5003413688288793854))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                var_23 &= ((((var_0 ? (arr_19 [i_6 - 2] [11] [i_6]) : 45)) / (((arr_19 [i_6 - 3] [i_6] [i_6 - 3]) ? var_6 : (arr_19 [i_6 - 3] [i_6] [i_6 - 3])))));
                var_24 = arr_17 [3] [i_5] [i_6];
                var_25 = -4918560104917840015;
                var_26 += var_2;
            }
        }
    }
    var_27 = 16;
    #pragma endscop
}
