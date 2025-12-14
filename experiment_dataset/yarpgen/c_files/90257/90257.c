/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 += (((var_17 + 2147483647) << (((var_7 + 20621) - 23))));
        arr_4 [i_0] = (((((arr_0 [i_0 + 1]) || (var_19 != -19976))) ? (((((min(12837, var_6))) ? ((min(85, var_12))) : var_17))) : var_9));
        arr_5 [i_0] [i_0] = ((max(62, (min(-14, 3981445075)))));
        var_21 = ((((var_5 * (arr_2 [i_0 - 1] [i_0])))));
    }
    var_22 = var_17;
    #pragma endscop
}
