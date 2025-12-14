/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(18446744073709551615, (((((var_11 ? var_11 : var_3)) >> (var_9 + 2255177404618248676))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = (3 != 1);
            var_20 = ((-(arr_5 [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_21 = (arr_3 [i_2]);
                var_22 = (max(var_22, (((arr_7 [i_0] [i_1] [i_2]) & var_13))));
                var_23 = (min(var_23, ((((arr_4 [i_0] [i_1] [i_2]) ? (arr_8 [i_0] [i_0] [i_1]) : (arr_6 [i_2] [i_1] [i_2]))))));
                var_24 *= ((2977785853959338872 / (arr_8 [i_0] [i_1] [i_2])));
            }
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                var_25 = (min(var_25, (arr_10 [15] [i_3])));
                var_26 *= (((arr_8 [i_0] [i_3 + 2] [6]) ? (arr_8 [i_3] [i_3 + 4] [i_0]) : 44));
            }
            var_27 = 12;
        }
        var_28 *= (((!var_12) ? (max(5750991096228689929, 1)) : (((min((arr_7 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))))));
        var_29 = (max(((max(22286, (arr_9 [i_0] [i_0] [i_0])))), (max(18446744073709551612, (arr_9 [i_0] [i_0] [i_0])))));
        var_30 = (arr_8 [i_0] [i_0] [i_0]);

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_31 = ((!(18446744073709551600 || 6692)));
            var_32 = ((-(arr_0 [i_4 + 2] [i_0])));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_33 = var_17;
        var_34 = (min(var_34, ((min(121, 0)))));
        var_35 = (min(var_35, ((max(((~(arr_15 [i_5]))), ((8776537237600523538 ? 1 : 3)))))));
        var_36 = 32741;
    }
    #pragma endscop
}
