/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(4045781520, -33));
    var_19 = (max(var_19, var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, (((var_2 && ((min(var_2, var_4))))))));
        arr_4 [7] [i_0] = (((max(var_0, ((min(var_16, var_16))))) & (var_9 % var_4)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 = var_5;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 |= (((var_3 < (min(var_6, var_15)))));
                        var_23 = var_0;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_24 = (+-var_11);
                            var_25 = min((~var_8), var_4);
                            arr_16 [2] [i_1] [i_3] [i_3] [i_3] = (var_10 ^ var_11);
                            var_26 = (max(-var_10, -139));
                        }
                    }
                }
            }
            arr_17 [i_2] [i_1] [i_1] = ((max(var_15, var_10)));
        }
        var_27 = ((-(var_15 < var_6)));
        var_28 = (~4651837085770486253);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        arr_21 [13] = -var_1;
        var_29 *= -var_4;
        arr_22 [i_6] [i_6] = var_7;
    }
    #pragma endscop
}
