/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_5 ? ((((((var_11 ? var_5 : var_6))) ? (var_13 * var_15) : 103))) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((+((((((((arr_4 [i_0]) + 2147483647)) << (133 - 133)))) ? var_8 : ((157 ? var_0 : var_8))))));
                    var_17 = (max(((((!var_0) > (((var_0 < (arr_2 [i_1] [i_1]))))))), ((-(!-6703370468078606629)))));
                    var_18 = (((-((var_4 ? var_2 : var_10)))));
                    var_19 = ((((!var_6) ? (((!(arr_0 [i_0])))) : (((!(arr_6 [i_1] [i_1] [i_1] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
