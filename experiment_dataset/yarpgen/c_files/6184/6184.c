/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= (arr_1 [i_0]);
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] &= ((2065314891681624557 - (((arr_2 [i_0] [i_0] [i_1 - 1]) ? (((min(var_12, var_5)))) : (max(246163805744006141, var_5))))));
                var_14 += max((min((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (~var_12))), (max((((387174111 < (arr_2 [i_0] [i_1] [i_1])))), (((arr_4 [i_1] [i_0]) ? (arr_0 [i_0]) : var_8)))));
                var_15 = (max(var_15, (((((min(var_8, (arr_4 [i_1 - 1] [i_1 - 1])))) || ((max(var_0, (arr_0 [i_1 - 1])))))))));
            }
        }
    }
    var_16 &= ((((max(var_7, ((var_4 ? var_7 : var_6))))) ? (min(((var_9 ? 246163805744006137 : var_1)), var_6)) : var_7));
    var_17 &= var_7;
    var_18 &= ((((var_8 ? -var_2 : (~var_11)))) ? ((((18200580267965545454 ? var_1 : var_9)) * (!var_0))) : var_8);
    #pragma endscop
}
