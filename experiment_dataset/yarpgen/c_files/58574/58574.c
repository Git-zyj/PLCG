/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((!(!9673010825411897214)))));
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((min((((-32767 - 1) ? 0 : (-32767 - 1))), (arr_0 [i_0])))) && (((((((arr_0 [i_0]) ? -1377180703240927481 : 254083225))) ? 129742839 : (((!(arr_0 [i_0]))))))));
        var_16 = (max(var_16, (((max((arr_0 [i_0]), -var_13))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] |= var_7;
        var_17 = (((((-(((arr_5 [i_1]) ^ (arr_3 [i_1])))))) >= (max((((var_11 ? 81 : (arr_3 [i_1])))), (max((arr_5 [i_1]), -1377180703240927481))))));
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_9 [8] &= var_11;
        arr_10 [i_2] = (((((-(60 <= var_2)))) + (-110 | 520093696)));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_18 -= (-9223372036854775807 - 1);
        arr_13 [i_3] [i_3] = 520093719;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_19 = (((arr_14 [i_4 - 1]) + (arr_8 [i_4 + 1])));
        var_20 = (((arr_12 [i_4] [10]) ? (arr_15 [i_4]) : ((var_0 + (arr_11 [i_4])))));
        var_21 = -254083225;
    }
    #pragma endscop
}
