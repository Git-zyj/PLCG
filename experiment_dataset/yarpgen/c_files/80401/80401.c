/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((min(var_2, (((-321710045 + 6976625738666310181) ? 1291239717108232313 : var_4)))))));
                var_20 = ((var_3 ? (((~var_5) ? (((arr_1 [i_0]) ? var_2 : 144115188075724800)) : (arr_1 [i_0]))) : (arr_2 [i_0] [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = ((!(~var_5)));
                                var_22 = (max((arr_3 [i_0] [i_1] [i_4]), (~var_4)));
                                arr_12 [i_3] [i_4] [i_0] [i_3] [i_4] = var_16;
                                var_23 = 1770148732;
                            }
                        }
                    }
                }
                var_24 = ((((!(arr_3 [i_0] [i_1] [i_1]))) ? (((-23106 ? -11468 : (arr_3 [i_0] [i_1] [i_1])))) : -var_3));
                var_25 = max(((((-(arr_0 [i_0] [i_0]))))), var_7);
            }
        }
    }
    var_26 = ((((var_10 > var_3) ? (min(var_12, 2956516421353919013)) : -var_15)));
    var_27 |= var_16;
    #pragma endscop
}
