/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_15, (!var_7)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 += ((-(min(65535, (arr_3 [i_0 + 3] [i_0 + 2])))));
                    var_21 = (arr_2 [i_0]);
                    arr_7 [i_0 + 4] [i_0] [i_0 + 4] = (((((((min(-1, (arr_4 [i_0] [i_0])))) ? 1257137723713792712 : ((((arr_0 [i_0] [3]) ? -1 : (arr_3 [i_2] [i_2]))))))) ? (((!((((arr_3 [i_1] [i_0]) ? -1 : 4095)))))) : 19));
                    var_22 = ((~(((arr_0 [i_0 + 4] [i_0 + 4]) ? 65535 : (arr_4 [i_0 + 2] [i_0 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
