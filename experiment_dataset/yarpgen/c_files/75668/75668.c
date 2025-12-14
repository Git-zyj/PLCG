/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_11 -= ((((min((((99 ? 80 : 144))), (arr_1 [i_0 - 1])))) ? (min((arr_2 [i_0] [i_0]), ((min(-1886864253, 1))))) : (((((min(0, (arr_1 [i_0])))) ? var_4 : (min(1886864270, -1886864253)))))));
                var_12 = (min((arr_3 [i_0] [i_1]), (!156)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 -= (min((86 & 621363021), (arr_7 [i_1] [i_1] [i_2])));
                            var_14 *= (min((((((1470027699868151181 ? 518897078 : -32007))) ? 202 : ((min(32767, -32759))))), 11973267374855160763));
                            var_15 = (min(var_0, -85));
                        }
                    }
                }
            }
        }
    }
    var_16 = (11973267374855160763 ? ((min(var_4, (var_9 & 39)))) : (min(157, 3293378491)));
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, ((~((1001588793 ? (-127 - 1) : 1796135552))))));
                    var_19 = (min(var_19, (arr_6 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1] [i_5] [i_6])));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_20 *= (var_2 - var_0);
            var_21 = var_9;
            var_22 -= (arr_6 [i_8 + 1] [2] [i_8 - 1] [i_8] [16] [i_8 + 4]);
            arr_20 [i_8] [i_8] = 98;
        }
        var_23 = (((((-44966 % ((min((arr_0 [i_7]), 32763)))))) ? (min((arr_4 [i_7] [i_7] [i_7]), ((4294967291 ? var_2 : 187)))) : ((-(-51 | 10127)))));
        var_24 -= (((max(((min(-10125, 91))), ((-4991417264303700507 ? 169 : 15543895830966727122)))) == 252));
        var_25 = 20570;
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 13;i_9 += 1)
    {
        arr_25 [i_9] [i_9 - 1] = ((~(arr_18 [i_9 - 2])));
        var_26 = 202;
    }
    #pragma endscop
}
