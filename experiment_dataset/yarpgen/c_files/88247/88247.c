/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((max(3602869696517412332, 214))) ? var_5 : ((~((13738661407649248592 ? 4708082666060303023 : 13738661407649248592))))));
    var_16 = max(((var_3 ? ((var_12 ? 4708082666060303024 : 4708082666060303024)) : var_9)), ((max(((205 ? var_3 : var_1)), var_10))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_0] [10]) >= ((69766126051690870 ? (((55006 ? -2987652384486182244 : (-127 - 1)))) : (min((-32767 - 1), 13738661407649248592))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 = (arr_4 [4]);
            arr_7 [i_0] &= (arr_3 [i_0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_2] = (max((arr_3 [i_0]), (((((-32767 - 1) ? -2987652384486182244 : (arr_1 [i_0] [i_0]))) * 3))));
            var_19 = 8567741816081196346;
            var_20 = (((((max((arr_4 [i_0]), (arr_1 [i_0] [i_2]))))) << ((((((max(8567741816081196346, 7))) ? (arr_2 [i_2]) : (24121 & 13738661407649248592))) - 6647145952158702967))));
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_21 = (((arr_12 [i_3] [i_3]) ? (arr_3 [i_3]) : ((((arr_1 [i_3] [i_3]) << (var_1 - 37835))))));
        var_22 ^= ((var_11 ? ((((arr_1 [i_3] [i_3]) ? var_5 : (arr_1 [i_3] [i_3])))) : ((max((arr_3 [1]), var_14)))));
        var_23 = (min(var_23, 64217));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_24 = 8743138926818122059;
        var_25 ^= 1890424541;
        var_26 -= ((-(-32767 - 1)));
    }
    #pragma endscop
}
