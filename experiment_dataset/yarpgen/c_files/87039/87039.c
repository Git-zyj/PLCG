/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (max(((min((~29817), 247))), (~1)));
        var_10 = (arr_1 [i_0]);
        var_11 = (arr_2 [i_0]);
        var_12 = (min(8, (max((arr_0 [i_0 + 2] [i_0]), (arr_0 [i_0 - 1] [i_0 - 2])))));
        arr_4 [i_0] [i_0 - 3] = (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = (arr_5 [i_1]);

        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_13 = var_4;
            arr_12 [8] [i_2] |= (((arr_1 [i_1 - 3]) & var_8));
            arr_13 [i_1] [i_1] = (arr_10 [i_2] [i_2 - 1]);
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_14 = (max((arr_0 [i_1 - 3] [i_3]), ((min(237, 1)))));
            var_15 = (min((max((min((arr_0 [i_1 + 1] [i_1 + 1]), (arr_1 [i_3 + 1]))), (arr_14 [i_3]))), ((max(0, 3)))));
            arr_17 [0] &= (min((min(11122630825334385163, 253)), (arr_7 [13])));
        }
        var_16 = (max(var_16, ((max(((max(((min((arr_7 [i_1]), (arr_16 [i_1])))), (min(3, 986001217))))), (max(((min((arr_14 [i_1]), (arr_2 [i_1])))), (max((arr_5 [i_1]), (arr_7 [i_1]))))))))));
    }
    var_17 -= var_8;
    var_18 -= var_8;
    var_19 *= (max((max(((max(var_4, var_4))), (max(var_8, var_4)))), (min((max(var_9, var_6)), var_7))));
    #pragma endscop
}
