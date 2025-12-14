/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 ^= (min(var_5, 65525));
        var_21 = (min(var_21, ((min((min(var_16, (min(var_12, var_6)))), 6450019969238649514)))));
        var_22 ^= 11996724104470902109;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_23 |= ((var_4 < (max(var_2, var_15))));
        var_24 = 12163799221029691779;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_25 = var_6;
        var_26 += var_5;
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    var_27 -= var_16;
                    var_28 = (!((min(-638630636388461547, -var_1))));
                    var_29 = (((((var_7 ? var_10 : (max(1, var_4))))) ? 638630636388461547 : var_9));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_30 = 638630636388461546;
                                var_31 += (min(6450019969238649503, (((6282944852679859841 ^ 12163799221029691779) % var_4))));
                                var_32 = var_14;
                                var_33 += (((((min(var_16, var_16)) ? (min(-304423228, 55819)) : 19865))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
