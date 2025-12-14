/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (0 != 4294967295)));
        var_20 = (max(((-((-6311 ? 3162609522 : -30492)))), 0));
        arr_3 [i_0] [i_0] = (9696965067275212968 >= -28166);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 11908025172730268137;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_3] [i_4] = (min((((-3 / 15534499368630116768) ^ (42 != 1))), (((16059002824941826615 ? 20 : 0)))));
                        arr_21 [i_1] [i_2] [i_1] = (min(16386511394490236654, 7381820552748571885));
                    }
                }
            }
        }
        arr_22 [i_1] = (((((((min(17, 10826)) < (max(-52, -334953966)))))) * ((1593220169 & ((475448971 ? 32767 : 143833713099145216))))));
        arr_23 [i_1] = ((-2 ? 23 : 14596704279206661780));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_21 = 1387770487968231631;
        arr_27 [i_5] = (-102 - 4095);
        var_22 = (max(var_22, (((!(8042619152438747251 != 0))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_23 = ((-(-832851673 + 148)));
        var_24 -= ((450331802 + (min(((-23926 ? 1444317443 : 17061)), (0 & 0)))));
    }
    #pragma endscop
}
