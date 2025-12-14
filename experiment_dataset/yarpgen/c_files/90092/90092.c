/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(-8839895597549814392, 156948298)) % var_2)) >= (((42750 & (~3150827110))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 -= (max((min((min(3150827110, 1388164992)), (1 > 1))), ((min(0, 3150827110)))));
                                var_18 |= ((((-1120452436 ? 1 : 16554400159159608168))) && (255 % 23));
                                arr_14 [i_0] [i_0] [0] [i_0] [i_0] [0] [i_4] = ((((min(18446744073709551615, 8055))) ? ((max(2906802303, 270589370))) : (((67108864 & -1120452436) & 1))));
                                var_19 = 0;
                            }
                        }
                    }
                    var_20 = (((65535 | -2365) != (65535 + 1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_20 [i_5] = (max(((min((0 && 1), 65535))), (-8796468895843312974 & 4294967295)));

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_23 [i_7] [i_6] [i_6] = (~6);
                    var_21 = ((max(-1810702228, 65535)));
                    var_22 = (max((((min(3628247948, 38475619)) / (((max(0, 23577)))))), (((max((-127 - 1), -688949801))))));
                }
                arr_24 [i_5] [i_5 - 3] = ((min(-775916082, 1953281806)) * 0);
                var_23 = (((max((max(-62, 0)), (0 != 1))) >> (max((0 / 179391859), 0))));
            }
        }
    }
    var_24 |= min(1, ((max(4038325731211288582, 32767))));
    #pragma endscop
}
