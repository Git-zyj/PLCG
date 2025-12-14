/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 + ((min(var_8, var_2)))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] = ((-((((arr_1 [i_1 - 2]) > (arr_2 [i_1] [i_1 - 1] [i_0 + 2]))))));
            arr_6 [i_0] [i_1] [10] = (((((-96 | -42) + 2147483647)) << (((-1156684052 + 1156684070) - 18))));
        }
        arr_7 [3] = (((((var_13 > var_4) ^ -2558761616871461128)) ^ (arr_1 [0])));
    }
    #pragma endscop
}
