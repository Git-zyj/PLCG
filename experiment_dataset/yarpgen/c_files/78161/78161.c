/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!14613055395892400740) ? (max((-621098886 - 6765839947047654395), (-621098886 - var_2))) : (((~(-285105402 / var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((621098897 ? (((var_12 ? (!27) : (!var_6)))) : var_2));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [3] [i_2] [i_2] = ((1 ? (!255) : 228));
                            var_19 = (((((arr_10 [i_2 - 2] [i_2 + 1] [i_2] [i_3 + 1] [i_3 - 1] [i_3]) != -16510)) ? ((var_10 & ((var_2 ^ (arr_11 [12] [i_1] [i_2] [i_3]))))) : (((-1024 ? (arr_10 [i_3 - 1] [i_3 - 1] [13] [10] [i_3] [i_2]) : 31744)))));
                            var_20 = (min(var_20, -1));
                            arr_14 [i_0] [i_1] = ((0 > ((24291 ? (arr_0 [i_3 - 2]) : (arr_0 [i_0])))));
                        }
                    }
                }
                arr_15 [i_1] = ((1442033679 ? 1 : 247));
                var_21 = 0;
            }
        }
    }
    #pragma endscop
}
