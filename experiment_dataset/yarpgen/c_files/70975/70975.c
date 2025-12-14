/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 ^= -1125899906842623;
        var_17 = 0;
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (min(var_18, 1));
        var_19 = (min((arr_1 [6]), ((((max(-209064880, (arr_3 [i_1])))) ? (((arr_3 [i_1]) ? (arr_5 [i_1] [i_1]) : 30)) : -8871409129511095295))));
        var_20 = ((((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 248))) ? (arr_1 [i_1]) : ((1 ? (arr_3 [i_1]) : (arr_1 [i_1])))));
        var_21 = (-127 - 1);
        var_22 -= (((~35704) ? ((((arr_2 [i_1]) ? 5 : -8871409129511095300))) : ((((arr_6 [i_1]) == (arr_3 [i_1]))))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_23 = ((((((-1125899906842602 ? 12016 : 7190374670885036881)) & (((1151686104 ? var_13 : (arr_1 [i_2]))))))) ? (arr_0 [i_2 + 2] [i_2 - 1]) : ((((arr_2 [6]) ? (arr_2 [12]) : 78))));
        var_24 = (!22);
        var_25 = ((-209064880 <= (((arr_2 [16]) ? ((((14308515184706162792 || (arr_8 [8]))))) : (-127 - 1)))));
        arr_9 [1] = ((var_6 > (((var_11 >= (((19 % (arr_1 [i_2])))))))));
        arr_10 [i_2] = ((!((((((~(arr_2 [8])))) ? (arr_1 [i_2]) : ((-1125899906842609 | (arr_8 [i_2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_26 = ((~(arr_1 [i_3 + 3])));
        arr_15 [i_3] |= (arr_11 [i_3] [i_3]);
        var_27 = (1 * 8);
    }
    #pragma endscop
}
