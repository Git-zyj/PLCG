/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 += 121;
                    var_11 = (-2147483647 - 1);
                    var_12 = (max(var_12, ((((arr_6 [8] [i_1] [i_2]) ? -var_5 : (((!((16169224789831455940 > (arr_9 [i_0] [i_0])))))))))));
                    var_13 -= (~(arr_2 [i_0 + 1]));
                }
            }
        }
    }
    var_14 = var_5;
    var_15 = ((var_4 == 1) ? (((((1777979567990669245 ? var_8 : var_5)) * (252 > var_6)))) : 9223372036854775807);
    var_16 = (min(var_16, (((-((((var_3 ? var_8 : var_0)) & var_8)))))));
    #pragma endscop
}
