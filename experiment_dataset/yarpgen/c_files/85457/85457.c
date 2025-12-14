/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (!(((((20476 ? var_3 : var_1))) && -20471)));
                var_15 = ((((max(2147483647, (arr_2 [i_0] [9] [i_0]))))));
                arr_4 [i_0] [i_0] [i_0] = ((((min(var_2, (((arr_2 [7] [i_0] [i_0]) ? 20505 : -756607693))))) > ((var_8 ? var_6 : var_0))));
                var_16 = (((((min(var_0, (arr_2 [4] [i_1] [i_1 - 2]))))) ? (((((arr_2 [i_0] [i_0] [i_0]) - var_9)) - var_10)) : 20476));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_11 [i_2] = ((~(min((~var_10), var_6))));
                arr_12 [i_2] [11] = -20452;
                var_17 = ((((min((-2147483647 - 1), -65))) ? ((~(arr_7 [i_2] [i_2]))) : (~-1653419571)));
                arr_13 [i_2] = (((max(var_2, ((-11637 ? var_5 : (arr_7 [i_2] [i_3])))))) ? ((((((arr_9 [i_2] [22] [i_3]) ? -7456 : 15560975005887720498))) ? var_8 : -619359713)) : (!-20450));
            }
        }
    }
    #pragma endscop
}
