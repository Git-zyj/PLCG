/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (~-1)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = ((-((~(max(var_14, 0))))));
        arr_2 [9] = var_19;
        var_22 *= (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_23 = -5;
            var_24 = ((!((var_1 < (arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_25 = (max(var_25, ((var_7 ? ((max(var_8, var_4))) : (!var_9)))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_26 = (var_7 << (var_13 - 121));
                var_27 ^= (~(min(0, (var_9 + var_15))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_28 = ((max(740, 2)));
                var_29 = (min(var_29, (((max((min(0, var_6), (var_9 % 1))))))));
                var_30 = (max(((var_9 % (13 != 0))), -13170));
                var_31 = (min(var_31, (arr_5 [i_0] [i_2] [i_4])));
            }
            var_32 = (min(var_32, var_10));
            var_33 ^= var_15;
            var_34 = -404516519096475305;
        }
        var_35 = var_8;
    }
    var_36 = (((((-(var_18 << var_1)))) ? var_2 : ((max(var_14, (var_16 < -6301124117476517841))))));
    #pragma endscop
}
