/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (5700691796071397773 == -504520069);
    var_12 = ((((var_7 ^ (!1))) <= ((((var_1 - var_0) + var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 27833));
                    arr_7 [i_2] [i_0] [i_0] = (max(((min(0, (arr_5 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 3])))), var_5));
                    var_14 = (((var_9 + 2147483647) << ((((~(arr_5 [i_2] [i_1] [4] [i_0]))) - 3101725480))));
                }
            }
        }
    }
    #pragma endscop
}
