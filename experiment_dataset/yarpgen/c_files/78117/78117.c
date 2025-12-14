/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (max(((max((max(var_9, var_15)), (max(0, 36))))), (max(((max(1, -20))), (max(546726773, 9622183462154053370))))));
                var_17 = max(42, (max(((max(4596, 57451))), 671068896)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (max((max(((max(var_5, var_11))), (max(4573, 8824560611555498264)))), ((max(((max(var_7, (arr_7 [i_2])))), (max((arr_6 [i_2]), 1636459113)))))));
        arr_9 [i_2] = (max(((max(((max(1, 29))), (max(var_0, var_9))))), (max((max(var_3, 10)), ((max(var_4, (arr_6 [i_2]))))))));
    }
    var_18 += (max((max((max(var_12, var_4)), ((max(var_16, var_10))))), (max(((max(var_16, var_2))), (max(var_3, var_13))))));
    #pragma endscop
}
