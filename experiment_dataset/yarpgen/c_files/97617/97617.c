/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min((((-16 * 51098) ? 16 : (-9223372036854775807 - 1))), ((((0 ? 127 : var_11))))));
    var_18 &= ((((min(-1945407095, var_6))) ? (!var_10) : (((9223372036854775807 || var_3) ? var_3 : ((var_16 ? var_2 : 122))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((((-(arr_0 [i_0]))) * (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((((((-9223372036854775807 - 1) ? (arr_0 [i_0]) : 125))) ? -26715 : -9));
        var_19 = (!var_2);
        var_20 = ((((((arr_1 [i_0]) * (arr_0 [i_0])))) ? (((min((arr_1 [i_0]), var_8)))) : (((arr_0 [i_0]) ? var_13 : (arr_0 [i_0])))));
        arr_4 [i_0] = ((-(((arr_0 [i_0]) ? 3157999678895199677 : var_6))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] = (((!191) ? ((var_3 % (arr_8 [i_1] [i_1]))) : (arr_7 [i_1] [i_1])));
        var_21 |= (((((((min(var_11, (arr_7 [8] [8])))) ? 125 : (arr_5 [8])))) && ((((!9223372036854775786) ? var_15 : 1)))));
        var_22 = ((~(arr_7 [i_1] [i_1])));
        var_23 = ((((((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))) ? 13656 : (((!(arr_8 [i_1] [i_1]))))));
        arr_10 [i_1] [i_1] = var_15;
    }
    var_24 = ((!((((((var_15 ? var_6 : var_14))) ? (var_16 > var_4) : 7188167041029916589)))));
    var_25 &= 0;
    #pragma endscop
}
