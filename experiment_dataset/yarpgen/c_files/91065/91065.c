/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_15));
    var_20 = (max(var_20, (~var_5)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((((~((var_10 ? 127 : 1587618707)))) > (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((~(arr_6 [i_0] [i_0] [2]))))));
            var_23 = (min(var_23, var_16));
            arr_7 [i_0] [6] = (arr_2 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_24 *= ((((-1992458241 ? -1587618708 : -1420661678))));
            var_25 ^= ((((((arr_11 [6]) ? 1 : 531320046))) ? 1145196542 : ((((max(-640784041, (arr_2 [i_2] [i_0]))))))));
            arr_12 [0] &= (max((!var_16), (arr_11 [6])));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (((((arr_9 [i_3] [i_0]) & 758509804))))));
            var_27 = (max(var_27, -1587618708));
            arr_15 [i_0] [i_0] [i_3] = (+(((var_7 & var_1) ^ 1232516110)));
        }
        var_28 ^= (min((arr_4 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_18 [i_4] = var_6;
        var_29 -= (((max(-1587618707, -376548764)) | (((arr_17 [i_4]) ^ (arr_17 [i_4])))));
    }
    #pragma endscop
}
