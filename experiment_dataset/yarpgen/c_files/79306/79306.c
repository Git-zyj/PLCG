/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = (min(((var_10 * (max(var_0, var_9)))), var_3));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (((arr_1 [i_0 + 2]) && (arr_0 [i_0])));
        arr_2 [i_0] = var_10;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = ((((-1752002668 ? 13441487011786537655 : 5005257061923013961)) % ((((arr_6 [i_1]) % 58)))));
        var_23 = ((-(arr_1 [i_1])));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_24 *= (arr_5 [i_2]);
            var_25 = (max(var_25, (((~((-((46682 & (arr_8 [i_2] [i_2] [i_1]))))))))));
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_26 -= (arr_13 [i_3]);
                var_27 = (min(var_8, (arr_13 [i_3])));
            }
        }
    }
    #pragma endscop
}
