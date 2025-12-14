/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = (max(((((-10023 - var_11) ? (max(var_0, (arr_4 [i_0] [i_1]))) : 124))), (min(-3707873635008690460, ((51 ? var_8 : (arr_2 [i_0])))))));
                arr_5 [i_0] [i_0] [8] = var_12;
                var_18 = (1 && ((((~1) ^ 1))));
            }
        }
    }
    var_19 = (!10761272515593436447);
    #pragma endscop
}
