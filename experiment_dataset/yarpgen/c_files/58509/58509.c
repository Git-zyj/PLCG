/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(max((var_11 >> var_11), -56076))));
    var_13 = 5622224215367846550;
    var_14 = (((((~(min(var_7, var_11))))) >= ((var_4 * (var_6 <= 6567956330163396059)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((~(max(-var_3, (arr_2 [i_1])))));
                arr_6 [i_0] [i_0] = (i_0 % 2 == 0) ? ((max(((((var_9 >> (((arr_1 [i_0] [i_0]) + 4003650054500493686)))))), (arr_4 [i_0] [i_0])))) : ((max(((((var_9 >> (((((arr_1 [i_0] [i_0]) + 4003650054500493686)) - 1148245372622502127)))))), (arr_4 [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
