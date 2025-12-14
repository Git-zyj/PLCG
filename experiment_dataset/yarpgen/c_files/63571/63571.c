/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [6] = ((((~(max(-5818567550545360875, 2147483647)))) + (!-0)));
        arr_5 [i_0] = ((~(~2147483647)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_18 [i_1] [i_3] [i_3] [i_2] [i_1] [i_1] = ((~(!2147483647)));
                            var_17 = ((~(max(-70, 2147483647))));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 ^= max(((((-1 ^ (-2147483647 - 1))) << (((((~2147483636) - -2147483596)) + 51)))), (!-2147483647));
                            arr_22 [i_0] [i_0] [19] [i_1] [i_5] = max((~0), (min((~7174585000061025916), (!0))));
                        }
                        var_19 = (max(var_19, ((-((~((min(0, 0)))))))));
                    }
                }
            }
        }
        var_20 = (~((max(1, (17410 >= -2147483647)))));
    }
    var_21 += ((~(--65024)));
    var_22 = (max((~-0), (max(-126, (~7922062924162606649)))));
    var_23 = (max(var_23, (~-119)));
    #pragma endscop
}
