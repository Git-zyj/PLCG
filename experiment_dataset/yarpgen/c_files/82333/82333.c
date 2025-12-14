/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 ^= -18838;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 = 32957;
            arr_6 [i_0] = 1405954224;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_21 = var_18;
            var_22 = (min((--3509618354), (arr_1 [i_2])));
            arr_9 [i_0] [i_0] = ((~(min(((6079 ? 14038 : 14038)), 29584))));
            var_23 = (arr_5 [i_0]);
            var_24 = var_1;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_25 = max(144824905, ((-(arr_10 [i_0] [i_3]))));
            arr_13 [i_3] [7] [i_0] = -1360795119;
            var_26 = var_18;

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_27 = -1627755811;
                var_28 = (max(var_28, ((var_1 ? ((min((!-1405954224), (!-1405954224)))) : var_13))));
                var_29 = (min(var_29, ((max(65535, (min(var_10, (arr_3 [i_0] [i_0] [i_0]))))))));
                var_30 = (min(var_30, 985970490));
            }
        }
        var_31 += (arr_15 [5]);
    }
    var_32 = max(((54085 ? ((-109 ? 310992592 : var_4)) : (((max(var_3, var_13)))))), ((max(var_15, 1405954224))));
    var_33 = 3983974701;
    var_34 = (min(var_7, var_8));
    #pragma endscop
}
