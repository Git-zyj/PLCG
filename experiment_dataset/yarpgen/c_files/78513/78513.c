/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_2));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 *= arr_1 [i_0];
        var_19 = ((min(((var_2 ? var_7 : var_10)), -var_3)));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_20 = (max(24382, ((((max((arr_1 [i_1]), (arr_0 [i_1])))) | ((max((arr_3 [i_1]), var_4)))))));
        arr_4 [i_1] = ((24382 ? ((min((arr_3 [i_1 + 1]), (arr_1 [i_1 - 1])))) : (max((-963825209 % 511), ((((arr_3 [i_1]) > (arr_0 [i_1]))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 -= ((((min((arr_7 [i_2] [i_2 + 2] [i_2 + 2]), var_1))) ? (arr_6 [i_2 + 2]) : (max(((41153 ? 38 : (arr_6 [i_2]))), (arr_6 [i_2 - 1])))));
                arr_9 [i_3] = ((((min((arr_8 [i_2] [i_2 + 1] [i_3]), var_12))) ? (((+((max((arr_7 [i_3] [i_2] [i_2]), (arr_7 [i_2] [i_3] [i_2]))))))) : (min(24382, (min(34138, 0))))));
            }
        }
    }
    #pragma endscop
}
