/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+(min((~19669), 42))));
    var_19 ^= var_4;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_20 ^= (((((arr_1 [i_0] [i_0]) ? 104 : 189))) ? 157 : (arr_0 [i_0 - 2] [i_0 - 2]));
        arr_3 [i_0] = (~var_2);
        arr_4 [i_0] = ((2584929502 ? (arr_0 [i_0] [i_0]) : (var_15 || 60)));
        var_21 = (((arr_1 [i_0] [i_0]) ? (-32767 - 1) : 31483));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((((max(((1557343569 ? 255 : -6667)), (max(1557343576, var_2))))) ? ((min(72, 19677))) : ((((arr_5 [i_1 - 1]) < (((arr_7 [i_1]) ? 1710037794 : (arr_7 [i_1]))))))));
        var_22 = -19667;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_23 = 165;

        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            var_24 = (((!4294967295) && (31475 && 63)));
            var_25 = (((((-(arr_13 [i_2] [i_2] [i_2])))) & ((var_9 % (arr_15 [i_2] [i_2] [i_2])))));
        }
    }
    #pragma endscop
}
