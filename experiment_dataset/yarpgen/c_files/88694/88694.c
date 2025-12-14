/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~(arr_2 [i_0])));
        arr_4 [i_0 - 1] = ((((~(((arr_1 [i_0 + 1] [i_0]) ? var_18 : var_5)))) % ((min(((-43 + (arr_1 [i_0] [i_0]))), 43306)))));
        arr_5 [i_0] = (((arr_2 [i_0 - 2]) + ((~(arr_2 [i_0 + 1])))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 += ((var_12 >> ((((var_1 - var_19) == -22241)))));
        var_21 = ((41965 + (max(6390591683718092136, (((-1396229785 ? (arr_2 [i_1 - 1]) : var_3)))))));
    }
    var_22 += var_5;
    var_23 = (min(var_11, (((~2147483647) ? var_1 : (-1353530273777127140 < 38746)))));
    #pragma endscop
}
