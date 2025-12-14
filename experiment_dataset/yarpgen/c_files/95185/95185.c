/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_17);
    var_20 = (max(var_16, 0));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = ((!((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        var_22 *= ((((arr_0 [i_0 - 1]) ? var_18 : (arr_0 [i_0 - 1]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, 3843350271503450546));
        var_24 = (min(var_24, (((((arr_5 [i_1] [i_1]) >= var_3))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((((!((min((arr_5 [i_2] [15]), var_16))))) ? (((var_0 >= (min(4287198101, -303256765))))) : (!1)));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_2] = (arr_5 [i_2] [i_2]);
            var_25 ^= (var_3 || ((min((arr_11 [i_2] [4]), (arr_9 [18])))));
            arr_14 [i_2] [6] [i_2] = ((((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))) ? var_3 : ((var_15 ? (arr_5 [i_2] [i_2]) : (arr_4 [i_2])))));
        }
        var_26 = (min(var_26, 65535));
    }
    var_27 = (((((1580388079 % 4021385423) || (((var_15 ? var_5 : 17487115133394001188))))) ? var_12 : var_17));
    var_28 *= (!21035);
    #pragma endscop
}
