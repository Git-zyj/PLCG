/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 ? ((min(27890, var_2))) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (arr_1 [11]);
                    var_21 = min(((((27890 ? 17892980778962361195 : (arr_3 [i_2] [i_0]))) - ((max(-27890, (arr_4 [i_0])))))), (((-105 == (arr_2 [i_1 - 1])))));
                    arr_8 [i_1] [i_1 - 1] = (((-105 | -1) ? ((min(-27875, 3516740723))) : ((-(arr_2 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
