/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((((((3255728476 - (-2147483647 - 1)))) ? (arr_6 [i_0] [i_1 + 3] [i_2] [13]) : (((arr_6 [i_0] [3] [i_0] [i_2]) ? 6464307423934118793 : 1480967359)))))));
                    var_11 += ((32758 | (arr_8 [i_0])));
                    arr_10 [10] [i_1 + 2] = var_8;
                    var_12 = (max(var_12, (((-(min((arr_0 [i_0] [i_1 + 4]), (arr_4 [i_0] [i_1 + 2] [i_2]))))))));
                    var_13 -= (32727 / 2920589484);
                }
            }
        }
    }
    var_14 |= var_5;
    var_15 = (max(var_15, (((((var_1 ? (~-1607945963) : (max(var_0, 6464307423934118777)))) / var_9)))));
    #pragma endscop
}
