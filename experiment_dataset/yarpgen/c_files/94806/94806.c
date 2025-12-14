/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (((((((max(0, 2863781664))) ? (31 && 8552260446773726548) : (var_3 & var_0)))) ? (arr_1 [i_0] [i_0]) : 112));
        var_13 = -11193;
        var_14 *= ((+(max((arr_0 [i_0]), 4095))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_15 = (((arr_2 [4] [i_1 - 1]) == 148));
        var_16 = (min(-247, (((arr_4 [i_1]) ? ((1 ? (arr_1 [2] [2]) : 0)) : 1))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_17 = (max(var_17, ((min(((((((arr_1 [10] [10]) & var_7)) < var_6))), (-3 | 18446744073709551605))))));
        var_18 = min(((32767 * ((max(1925274464, (arr_5 [i_2])))))), (((72057594037927936 > 198) ? 18446744073709551614 : 1)));
        var_19 = (min(var_19, ((((((18446744073709551612 % (((101 ? (arr_5 [10]) : var_2)))))) || (((+((12590246917594048246 << (((arr_7 [5]) - 24030))))))))))));
        arr_8 [i_2] [i_2] = (arr_0 [1]);
    }
    var_20 = var_1;
    #pragma endscop
}
