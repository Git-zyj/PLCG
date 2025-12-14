/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((min(((min((arr_3 [i_0 - 2] [i_0] [i_0 + 1]), (arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 1])))), (((min(var_2, 1394172960)) * (((arr_4 [i_0 - 3]) ? var_2 : (arr_4 [i_0 - 2]))))))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (((((min((arr_0 [i_0 - 3] [1]), (arr_0 [i_0 - 3] [i_0 + 1]))))) > (((3604 * 0) ? (arr_5 [i_0] [i_1] [2]) : 147))));
                        var_18 = ((-((min((arr_1 [i_0 + 1] [i_2 - 1]), (!var_9))))));
                        var_19 = ((~(4294967295 == 122)));
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        arr_11 [i_0 - 4] [i_1] [i_2] [i_4 - 1] = ((((-9177310940144557480 <= (185 | 27305)))));
                        var_20 += (((max(3513390564, (min((arr_6 [i_0 - 1] [i_0 - 3] [i_0]), var_6)))) | 0));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = (min((max((((arr_8 [i_0 - 3] [i_0 - 3] [i_2] [i_5] [i_5] [i_5]) << (4095474094 - 4095474094))), ((min(177, var_5))))), ((max((arr_9 [i_0] [i_0 + 1] [0] [i_0 + 1]), (arr_9 [i_0] [i_0 - 2] [i_0] [i_0 - 2]))))));
                        var_22 = var_0;
                        var_23 = (min((max((min((arr_2 [i_0 + 1] [i_1] [i_2 + 1]), 144)), (min(-1511622066, 4294967293)))), (min((min(1, 8)), ((max(32767, var_2)))))));
                        arr_16 [i_0] [i_1] [i_2] [i_5] = 9;
                        var_24 ^= (((((arr_0 [i_2] [i_2]) <= (arr_12 [i_0] [i_0] [i_0] [i_0 - 1])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = (min(((1527280090025567283 ? ((((arr_14 [i_0] [i_0 + 1]) || var_5))) : (arr_3 [i_1] [i_1] [i_2 + 1]))), (((((8492488005699105046 ? 1 : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((1 * (arr_3 [6] [6] [i_6]))) : ((min(var_12, 60962)))))));
                        var_26 = ((((84 || (arr_7 [i_1] [i_1] [i_2 - 2] [i_6]))) ? var_0 : ((min((arr_0 [i_6] [i_2 - 1]), (arr_9 [i_0] [i_0] [i_0 - 4] [i_0]))))));
                    }
                    var_27 = (min(var_27, ((((((arr_1 [i_2] [i_0]) ? ((-(arr_3 [i_0] [i_1] [i_2 - 2]))) : ((8700434540241951791 ? var_14 : (arr_18 [1] [1] [i_0 - 4]))))) | ((((((arr_19 [i_0] [i_0] [10] [i_0 - 2]) << (27816 - 27789))) <= -32766))))))));
                    var_28 = -0;
                }
            }
        }
    }
    var_29 = (min(var_29, ((min(((((var_12 || var_14) == ((min(var_8, 0)))))), var_4)))));
    var_30 = (max((((var_2 ? (min(98614061, var_13)) : 2504))), ((var_5 ^ (min(5988902300359750303, var_15))))));
    #pragma endscop
}
