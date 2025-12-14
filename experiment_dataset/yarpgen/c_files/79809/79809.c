/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 1005557099;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = -1524952445;
            var_13 = (min(var_1, (((1169750147 != (var_4 || var_7))))));
        }
        var_14 = (min(0, var_4));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_15 = ((!((min((arr_5 [i_2] [i_2]), 2147483647)))));
        var_16 -= (((arr_0 [i_2] [i_2]) ? ((var_3 & (arr_0 [i_2] [i_2]))) : -769722302));
        var_17 = ((-(arr_7 [i_2] [i_2])));

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_18 = ((arr_3 [i_3 + 4] [i_3 - 2] [i_3 - 1]) ? 241 : -77);
            var_19 = ((!(arr_5 [i_3 - 1] [i_3 - 1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_20 *= (-127 - 1);
            var_21 -= 1169750147;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_22 = ((((((arr_6 [13]) & (arr_16 [i_2] [i_2] [12]))) * (((min(0, 0)))))));
            arr_18 [1] = (arr_5 [i_2] [i_2]);
            arr_19 [i_2] [17] = (min((arr_4 [1] [1]), (((!((var_3 == (arr_10 [3] [3] [3]))))))));
        }
    }
    var_23 = (!-0);
    var_24 = var_9;
    #pragma endscop
}
