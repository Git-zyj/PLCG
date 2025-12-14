/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((~(arr_1 [15] [i_0])))) ? (((~(!16)))) : ((241 ? 78 : (arr_1 [i_0] [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (!23113);
            var_14 = ((241 * (~11840873872154026309)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_2] [i_0] [11] = -640144319283867290;
            arr_10 [i_0] = ((-640144319283867314 ? ((min((arr_4 [i_0]), (((!(arr_8 [i_0]))))))) : (((var_4 && var_7) ? (arr_7 [i_0]) : ((640144319283867305 ? var_2 : 18446744073709551612))))));
            var_15 = 3358490366;
        }
        var_16 = (max(var_16, ((max(640144319283867290, (((arr_6 [15] [i_0]) ? (arr_8 [i_0]) : 3358490366)))))));
    }
    #pragma endscop
}
