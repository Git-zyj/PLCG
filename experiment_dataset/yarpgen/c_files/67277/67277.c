/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [1]);
        arr_4 [i_0 + 3] = (((max(-9223372036854775793, (min((arr_1 [i_0]), 18446744073709551615)))) <= (min((min((arr_0 [i_0]), var_1)), (arr_0 [i_0 + 1])))));
        var_13 = (max(var_13, (arr_0 [i_0 + 1])));
        var_14 = (((arr_0 [i_0 + 1]) >= ((((arr_0 [i_0 - 2]) > (arr_0 [i_0 + 3]))))));
    }
    var_15 = ((((max(((max(var_7, 10))), var_9)))) * (max((var_6 - var_7), (~var_11))));
    var_16 -= ((var_4 + (var_3 < -8283695352130179701)));
    #pragma endscop
}
