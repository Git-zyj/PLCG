/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((!(((((var_9 ? var_8 : 12703572945049294975))) && (var_5 && var_2))))))));
    var_11 = (-2147483647 - 1);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0 - 1] = var_6;
        arr_5 [i_0] [i_0] = var_3;
        arr_6 [i_0] = -122;
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_10 [i_1] &= (min(8918, (min(((max(30, -8919))), (arr_7 [i_1 - 4] [i_1 - 3])))));
        arr_11 [i_1 + 1] = ((((8191 | (max(var_0, var_1)))) / var_3));
        arr_12 [i_1 + 1] = (~-4243547244);
    }
    #pragma endscop
}
