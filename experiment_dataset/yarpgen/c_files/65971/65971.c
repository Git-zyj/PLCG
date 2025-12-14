/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = -var_17;
                                var_22 ^= (((((min(3823747572009744925, var_19)) & (1907855443451136310 ^ 0))) - 65531));
                                arr_11 [i_1] [i_0] [i_1] [i_1] [i_1] = var_5;
                                var_23 = var_17;
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_0] = max(2147483647, ((var_13 << (1 + 0))));
                }
            }
        }
    }
    #pragma endscop
}
