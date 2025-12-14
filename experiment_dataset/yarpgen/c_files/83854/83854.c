/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(((var_0 ? 3661918048 : 633049247)), var_3))) ? ((~(1 - 633049248))) : (((var_15 ^ var_13) | ((3661918064 ? 633049247 : 3661918048))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((-17950 ? -6726974364340518765 : -28821));
                var_19 |= (((arr_4 [8]) ? (((var_11 >> (var_0 + 18544)))) : (((arr_4 [i_1]) ? var_16 : (arr_4 [i_0])))));
            }
        }
    }
    var_20 = (max(var_20, 14155888809071426478));
    var_21 -= (min((var_6 / -15), ((((!-1) && var_16)))));
    #pragma endscop
}
