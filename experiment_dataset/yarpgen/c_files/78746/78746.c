/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_1;
        arr_4 [i_0] [i_0] = (max((((max(1, (arr_1 [i_0] [i_0]))) ? (((42006 ^ (arr_0 [i_0])))) : -37)), var_4));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((!15) ? ((18446744073709551615 ? (var_11 || 3663355093) : (134 && 7936))) : -15));
        arr_8 [i_1] = (((((((((arr_5 [0]) ^ var_3))) ? ((7946 ? (arr_2 [i_1]) : (arr_2 [i_1]))) : 1))) ? -var_4 : (min(15287415310476701061, (min(-7970, (arr_5 [12])))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [13] [i_2] = ((((!((min(-7, var_7))))) || 7663990363474813509));
                                arr_22 [i_2] = 7;
                                var_14 ^= ((9075 ? 2155827999 : -7933));
                                var_15 = (max(var_15, 15982273173880110506));
                                arr_23 [i_2] [i_2] = max(((((((-13 / (arr_16 [13] [i_2] [i_3] [i_4] [i_5])))) ? ((-5 ? 192 : 3807351866)) : var_13))), var_12);
                            }
                        }
                    }
                    arr_24 [i_2] = 55935;
                    arr_25 [i_1] [i_1 + 4] [i_2] = var_8;
                    arr_26 [i_2] [i_1] [i_2] [i_3] = (((arr_14 [7] [i_2] [i_2] [i_3]) ? (((((arr_14 [i_1] [i_2] [i_2] [i_2]) ? var_8 : (arr_6 [14]))) / (((max((arr_20 [i_1] [i_1] [i_2] [i_2]), (arr_13 [i_1] [14] [i_3]))))))) : (((((arr_11 [i_1 + 1] [i_1]) < (-2147483620 || 1)))))));
                    var_16 = (min(var_16, (arr_0 [15])));
                }
            }
        }
        var_17 = (arr_18 [i_1] [i_1] [12] [i_1] [i_1]);
        var_18 *= var_9;
    }
    var_19 = (min(var_19, (((((((7970 ? var_8 : var_8)) / (((1 ? var_12 : -26744)))))) ? (var_10 <= -5) : -29897))));
    var_20 = (min(var_2, (((((1 ? var_9 : var_11))) ? 111 : var_7))));
    #pragma endscop
}
