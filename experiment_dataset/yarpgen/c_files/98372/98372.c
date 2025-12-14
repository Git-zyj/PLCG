/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (2265825449997585322 ? 2265825449997585330 : 16180918623711966277);
    var_11 = (16180918623711966270 + 2265825449997585343);
    var_12 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((var_2 && ((((((arr_1 [i_1]) || var_9)) ? 0 : 16180918623711966277))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, -var_5));
                            arr_9 [i_0] [i_0] [i_2] = -var_0;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_15 = var_1;
        arr_13 [i_4] [3] = ((65533 ? 16180918623711966277 : -2265825449997585354));
    }
    #pragma endscop
}
