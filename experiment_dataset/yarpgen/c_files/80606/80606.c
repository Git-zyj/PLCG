/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [0] = ((!(arr_0 [i_0 + 3])));
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_10 += (((arr_5 [i_1 - 2]) ? ((((min(4405164781304224590, 18446744073709551615))) ? (arr_1 [i_1 - 1] [i_1]) : (((arr_2 [17]) ? (arr_0 [i_1]) : (arr_5 [i_1]))))) : (arr_1 [i_1 + 1] [i_1])));
        var_11 = ((1 ? 1 : ((max(((min((arr_0 [17]), (arr_0 [i_1])))), (max(5, 933338572)))))));
        var_12 = (((arr_5 [i_1]) ^ (((~1) ? (arr_2 [i_1 + 2]) : (9223372036854775794 >> 0)))));
        var_13 = (min(var_13, ((((arr_0 [i_1]) ? (((((9223372036854775798 ? 117 : 65535))))) : -17169653054084880747)))));
    }
    var_14 = var_2;
    var_15 = ((var_5 ? var_8 : (var_0 << var_1)));
    #pragma endscop
}
