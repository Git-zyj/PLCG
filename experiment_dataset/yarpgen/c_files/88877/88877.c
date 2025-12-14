/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_13 = ((((((~-111) || (-2100452648 | -6172192169552885051)))) >> ((((((((-2147483647 - 1) ? 1 : var_4))) ? (max(6366309767023962020, 845896083)) : (((32767 << (var_5 - 1745953846)))))) - 6366309767023962001))));
                            arr_16 [i_0] [i_0] [9] [i_0] [i_0] [i_0] [i_0] = ((var_1 % (0 | 8163662504844504112)));
                            var_14 = ((3644890578 << (max((min(0, 2147483647)), (var_9 != var_9)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            arr_20 [i_3] [i_5] = ((3332612896 == (var_12 >= var_6)));
                            arr_21 [i_0] [i_5] [4] [i_2] [i_5] [i_0] = (((((7994387611186849805 ? var_1 : 2150033806))) % var_7));
                            var_15 = (111 + 3654128184879264563);
                            var_16 = (min(var_16, (((var_2 ? (var_3 && var_11) : ((((-2147483647 - 1) == var_11))))))));
                            arr_22 [i_0] [i_1] [i_5] [i_3] [i_0] [i_0] = var_3;
                        }
                        var_17 = ((1 < (((3654128184879264563 < (((7994387611186849813 ? var_12 : 74))))))));
                    }
                    arr_23 [i_1] = (((max(54357, 10452356462522701802)) << ((((var_10 ? 22138 : 1)) - 22125))));
                    var_18 = ((((min(14349484520013375395, var_7))) ? (!var_5) : (min((min(33, var_11)), var_4))));
                    var_19 = (((((((var_3 / var_8) < (var_5 % 1417256438))))) != 4083937794524881743));
                }
            }
        }
    }
    var_20 = ((2758059105 ^ (((min((max(-13424, 45618)), var_8))))));
    #pragma endscop
}
