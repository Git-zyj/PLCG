/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = ((105 ? (arr_2 [i_1] [i_2] [i_3]) : (max(56, (arr_3 [i_0 - 1])))));
                            arr_8 [i_0] = ((((((arr_6 [i_0]) > 56)) ? (~var_3) : (var_9 || var_6))) > (((((~var_2) + 2147483647)) >> (((~var_2) + 17621)))));
                        }
                    }
                }
                var_13 ^= ((((var_3 && ((max(0, (arr_4 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))))) ? ((((((arr_4 [i_1] [i_0] [i_1] [i_0]) | 181))) ? 3519347272 : (arr_7 [i_0] [i_1] [i_0]))) : -var_0));
                var_14 = var_1;
            }
        }
    }
    var_15 = (max(((min(var_1, (var_11 <= var_11)))), 4393784853016414432));
    var_16 = (max(var_16, (((var_8 << ((((-43 ? 63 : -4393784853016414411)) - 32)))))));
    #pragma endscop
}
