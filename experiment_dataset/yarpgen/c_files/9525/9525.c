/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((var_2 && (((var_8 >> (var_1 + 94))))))), (min((6091632225041667252 || 2305843008945258496), (min(var_0, var_3))))));
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (max((((~((max(var_6, (arr_1 [3] [3]))))))), (((!var_7) - ((var_3 / (arr_3 [i_1] [i_0])))))));
            var_12 = (min((arr_2 [i_0] [i_1]), ((((min(var_0, var_8)) || (arr_4 [i_0] [i_1] [i_0]))))));
        }
        arr_6 [i_0] = ((-127 - 1) ? 121 : (min(15092775830262590916, 1)));
        var_13 = (min(var_13, (((max((~var_8), (arr_2 [i_0] [i_0]))) / ((max(-var_9, var_1)))))));
        arr_7 [i_0] [i_0] = ((!((min(var_5, (arr_2 [i_0] [i_0]))))));
    }
    #pragma endscop
}
