/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(3, var_3))) ? var_9 : var_13)) & -2068971117);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_6;

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = (((((((-127 - 1) ? 4611686018427387904 : 3075352783)) ^ 1522489289)) ^ var_7));
            var_15 = (max(var_15, ((((max(3441501220, var_4))) ? (var_9 % 9) : 4130149099))));
        }
    }
    #pragma endscop
}
