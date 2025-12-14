/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((min((max(var_4, var_5)), ((max(55155, 237))))))));
    var_15 = ((var_0 + (((max(-9188636720446257740, 120))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 += (arr_4 [i_0] [i_0] [i_1]);
                arr_5 [i_0] [i_1] [i_0] = var_4;
                arr_6 [i_0] [i_0] [i_1] = (((((~((var_1 ? 9188636720446257754 : (arr_2 [i_0] [i_0])))))) ? ((((min((arr_4 [i_0] [i_0] [19]), 2263643798095050511))) ? ((29839 ? (arr_3 [i_0] [i_1]) : -9188636720446257740)) : var_11)) : (((-((var_5 ? var_4 : 55141)))))));
            }
        }
    }
    var_17 = ((((((var_10 ? var_12 : 9188636720446257747)) + var_8)) < var_9));
    #pragma endscop
}
