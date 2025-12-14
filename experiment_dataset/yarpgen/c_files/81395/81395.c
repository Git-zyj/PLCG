/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 ? var_5 : (~var_2)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_1] [i_1] = ((((var_13 <= 6144) <= 24506)));
                        arr_11 [i_0] [i_3] [i_2] [i_2] [i_1] = (15094507578375582191 & 2032391818);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_14 [i_0] [15] = ((((((arr_13 [i_0]) + 2147483647)) << (((((arr_12 [i_0] [1]) + 32143)) - 27)))) << (((var_12 <= (arr_4 [i_0 + 1])))));
            var_18 = ((arr_12 [i_0] [i_0 + 1]) ? ((var_15 << (((var_10 + 66) - 17)))) : (var_10 ^ -1931018787));
            var_19 = (!2147483645);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_20 = (((-((-(arr_3 [i_0 - 1] [i_5] [i_5]))))));
            var_21 = (((arr_6 [i_0 + 1] [i_5] [i_0] [i_5]) - (((13835058055282163712 ^ 1) ? ((((arr_6 [i_0] [i_0] [i_0] [i_5]) >> (-2032391799 + 2032391859)))) : (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_5])))));
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_22 = 2032391792;
        arr_22 [i_6] = -1246276543;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_25 [i_7] [i_7] = ((((((((-1071187700 | (arr_20 [i_7]))) == -8856703118978440344)))) * ((var_10 ? (1 == 281474976710652) : (arr_18 [i_7] [i_7])))));
        arr_26 [i_7] = (arr_19 [i_7] [i_7]);
    }
    var_23 = ((((var_16 + 5466255697236805793) ? (var_6 - 472999658) : (-526121414028488610 + -1791731244))));
    var_24 = -18446462598732840958;
    var_25 = (~(((var_16 | 1) & (~var_5))));
    #pragma endscop
}
