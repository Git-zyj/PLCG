/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 == 0);
    var_13 ^= (((!var_0) && (((var_0 ? var_9 : (var_10 % var_8))))));
    var_14 = (max(var_0, var_7));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (min(((-(arr_2 [i_0]))), var_1));
        arr_5 [i_0] [i_0] = (((arr_2 [i_0]) || ((!(arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_15 -= (((var_10 * var_6) == ((-((var_0 ? var_10 : (arr_0 [i_1])))))));
            arr_10 [i_1] [i_1] = (min((arr_9 [i_1] [i_1] [i_1]), (var_6 % var_1)));
            var_16 = (((((((((arr_8 [i_1]) ? (arr_3 [i_1]) : var_10))) - (var_9 / var_2)))) ? var_1 : (max((arr_0 [i_1]), (arr_0 [i_1])))));
        }
        var_17 = ((!(arr_0 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_16 [i_3] = (min(43, (arr_14 [i_3] [i_3] [i_3])));
                var_18 = arr_15 [i_3] [1] [1];
                var_19 = (min(var_19, (((((min(15, var_2))) ? 1 : 221)))));
            }
        }
    }
    #pragma endscop
}
