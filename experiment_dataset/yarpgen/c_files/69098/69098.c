/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 &= var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = var_4;
        var_13 = (min(var_7, ((0 ? 12152990846454283146 : (18791 / 14)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = (min(var_14, var_3));
        arr_4 [i_1] = var_5;
        var_15 |= (((((+(min((arr_2 [i_1]), (arr_3 [2])))))) ? -var_6 : var_9));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_16 = (max(var_16, ((min(var_6, ((var_7 ? ((27052 ? 49419 : (arr_6 [i_1] [i_2]))) : var_5)))))));
            arr_7 [i_1] = ((var_0 ? 65521 : (!16116)));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_10 [i_1] = (var_8 / 1721820684);

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_13 [i_1] [i_1] = 11274528575445498106;
                var_17 = -var_6;
            }
            arr_14 [i_1] = var_6;
            var_18 = -70;
        }
    }
    var_19 *= (var_3 ^ -var_3);
    #pragma endscop
}
