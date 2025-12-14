/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 8128;
    var_14 = (max(var_12, ((((var_1 * var_7) || (15 * 4611686018427387903))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 += (((8128 ? 57408 : var_8)));
        var_16 = ((16 % (13835058055282163683 | 1073741824)));
        arr_4 [i_0] = (((((18446744073709551615 || 15) ? 15 : (((var_10 || (arr_1 [i_0])))))) >> (-1 + 13)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((1 * (-32767 - 1)))) ? var_11 : (((22 * (arr_6 [i_1]))))));
        var_17 = ((var_6 >= ((((arr_5 [i_1]) * (max(67076096, (-32767 - 1))))))));
        arr_8 [i_1] &= (arr_2 [i_1] [i_1]);
    }
    var_18 = ((((var_8 ? var_2 : 56)) & ((((max(var_4, 18446744073709551615)) != (0 || 0))))));
    #pragma endscop
}
