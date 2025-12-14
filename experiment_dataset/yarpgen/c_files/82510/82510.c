/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((-(!6762189055078363751)))) ? ((min((max(var_3, -2292441509251345122)), ((11 ? 6762189055078363751 : (arr_1 [i_0] [i_0])))))) : ((-6762189055078363743 ? var_11 : var_4))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 &= (min((min(10302, (arr_6 [i_1] [i_1 - 2]))), (min((arr_6 [i_1] [i_1 - 2]), (arr_8 [i_1 + 4] [i_1 - 2] [i_1] [i_1])))));
                    arr_10 [i_0 + 2] [i_0] [i_2] = ((-(!var_10)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_16 += -var_0;
        arr_13 [i_3] [0] &= (((min(((-6762189055078363743 ? 3882644247 : (arr_4 [2] [20] [i_3]))), (((!(arr_6 [i_3] [i_3])))))) >= ((min(((var_4 ? 2469 : 14685)), (((arr_6 [7] [i_3]) / (arr_6 [i_3] [i_3]))))))));
        arr_14 [i_3] [i_3] = ((((var_10 ? (min((arr_1 [i_3] [i_3]), var_3)) : (arr_11 [i_3]))) - -36));
        var_17 += ((-46 & (min(((((arr_6 [i_3] [i_3]) ? var_12 : var_9))), (arr_4 [i_3] [16] [i_3])))));
    }
    var_18 += ((((max(((var_13 ? 44 : -8979218324560179868)), (var_8 & var_3)))) ? 5 : var_5));
    var_19 &= ((var_6 ? var_6 : (((~var_6) & (((min(-1, 0))))))));
    var_20 = ((!((var_2 > (min(var_3, var_11))))));
    #pragma endscop
}
