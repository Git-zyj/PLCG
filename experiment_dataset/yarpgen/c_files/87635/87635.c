/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(4019290599, var_7))) ? (((var_6 ? 15365731468706894268 : (var_9 >= var_12)))) : (((var_2 / var_12) + 1849))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (((((~(arr_1 [i_0] [i_2])))) | ((-((var_12 ? 32760 : 15365731468706894285))))));
                    var_14 = (!3081012605002657348);
                    arr_8 [i_0] [i_1] [i_2] = ((((((-127 - 1) <= (arr_0 [i_0])))) >> (((((min(1, (arr_5 [i_2] [i_2] [i_1] [i_1 - 1]))) + (((max(var_10, var_6)))))) - 10232))));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
