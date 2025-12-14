/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((~((min(91, var_17))))) + 2147483647)) >> var_17));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_21 *= ((((!(arr_4 [i_0 + 3] [i_0 + 3]))) ? (((arr_4 [i_0 - 2] [i_0 + 2]) ? (arr_2 [i_0] [i_0 - 2]) : (arr_4 [i_0] [i_0 - 1]))) : (((((arr_2 [i_0 - 2] [i_0 + 1]) <= (arr_2 [i_0 - 2] [i_0 + 2])))))));
                var_22 = ((~((~(arr_2 [i_0 + 3] [i_0 + 3])))));
                arr_6 [i_1] [i_1] [i_0] = var_17;
            }
        }
    }
    var_23 = (min((((-(!-23)))), ((var_4 - (min(3642203639, var_3))))));
    var_24 = (var_2 / var_11);
    #pragma endscop
}
