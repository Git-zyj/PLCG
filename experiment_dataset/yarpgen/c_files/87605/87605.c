/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((255 && ((!((max(var_6, var_7)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 ^= var_4;
        arr_2 [i_0] [i_0] = (((((-3148793748974060393 ? -3148793748974060393 : 330765874))) | ((min((111128013 % -330765875), (~var_3))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_15 -= (arr_3 [i_1]);
            var_16 = (!-3148793748974060386);
        }
        var_17 = var_11;
    }
    #pragma endscop
}
