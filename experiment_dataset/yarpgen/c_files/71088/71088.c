/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_1, 4075136331));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = ((min(3242, ((-729185678910087238 ? 1 : -2819366466759867488)))));
        arr_4 [8] = 4235884634;
        var_22 = 8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = (((!5780087733182118552) ? (6336 ^ 219830990) : -16));
        var_24 = (((((406227429 ? 6464 : 0))) >= 7179929661344127906));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 = 219830969;
        var_26 = (((4235884634 && 653744468) > 1));
        var_27 = (((-7072176151508310906 ? 4294967295 : 27646)));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_28 = 892302401833646608;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    var_29 = (((((3596205898 ? -16384 : -5780087733182118564))) && 1));
                    var_30 = (((47027 && -3271946109719230054) - (17713 || 65535)));
                    var_31 = ((-(!-7072176151508310906)));
                    var_32 = (min(var_32, (((min(((1 ? -92 : 1265003435)), (max(63, 15360)))) | ((-3260 * (!30873)))))));
                }
            }
        }
    }
    var_33 = var_14;
    #pragma endscop
}
