/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_0 - -var_10);
    var_12 = (max(var_12, (var_8 != var_7)));
    var_13 &= ((((max(var_6, 2808753851) * (var_1 < var_5)))));
    var_14 = (max(var_14, 22313));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((((((2659969920 >> (6062362000644865878 - 6062362000644865859))))) < (var_1 | 9142543104727026588)));
                    var_16 = ((((((max(0, var_0))) ? -22326 : (arr_3 [i_1 - 1]))) <= ((-(arr_7 [i_2] [i_1] [i_1 - 1] [i_1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 = ((~(arr_2 [i_4 - 1] [i_0])));
                            var_18 &= -22336;
                            var_19 = (((max(6062362000644865878, (arr_1 [i_4 - 1]))) % (min(var_1, (((arr_16 [i_6] [i_5] [7] [i_0] [i_6]) & (arr_1 [i_3])))))));
                            var_20 = (arr_12 [i_4] [i_3] [i_0] [i_0]);
                        }
                        for (int i_7 = 3; i_7 < 6;i_7 += 1)
                        {
                            var_21 = 22325;
                            var_22 |= (((arr_16 [i_7] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 2]) * (arr_16 [i_7] [i_7 + 2] [i_7] [i_7] [i_7 - 2])));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_23 &= (arr_4 [i_5] [i_5] [i_4 + 1]);
                            var_24 = max(22313, (0 | 823344168179282710));
                            var_25 = ((+(min((arr_24 [i_4] [i_3] [i_3] [i_5] [i_8] [i_4 - 1] [i_4]), -12384382073064685738))));
                        }
                        var_26 = ((!(~var_1)));

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_27 = (max(var_2, 22313));
                            var_28 = ((((((!(var_3 <= var_2))))) ^ -17623399905530268905));
                            var_29 = (((((arr_5 [i_4 + 1] [i_0] [i_9 - 1]) << (arr_5 [i_4 + 1] [i_0] [i_9 - 1])))) ^ (~4165598330466048924));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_30 |= (!823344168179282725);
                            var_31 &= (!6062362000644865882);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_32 = (min((((~(arr_29 [i_0] [i_3] [1] [i_4] [i_4 - 1])))), 4839801567162253456));
                            var_33 = (((((arr_33 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_11]) - var_7)) - (((var_0 || (var_9 + 2047))))));
                            var_34 = (((arr_25 [i_4 + 1] [i_0]) >> 0));
                            var_35 = (((var_9 ? (arr_17 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]) : -22326)) < (~41732));
                        }
                    }
                }
            }
        }
        var_36 = ((((+(((-22326 + 2147483647) << (179 - 179))))) != ((-(arr_5 [i_0] [i_0] [i_0])))));
        var_37 = ((-((-814278132 ? 926104477 : 22940))));
    }
    #pragma endscop
}
