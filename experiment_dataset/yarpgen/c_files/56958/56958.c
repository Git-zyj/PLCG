/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((2147483644 ? 63488 : 0))) ? ((max(43613, var_11))) : ((min(65513, 11249)))))) ? -646184259 : var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [6] = ((~((((-2147483647 - 1) ? var_10 : (arr_3 [11]))))));
        var_16 = (((((+((max((arr_1 [i_0]), -4433)))))) ? ((((((min(1, 13530)))) == 1198875812))) : (min(var_12, (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_7))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = ((((1198875803 & (arr_11 [i_2]))) << (((~var_12) + 31))));
            arr_12 [0] [i_1] [i_1] = (i_1 % 2 == zero) ? ((((((65521 << (((arr_8 [14] [i_1]) - 1330242338))))) <= ((0 ? 3096091483 : -1056822522466051771))))) : ((((((65521 << (((((arr_8 [14] [i_1]) - 1330242338)) - 198006602))))) <= ((0 ? 3096091483 : -1056822522466051771)))));
            var_18 -= 26;
        }
        var_19 = min(3197108475, 3762539576621290164);
        var_20 = (arr_6 [1]);
        var_21 = ((-((50710 >> (65535 - 65533)))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_22 = 2096128;
        var_23 ^= 21;
        var_24 -= ((((((max((arr_0 [i_3 - 1]), (arr_15 [i_3] [i_3])))) ? (arr_1 [i_3 + 3]) : (((arr_0 [i_3]) | 6241205347002276679)))) != -1267116451));
        var_25 = (((max(2147483647, 1218024587)) << ((((1 ^ (arr_1 [i_3 + 1]))) - 130))));
    }
    #pragma endscop
}
