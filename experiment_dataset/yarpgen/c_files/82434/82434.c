/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (!var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min((((var_10 ? 9967031759333473275 : -130629861498874065))), (((var_1 ? (arr_7 [i_2] [i_2] [i_2]) : ((130629861498874065 ? (arr_5 [i_0] [i_2]) : -130629861498874066)))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = (min((((9 ? -1597356588019827659 : 1))), ((((((arr_2 [i_0]) & (arr_3 [i_1])))) ? (((((arr_1 [i_1] [i_2]) > 3950197281)))) : ((-8488560536447223031 ? (arr_2 [i_2]) : 1588348542))))));
                    arr_12 [i_2] [i_2] [i_1] [i_0] = (max((arr_3 [i_0]), (arr_10 [i_2] [18])));
                    var_19 *= (min(((((((2318018346 ? 255 : (arr_6 [i_0])))) ? -var_5 : (arr_4 [i_1] [i_2])))), (((arr_5 [i_0] [i_2]) ? (((-8859641790709260297 ? (arr_9 [i_0] [i_2] [i_2]) : (arr_5 [i_0] [i_1])))) : (arr_8 [i_1])))));
                }
            }
        }
    }
    var_20 = min(((min(((8904907034282447898 ? -8428911542178138716 : -3271110874305496858)), (1 > 1)))), var_14);
    #pragma endscop
}
