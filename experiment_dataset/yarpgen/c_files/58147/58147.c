/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((var_9 ? (((1 == ((var_3 ? (arr_1 [i_0] [i_0]) : -792422965))))) : 1));
        arr_2 [i_0] = (min(-11950947076370859247, (arr_1 [i_0] [13])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_12 = (min(var_12, (((((var_4 ? (arr_1 [i_3] [i_1]) : var_6)) <= (((arr_0 [i_3 - 1] [i_3 - 2]) ? 12813451891902422436 : (arr_9 [i_0] [i_3 + 2]))))))));
                        var_13 *= ((-(17822111153692136442 ^ 727323224)));
                        var_14 = (max(624632920017415173, (min(var_8, (arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_15 -= (var_4 ? 2094443695 : (arr_0 [i_0] [i_0]));
                        var_16 = ((((9635412372454345678 ? var_6 : (arr_10 [i_2] [i_0])))) & (((arr_11 [i_0] [1] [i_2] [i_4]) | (arr_4 [i_0] [i_0]))));
                        var_17 -= (var_6 ? (arr_3 [i_1] [0]) : (arr_3 [i_2] [i_4]));
                        var_18 *= ((var_7 ? (arr_9 [i_0] [i_2]) : 6794918615594947836));
                    }
                    var_19 = ((((((arr_5 [i_1] [i_1] [i_1]) ? (arr_5 [i_2] [i_1] [i_0]) : var_4))) ? ((-((((arr_5 [1] [1] [i_0]) != 1))))) : var_7));
                }
            }
        }
        var_20 = (((((((-1805639542 ? (arr_8 [i_0] [14] [i_0]) : (arr_6 [i_0]))) ^ (arr_11 [i_0] [i_0] [i_0] [i_0])))) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((var_9 ? (arr_9 [i_0] [i_0]) : ((var_4 ? 1 : var_8)))))));
    }
    #pragma endscop
}
