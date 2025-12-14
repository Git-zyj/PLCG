/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((max(((((max((arr_2 [i_0]), 1))) << (((arr_0 [i_0] [i_0]) + var_3)))), ((min((max(var_7, (arr_5 [14] [15]))), var_2)))))) : ((max(((((max((arr_2 [i_0]), 1))) << (((((((arr_0 [i_0] [i_0]) + var_3)) + 19)) - 9)))), ((min((max(var_7, (arr_5 [14] [15]))), var_2))))));
                arr_7 [i_1] [i_0] [i_0] = ((-4864968116653066414 ? ((((0 ? 20050 : 1)))) : (max((((arr_5 [i_0] [i_1]) / 16121664135860969031)), (var_2 >> 1)))));
                var_11 = (min(var_11, (((((((((var_7 ? (arr_5 [9] [i_0]) : 65533))) ? (arr_4 [1]) : ((var_3 % (arr_4 [1])))))) ? ((((1 || (((var_4 ? 3584 : (arr_4 [4])))))))) : (max((arr_5 [i_0] [i_0]), ((1142912819 & (arr_4 [1]))))))))));
            }
        }
    }
    var_12 = var_9;
    #pragma endscop
}
