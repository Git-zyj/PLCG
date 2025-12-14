/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max(var_8, (((!(arr_2 [i_0 + 1]))))));
        var_16 -= (((((var_13 < (((arr_2 [i_0 + 1]) * (arr_1 [i_0])))))) << var_11));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_17 = ((+(max((arr_0 [i_1 + 1]), (!1746)))));
        var_18 = (!var_15);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((max(18446744073709551610, 69))) ? var_0 : ((31839 ? 35175782154240 : 0))));
        var_19 = ((var_6 & (((65535 >> 0) ? ((max((arr_5 [i_2]), var_0))) : 18446744073709551615))));
        var_20 = (max(var_14, var_9));
        var_21 = (var_4 && 1);
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = arr_5 [i_3];
        var_22 = ((var_1 ? ((-var_15 ? ((-16 ? 876855727958839103 : 4632050769225607961)) : (arr_2 [i_3 - 1]))) : 1124800395214848));
        arr_14 [3] [i_3] = ((~(max((arr_12 [i_3 + 1]), var_2))));
    }
    var_23 |= ((((min((~var_4), 1))) ^ var_6));
    #pragma endscop
}
