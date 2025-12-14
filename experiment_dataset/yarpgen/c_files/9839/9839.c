/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [5] [6] = var_11;
        arr_4 [i_0] = (!-1528597251310947475);
        arr_5 [i_0] = (((arr_1 [i_0]) ? ((-(arr_1 [i_0 + 1]))) : (arr_0 [i_0])));
        arr_6 [4] = (max((max(-32767, (min(var_11, 1023)))), ((((arr_1 [i_0]) || 1528597251310947475)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_11 [i_1] [i_1] = (((((36007 * (arr_10 [i_1] [i_1])))) ? ((max((arr_10 [i_1] [i_1]), (arr_10 [i_1] [i_1])))) : (((arr_10 [i_1] [i_1]) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_1] [i_1])))));
        var_19 = (((((arr_7 [i_1] [i_1]) ? 2147483647 : (arr_7 [i_1] [i_1]))) / ((max((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))))));
        arr_12 [i_1] = (arr_7 [i_1] [i_1]);
    }
    var_20 = ((var_14 | (~var_14)));
    var_21 ^= var_12;
    #pragma endscop
}
