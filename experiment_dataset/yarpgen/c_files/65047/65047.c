/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-127 || 3023297049);
    var_12 = -var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [11] [11] [6] = ((((var_4 == (arr_3 [i_0] [7] [i_0]))) ? ((-(arr_3 [i_0] [i_1] [i_1]))) : (((arr_0 [i_0]) | ((var_6 << (2259562991 - 2259562990)))))));
                var_13 = (max(var_13, ((((((0 ^ (arr_0 [i_1])))) ? (max(55720, 536868864)) : var_2)))));
                var_14 -= ((((-(arr_0 [12]))) ^ (((arr_0 [i_0]) / (arr_3 [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_15 = (-((var_7 * (var_9 * var_9))));
    #pragma endscop
}
