/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 |= (min((((arr_1 [i_0]) ^ var_1)), ((((((1090675657 << (((arr_0 [i_0]) - 53))))) && (((-(arr_3 [i_0])))))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = var_9;
            var_12 = (65526 << (((~var_0) + 65)));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_13 = (max((max(4294967286, 127)), ((((arr_6 [i_0] [i_2]) ^ var_3)))));
            arr_11 [i_2] = (!var_0);
            var_14 = var_5;
        }
    }
    var_15 = (var_6 & var_5);
    #pragma endscop
}
