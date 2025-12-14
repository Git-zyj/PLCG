/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 *= -7440385934163420973;
        var_21 |= -1;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_2] = ((255 >> (48284 - 48262)));
            var_22 &= (((1157 != -15720) + (max(8781486324651806010, 0))));
        }
        var_23 *= (~255);
        var_24 = (max(var_24, (((43 || 1) <= (((max(-62, -8680))))))));
        var_25 = (min(var_25, 0));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_26 = (49 <= 0);
                        var_27 = (max(var_27, ((max(255, ((1 ? 13 : var_8)))))));
                    }
                }
            }
        }
        var_28 *= ((((-5787471403616646370 ? 16426 : 17251)) % (((arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? 49110 : -1227329668))));
    }
    var_29 = ((252 ? ((min(1152, 8862339655593605451))) : var_7));
    var_30 = ((~((var_16 >> (var_14 + 693701331)))));
    #pragma endscop
}
