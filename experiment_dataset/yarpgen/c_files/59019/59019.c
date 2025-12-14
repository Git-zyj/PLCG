/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (min(var_20, (((arr_1 [i_0]) ? (((((var_15 ? 18446744073709551615 : (arr_0 [i_0] [i_0])))) ? var_2 : (min(16695253213868758327, 11019034065963898877)))) : (min((((arr_0 [i_0] [i_0]) * 850096814580280535)), ((min(var_19, -37)))))))));
        var_21 *= 6287609461221954723;
        var_22 -= ((~18101538463255766345) ? (max((!0), (max(14656038014842652706, -96)))) : 96);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_23 ^= (~((var_13 << (((max((arr_2 [i_1]), 12426203839025243005)) - 12426203839025242962)))));
        arr_5 [i_1] = (((((((13147713478577335887 | (arr_3 [i_1])))))) >= (max((min(16695253213868758327, var_12)), 96))));
        var_24 = (max(9781460661970164615, (max(((11446331881969033843 ? -84 : 1617207845058665652)), var_2))));
        arr_6 [i_1] = (min(((((min(2345330976245080272, (arr_4 [i_1] [i_1]))) == (arr_4 [i_1] [i_1])))), ((var_18 ? (arr_2 [17]) : (arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 4; i_2 < 7;i_2 += 1)
    {
        var_25 = ((1751490859840793298 + (arr_2 [i_2])));

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_26 |= ((~(arr_2 [i_2])));
            arr_13 [i_3] [9] [i_3] = (~126);
            arr_14 [i_3] [i_3] = (((!(arr_4 [i_3 - 1] [i_3 + 1]))));
            arr_15 [i_2] [i_3] = ((((((((arr_2 [i_3]) << (-1 + 55)))) ? ((0 ? (arr_11 [i_2] [i_3]) : var_13)) : var_17))) ? (arr_3 [i_2 + 4]) : (arr_11 [i_2] [i_2]));
            var_27 = (min(var_27, (-57 <= 0)));
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_28 = (arr_11 [i_2] [i_2]);
            arr_18 [i_2 - 3] [i_2 - 3] = (((arr_17 [i_4 + 1] [i_2]) && (arr_7 [i_2 - 3])));
            var_29 *= min(93, (max(0, var_0)));
            var_30 &= var_7;
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            arr_21 [i_5] [i_5] = (((min(var_11, var_4)) < ((((!(arr_8 [i_2])))))));
            var_31 = (max(var_31, ((((-64 ? 16101413097464471349 : 9872746426880509689)) & (arr_3 [i_5])))));
        }
    }
    var_32 = (var_13 ? (((9475349968300843452 + var_0) ? (min(var_13, 0)) : (min(-39, var_1)))) : ((5031937703767107827 ? 2345330976245080267 : 5)));
    var_33 |= (var_1 ? var_10 : var_19);
    #pragma endscop
}
