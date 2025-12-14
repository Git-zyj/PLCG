/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_6 + var_4) ? 14746 : var_2)));
    var_21 = ((-3502213039405872836 & 70) < 20199);

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_22 = ((max(10160853263348017177, 1)));
        var_23 -= ((-(((min(3614220995, var_10)) << (((-3136328906067667922 - var_9) + 3136328906067667922))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_24 = ((((((((arr_4 [i_1 - 1]) + 2147483647)) << (((((arr_4 [i_1 - 2]) + 274309728)) - 26))))) ? (arr_4 [i_1 - 2]) : (((var_18 + (arr_4 [i_1 - 2]))))));
        arr_5 [i_1] [i_1] = (var_5 % (arr_3 [1]));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_25 = (min((1 - 1), (max(8285890810361534427, (arr_0 [i_2])))));
                arr_11 [4] [i_3] [i_3] = ((arr_7 [i_3]) ? var_11 : ((min(1, var_10))));
            }
        }
    }
    #pragma endscop
}
