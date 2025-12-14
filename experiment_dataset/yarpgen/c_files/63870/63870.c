/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((min((1618027160 * 1618027160), 12)) / (((2676940138 * 34) ? ((34 ? 37 : -98)) : (432377032 / 3862590261))));
                arr_6 [i_0] |= ((~(((((var_13 ? var_15 : 2676940135))) ? (max(4294967295, var_13)) : var_5))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_3 - 1] = 4294967250;
                            arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_0 - 1] = ((0 ? (((!(var_0 >= 2676940135)))) : (!432377057)));
                            arr_16 [i_0] = ((((var_2 << (var_7 - 110)))) ? (min(var_4, var_2)) : (!-18));
                        }
                    }
                }
                arr_17 [i_0 - 1] [i_0] [i_0] = ((-126 > (((var_3 + 1618027157) ? ((var_12 ? 4294967295 : 1860765947)) : var_15))));
                arr_18 [i_0] [i_0] = (4290384860 <= 2434201348);
            }
        }
    }
    var_16 = ((var_14 > ((688734829 << (((-33 - 4294967279) - 4294967256))))));
    #pragma endscop
}
