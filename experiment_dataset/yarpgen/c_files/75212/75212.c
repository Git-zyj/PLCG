/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_10, (max(1614969611, ((min(var_10, 1)))))));
    var_12 = ((-((max(var_2, (-15 || 14))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = ((-((((!2161727821137838080) < ((var_2 ? -744049015 : var_8)))))));
        var_14 |= ((1 | ((min((arr_1 [i_0]), var_9)))));
        var_15 = (((max(1, (min(var_7, (arr_1 [i_0])))))) % (((((68719476736 ^ (-9223372036854775807 - 1)))) ? (((((arr_0 [10] [i_0 + 1]) < var_9)))) : (max(9223372036854775807, 1)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = -var_10;
        var_17 = ((((max(-123, (-9223372036854775807 - 1))))) ? (((~(arr_4 [i_1])))) : ((-var_6 ? (59 & 3234153781) : (arr_4 [i_1]))));
        var_18 = min((((-1 < (var_4 & var_9)))), ((((max(var_0, -30479))) ? -120 : ((29356 ? var_8 : var_2)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_8 [18] = min((arr_7 [i_2]), (arr_6 [i_2]));
        var_19 = (((3032764815 ^ (arr_7 [i_2]))) < -3);
        var_20 = (max(var_20, ((((((var_7 ? -345875863 : ((8 ? var_0 : 1023))))) ? var_9 : var_0)))));
        var_21 = ((~((((min(1, (arr_6 [i_2])))) ? ((((arr_6 [i_2]) ? var_9 : var_8))) : (arr_5 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_22 = (max(var_22, ((((arr_10 [i_3]) ? ((max((arr_7 [i_3]), var_1))) : (~3234153805))))));
        var_23 = (!(-9223372036854775807 - 1));
        arr_11 [i_3] = min((((arr_4 [i_3]) & var_10)), (min(-var_10, (min(var_10, var_8)))));
    }
    var_24 = ((((((2774760178579658828 & var_1) ^ (min(51662, 8342402162227980707))))) ? 51 : ((((max(29365, var_3))) ? var_6 : (1 != -48)))));
    #pragma endscop
}
