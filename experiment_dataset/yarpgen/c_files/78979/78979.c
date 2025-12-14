/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max((min(979779683, var_12)), ((min(var_11, var_16))))), ((max(-69, -27184)))));
    var_18 = (min((min(var_15, var_5)), var_5));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = ((max(((max(var_16, var_15))), (min(var_14, var_16)))));
        arr_4 [i_0] = (max((max(-27184, 65535)), (max(var_11, 143))));
        arr_5 [i_0] [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = ((max(var_11, var_11)));
            arr_13 [i_1] [i_1] = var_2;
            var_20 = (min((((max(var_0, var_10)))), (max(((max(var_5, var_13))), (max(var_10, var_12))))));
            var_21 = (min(var_21, ((min(var_8, var_13)))));
        }
        arr_14 [i_1] = (max(50, 184));
    }
    var_22 = var_5;
    #pragma endscop
}
