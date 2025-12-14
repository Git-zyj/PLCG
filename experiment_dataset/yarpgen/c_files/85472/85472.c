/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3312032284;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (max(var_7, ((min(((123 ? var_8 : -2147483630)), (arr_1 [i_0]))))));
        arr_4 [i_0] = (142 - -1145728336);
        arr_5 [9] = (max(var_9, ((var_0 * (982935015 >= var_1)))));
        var_11 = ((-(((arr_0 [i_0 - 2]) ? (arr_1 [i_0]) : (~-105)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = (min(((((arr_7 [i_1] [i_1]) || var_3))), (((arr_7 [i_1] [i_1]) % (arr_7 [8] [i_1])))));
        arr_9 [11] = (min((arr_7 [i_1] [i_1]), ((((156 >= var_2) == ((-32766 ? var_1 : -1)))))));
    }
    #pragma endscop
}
