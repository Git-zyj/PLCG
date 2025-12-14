/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((max((((-26810 + 2147483647) >> (((arr_2 [i_1] [i_1] [12]) - 4218732512)))), ((-(arr_1 [i_0] [i_0]))))), ((((((arr_1 [i_0] [i_1]) <= (arr_0 [i_0])))) << (((((arr_0 [i_1]) & var_13)) - 23024))))));
                arr_5 [i_0] [i_0] = (((-(arr_2 [i_0] [i_0] [i_0]))));
            }
        }
    }
    var_15 = (max((((max(var_10, var_3)) + (1 < 314761653))), (2585883963 == 1)));
    var_16 = ((~((min(0, var_5)))));
    #pragma endscop
}
