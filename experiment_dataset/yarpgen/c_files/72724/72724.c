/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((-8211260590686296146 ? var_19 : (min(var_11, var_12))))) ? (var_15 / var_9) : (max(var_17, 15163470392918200592)))))));
    var_21 = -892805831;

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_22 = ((15163470392918200619 - (((((2347151815 ? var_8 : -892805837))) ? var_9 : (((max((arr_1 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0] [i_0 - 2])))))))));
        arr_2 [i_0] = ((((((!(arr_0 [13]))))) >= (28112 - var_15)));
        var_23 *= var_9;
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((-15163470392918200606 <= (arr_1 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = ((((((arr_4 [i_1 - 1]) ? (arr_3 [i_1] [i_1 - 1]) : 15163470392918200584))) ? ((((16158 < (arr_3 [i_1] [i_1 + 1]))))) : (((((arr_4 [i_1 + 2]) + 9223372036854775807)) >> (((arr_4 [i_1 + 1]) + 831746244250943901))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = ((!(!144)));
        var_25 = ((!((min(21, 24998)))));
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((~(((arr_0 [i_3 + 2]) << (-17574 + 17590)))));
        var_26 ^= (arr_9 [i_3 + 1] [i_3]);
    }
    var_27 = ((min(2017229514, var_19)));
    #pragma endscop
}
