/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(~20081)));
    var_21 = (((!-var_7) + (!-1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = -12;
                                var_23 = var_16;
                            }
                        }
                    }
                    var_24 = (min(var_24, (~var_0)));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = var_2;
                }
            }
        }
        var_25 = (((((-4 & var_13) >> (((((-12 + 2147483647) << (230 - 230))) - 2147483614)))) << ((((-36 ? var_14 : (!0))) - 8078546700185281196))));
    }
    var_26 = ((var_16 ? (((~(var_4 <= var_14)))) : ((-1 ? -var_18 : -4294967272))));
    var_27 &= 4;
    #pragma endscop
}
