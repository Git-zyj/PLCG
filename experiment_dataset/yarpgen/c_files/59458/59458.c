/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 += ((-1020295054 ? 10155756371138333714 : 26978));
        var_17 = ((arr_3 [i_0]) % (arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, (((~(max(12516788366946980148, ((min(var_4, 1797115967))))))))));
                        arr_12 [i_1] [i_2] [i_4] [i_4] [i_4] [6] = ((min(var_8, (arr_10 [i_3] [i_4] [6] [i_4] [i_1] [i_4]))));
                        var_19 = var_5;
                    }
                }
            }
        }
        var_20 = (var_1 ? (((min(var_5, 449309589936561065)) - (arr_2 [i_1]))) : (min(3686271851, 2633449916103138702)));
        var_21 += (arr_1 [i_1]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_22 = ((arr_3 [i_5]) ? ((-355611949732081378 ? 3686271851 : 9713156836720504956)) : var_0);
        var_23 = -101;

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_24 |= (-(arr_14 [i_5]));
            var_25 = (min(var_25, ((((((58 ? (arr_8 [i_5] [i_6] [i_5] [i_5]) : var_8))) ? 3113042477 : ((var_1 + (arr_1 [i_6]))))))));
        }
    }
    var_26 = var_6;
    var_27 = (min(var_3, (((-329903151 != -4) ? (min(var_12, var_5)) : (!8238238454204403674)))));
    var_28 ^= var_9;
    #pragma endscop
}
