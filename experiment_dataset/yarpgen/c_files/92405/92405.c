/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((((min(var_8, var_8))) ? var_10 : var_11)) | ((~((min(-19768, var_11)))))));
    var_13 = 23479;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((((((arr_1 [i_1]) && 0)))) - (max(-23647, 4))))) ? ((min((min(23647, 19750)), 19763))) : -19779))));
                arr_4 [i_0] [i_1] = ((((2856901710 ? (arr_3 [i_0] [i_0]) : (!23479)))) || ((((~var_10) ^ (arr_3 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
