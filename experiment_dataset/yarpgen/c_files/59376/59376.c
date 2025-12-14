/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((3112899274 - ((var_3 ? (((11602462570191845024 ? var_10 : (arr_1 [12])))) : (var_8 + var_7)))));
                var_14 = 952870744;
                var_15 += ((max(1, 13303387110718186857)) <= ((min(((var_4 ? -123 : (arr_4 [i_0 - 1] [8] [i_1]))), var_8))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = 1182068022;
                    arr_10 [i_0 - 1] [i_0] = var_10;
                }
            }
        }
    }
    var_16 ^= (((min(-86292125, var_9))));
    #pragma endscop
}
