/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((((!1) > ((min(var_11, var_0))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 |= (((arr_3 [i_0] [i_0]) - (((arr_2 [i_0]) + (arr_2 [i_0])))));
        var_21 ^= (((var_5 / -4287) != (250 < 47728)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [7] = (((max((arr_7 [i_1]), (arr_5 [i_1 + 1]))) == ((min(((max(1, 1))), 1294419035)))));
        var_22 = (max((((!383303685) ? ((min(var_10, 27999))) : (((arr_6 [i_1 - 1]) ^ 3599240609370405609)))), (arr_4 [i_1 - 1] [i_1 - 2])));
        var_23 ^= var_3;
    }
    #pragma endscop
}
