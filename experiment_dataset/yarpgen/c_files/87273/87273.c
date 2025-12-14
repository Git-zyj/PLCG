/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((~((7060651034680775798 ? 0 : 0))));
                var_15 = (((!124) < ((((min(var_6, 1864395127)) < (min(95, -1630256058)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_16 = (max((((((4 >> (((arr_4 [i_2] [i_2]) - 187))))) ? (!var_10) : ((var_8 ? var_6 : 0)))), 21));
                            var_17 = 0;
                            var_18 += (((((((185 ? var_2 : 18446744073709551604)) / 21))) ? (~95) : var_1));
                            var_19 &= (min(((max((max((arr_0 [i_4]), 9)), (arr_5 [i_2 - 1] [i_3])))), (2578122142870510745 / -53)));
                        }
                    }
                }
                arr_15 [i_2] [i_3] [i_3] = var_9;
            }
        }
    }
    #pragma endscop
}
