/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(2147483647, var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 *= (!-var_3);
                    var_15 ^= (max(-114, -2147483647));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [14] [14] [i_0] [i_3] [i_3] [6] [i_2] = (((((29034 ? (arr_10 [10] [10] [i_2] [10]) : 2147483647)) >> (12792 - 12776))));
                                var_16 &= (max(((~(max(var_12, 7786583781863157527)))), ((-17701 ? 11003003687688761656 : 17592186044415))));
                            }
                        }
                    }
                    var_17 = -var_4;
                }
            }
        }
    }
    var_18 = var_4;
    var_19 ^= ((var_10 ? ((var_4 ? var_5 : -8647715141354991222)) : ((((max(18381772949021543859, -12798)))))));
    #pragma endscop
}
