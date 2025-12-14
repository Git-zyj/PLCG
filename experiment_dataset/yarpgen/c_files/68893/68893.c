/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_4;
    var_21 = ((-var_16 * ((max((!var_4), (min(-1703350190, var_9)))))));
    var_22 *= (~(min((max(var_16, var_17)), var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 |= (min((arr_6 [i_1] [i_3] [i_3] [i_3]), var_14));
                                var_24 -= (arr_10 [i_1] [i_3] [i_4]);
                                arr_13 [i_1] &= ((((((!-1703350161) ? (~1) : var_18))) ? (((arr_4 [i_3 - 1] [i_1] [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_4 [i_3 - 1] [i_0] [i_0 - 1]))) : (((!(((30104 ? 16467284263529295370 : 3932439865))))))));
                            }
                        }
                    }
                    var_25 = (max(var_25, ((((((max(362527430, 32761))) ? (arr_0 [i_0 + 1]) : (~var_19))) / (min(17592186044415, var_5))))));
                    arr_14 [i_2] [i_1] [i_2] = ((~((~(min(268759466, (arr_3 [i_0] [i_1] [i_2])))))));
                    var_26 = (~((14 ? (arr_5 [i_0] [i_2] [i_2] [i_2]) : (arr_0 [i_0 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
