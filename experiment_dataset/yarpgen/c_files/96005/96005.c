/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((((-32766 + 2147483647) >> (-17 + 18))) | (min(-17, ((6727740014063502659 ? (arr_0 [i_0]) : 238)))));
        arr_3 [i_0] = (max((arr_0 [i_0]), (arr_2 [i_0])));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] [i_1 + 3] = (arr_1 [i_1] [1]);
        var_20 = (max((max((arr_1 [i_1 + 3] [i_1 - 1]), 7158339651780440591)), (max((arr_1 [i_1 - 3] [i_1 + 3]), var_16))));
        var_21 = 238;
    }
    var_22 = var_0;

    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 *= ((!((((arr_7 [i_2]) ? ((-(arr_0 [i_2]))) : ((var_11 >> (186 - 177))))))));
        var_24 = (((((max(1, (arr_4 [i_2]))) & (arr_2 [i_2]))) | 50));
        arr_9 [4] = -6411;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((((var_13 - (arr_5 [i_3]))))) ? (((arr_12 [i_3] [i_3]) >> (((arr_12 [i_3] [i_3]) - 9260)))) : 966415556);
        arr_14 [i_3] [i_3] = ((-((-(var_3 == 14283820484913444954)))));
        var_25 |= (max((min((arr_5 [i_3]), (218 + 11989507670490918600))), ((((((min(-1537500882, (arr_2 [i_3]))) + 2147483647)) >> (((arr_0 [i_3]) - 192)))))));
    }
    var_26 = max(var_16, (((((max(var_8, var_3))) >= var_18))));
    #pragma endscop
}
