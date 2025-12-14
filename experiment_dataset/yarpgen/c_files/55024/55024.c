/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_9 ? var_3 : 3818339699)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (((min((((~(arr_4 [i_0] [i_1 + 1])))), (var_15 * var_13))) != ((((var_0 ^ var_13) ? (96 | 7916850468939351465) : (-127 - 1))))));
                arr_6 [17] [18] [i_1] = ((var_13 > (((var_3 ? var_11 : (arr_1 [i_0]))))));
                var_19 = (max(var_19, ((((arr_4 [i_1 - 1] [i_1]) >= (min(var_9, var_0)))))));
            }
        }
    }
    var_20 = (var_7 >= var_14);
    #pragma endscop
}
