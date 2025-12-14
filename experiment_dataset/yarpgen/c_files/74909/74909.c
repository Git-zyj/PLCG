/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((!var_2) || ((max((arr_5 [i_0]), ((var_3 * (arr_5 [i_1])))))));
                    var_13 = ((((((1 != (arr_0 [18]))) || 1)) ? (max(1, -2502821905668087537)) : (~var_7)));
                    var_14 = ((((((max((arr_4 [i_2 + 3] [i_1]), 1))) || ((min(var_4, var_11))))) ? ((((((((arr_1 [i_0 - 1]) > (arr_3 [i_1] [i_1]))))) < (arr_3 [i_1] [5])))) : ((max((max(0, 161)), (max(1, (arr_0 [i_2]))))))));
                }
            }
        }
    }
    var_15 = (max(((~(~var_0))), ((max(124, var_1)))));
    #pragma endscop
}
