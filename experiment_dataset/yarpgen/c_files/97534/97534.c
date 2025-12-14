/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((max(var_7, var_2))) ? 4294967294 : ((var_1 ? -600066339 : 3231820347))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = min(((~(arr_0 [i_2] [i_1]))), (((arr_0 [i_0] [i_1]) ? 18 : 58256)));
                    arr_8 [i_0] [i_1] = ((-(arr_0 [i_1] [i_0])));
                }
            }
        }
        var_14 += ((((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (arr_2 [i_0]) : 141));
        arr_9 [i_0] = (min((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? (-2147483647 - 1) : (arr_3 [i_0] [i_0] [i_0]))))), (min(((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))), (((arr_5 [i_0] [i_0]) ? 118 : (arr_2 [i_0])))))));
    }
    var_15 = (var_0 * var_11);
    var_16 += ((((1 && var_1) ? (min(var_11, 65535)) : ((var_3 ? var_3 : var_6)))));
    #pragma endscop
}
