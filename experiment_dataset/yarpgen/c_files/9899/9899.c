/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (~-1463527192);
    var_13 *= ((((min(var_2, var_6))) ? ((((var_8 ? -10788 : -2020137005643989252)) / (var_6 ^ var_0))) : (((max((-1593609881 || -1), (!var_5)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (((((max(19, 9223372036854775807)))) ? (((arr_2 [i_0] [i_0]) ? (max(var_0, var_5)) : var_11)) : (~var_7)));
        arr_3 [i_0] = 41809;
        var_15 = (((~-var_6) < (arr_1 [i_0] [i_0 + 1])));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 ^= ((~(arr_4 [i_1])));
        var_17 &= (arr_1 [i_1] [i_1]);
        var_18 = (((((~(arr_1 [i_1 + 3] [i_1])))) ? var_5 : ((-(arr_2 [i_1 + 1] [i_1 - 1])))));
        arr_8 [i_1] = (((((((max(var_1, var_4))) ? var_8 : 19)) + 9223372036854775807)) << (((((max((min(-2020137005643989268, var_1)), (-1 % var_5))) + 58)) - 57)));
        var_19 = (((((((arr_1 [i_1] [i_1 + 1]) ? var_0 : var_4)) < (arr_4 [i_1 + 2]))) ? ((1 << (-25 + 43))) : (arr_5 [12] [i_1])));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_20 = ((((((((var_9 ? var_9 : var_4))) ? (var_11 < 43591) : ((min(56, -47)))))) ? 5 : var_1));
        var_21 = (~1);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 ^= (((arr_0 [i_3]) > (((arr_6 [10]) ? (arr_0 [i_3]) : var_10))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_23 |= 32757;
                                var_24 = (~var_2);
                                arr_25 [i_3] [i_3] [i_4] [i_5] [i_3] [i_6] [1] = ((!(!var_5)));
                            }
                        }
                    }
                    var_25 -= -2502719158473605593;
                }
            }
        }
        arr_26 [i_3] [10] = (min((((~(arr_9 [4])))), (max(-397664909, (arr_18 [i_3] [1])))));
    }
    #pragma endscop
}
