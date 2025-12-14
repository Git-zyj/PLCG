/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 = (arr_8 [i_0 - 1]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_0 + 3] [i_1] [i_0 + 3] [i_0] [i_3] [18] = 6906607326763412015;
                        var_13 = (24017 > 8);
                        var_14 = (max((((var_9 + 9223372036854775807) << (((arr_0 [i_0 - 1]) - 8043516929521152103)))), (((arr_0 [i_0 + 1]) >> (-76 + 137)))));
                        var_15 = 9;
                        arr_13 [i_0 + 1] [i_1] [i_2] [i_0] [i_0 + 1] [i_1] = max((arr_0 [i_0 + 1]), ((288898567 - (((arr_3 [i_0 - 1]) + (arr_0 [12]))))));
                    }
                }
                var_16 += (!var_1);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = (arr_3 [i_0 - 1]);
                            var_18 = 235;
                            var_19 = (min(var_19, ((max(0, (min(6873989441166269858, 12)))))));
                            var_20 += ((var_0 >> (((182052464 * 127) - 1645826438))));
                            var_21 = (max(15040, 960));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_22 = (min(var_22, ((max((0 <= -30149), (arr_22 [i_6] [i_7]))))));
                arr_23 [i_7] [i_6] [i_7] = (min((((((min((arr_2 [i_6]), 207))) == (min((arr_11 [12] [5] [12] [12] [5] [4]), (arr_1 [i_7])))))), (max((arr_14 [i_7] [i_7] [i_6] [i_7]), (max(18446744073709551615, var_8))))));
                var_23 = ((~(min((min(var_8, var_4)), ((max(31, (arr_18 [i_6] [i_6] [i_7] [i_6]))))))));
            }
        }
    }
    #pragma endscop
}
