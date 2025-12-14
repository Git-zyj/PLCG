/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = 79;
        var_20 = (-(((-95 + 2147483647) << (((-1944464839 + 1944464851) - 12)))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_21 = var_18;
        var_22 = (min((!-5804852163842821546), (min((((!(arr_3 [i_1] [21])))), (arr_0 [i_1] [i_1 - 3])))));
    }
    var_23 = (min(var_5, var_8));
    var_24 = (max((((var_2 - var_6) ? 2989564862 : (min(-4575, var_8)))), var_14));
    var_25 = (min(5804852163842821546, -4574));
    #pragma endscop
}
