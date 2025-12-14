/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_13;
        var_14 = (((!8895349429095337818) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 0)) : var_2));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_15 = (((-2037 ? 14 : 2036)));
                    var_16 = (((((1 ? 1 : 16118511764627725647))) ? 1 : 18446744073709551615));
                    arr_10 [17] [i_2 + 3] [i_2] [i_2 - 1] = var_9;
                }
            }
        }
        var_17 = ((6694401369175552901 ? 1068096071 : 2511040567485092414));
        arr_11 [12] &= 8355768623834690299;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_18 += (1 / 2905);
                        var_19 = ((1 ? -11810 : -2037));
                        var_20 += (arr_15 [i_4]);
                    }
                }
            }
        }
        arr_22 [19] = 28118;
    }
    var_21 -= var_8;
    var_22 |= ((1 ? 542852057436277279 : -15061));
    #pragma endscop
}
