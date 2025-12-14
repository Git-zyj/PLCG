/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (min((min((max(201, var_1)), var_3)), var_1))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = ((+((var_7 ? (arr_1 [i_0 + 1]) : var_8))));
        arr_4 [i_0] |= (((max(var_8, ((var_8 | (arr_0 [i_0] [2]))))) & (arr_2 [i_0] [i_0])));
        arr_5 [i_0 + 1] = (~33908);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = ((~(arr_6 [i_1] [14])));
        var_14 = 31628;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_15 = -11449;
        var_16 = ((!((!(((var_1 ? (arr_11 [i_2 - 1] [i_2 - 1]) : var_0)))))));
        var_17 = (max((max((arr_7 [i_2 - 1]), 31628)), ((36 ? (arr_2 [i_2] [i_2 + 1]) : 192))));
        var_18 = (min(((((!(arr_12 [i_2]))) ? ((50043 ^ (arr_6 [i_2] [i_2]))) : ((max(31628, 11444))))), (arr_9 [8])));
    }
    var_19 = ((var_2 != ((max((~var_7), ((max(var_6, 11448))))))));
    var_20 = 11699943748751338398;
    var_21 = var_7;
    #pragma endscop
}
