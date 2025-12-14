/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((var_1 % var_0), ((16515072 ? (min(var_11, (arr_1 [i_0] [i_1]))) : (((max(1, var_3)))))))))));
                var_15 += -1;
                var_16 = (arr_4 [i_0] [1] [i_1]);
                var_17 = arr_1 [21] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                var_18 = ((((((32767 > ((var_10 ? var_10 : (arr_1 [i_2] [i_3]))))))) != (min((arr_10 [i_2 - 1] [i_3 - 1] [i_3 + 1]), (arr_6 [i_2 - 1] [i_3 - 1])))));
                var_19 *= -4315;
                var_20 = (max(var_20, ((min((arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (min((((arr_9 [i_2] [i_3]) ? (arr_4 [i_3] [i_2] [i_2]) : (arr_9 [i_2] [i_3]))), var_12)))))));
            }
        }
    }
    #pragma endscop
}
