/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (!-1596038187)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((((arr_0 [0]) * (317333707 / 2147483647)))) ? ((((arr_5 [i_0] [i_1] [i_0 + 3]) * (arr_0 [i_0 + 2])))) : (((min(1484507877, 18446744073709551615)) * (arr_4 [i_0 - 1] [i_2 + 2])))))));
                    var_13 = 723466022;
                    arr_10 [i_0] [8] [i_1] &= (min(((0 * (!var_10))), ((-65535 ? (((!(arr_5 [i_0] [i_1] [i_1])))) : (arr_8 [i_2] [i_2 + 3] [i_2 - 2])))));
                }
            }
        }
    }
    var_14 = var_9;
    var_15 -= (!var_4);
    var_16 = (((!(((var_7 ? 65535 : -252394893))))) ? (max(((var_6 ? var_2 : var_4)), ((min(var_7, -723466022))))) : ((((var_3 * var_0) ? 252394876 : var_8))));
    #pragma endscop
}
