/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max(-1790666423626254546, 15003294293503228716));
    var_17 = ((var_5 ? var_1 : (min(var_6, -8679228973171626275))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((((arr_1 [i_0] [i_0]) >= 2059354711)) ? (((var_7 ? 15003294293503228716 : 3091947549471856373))) : var_13);
                    var_18 = 18446744073709551615;
                    var_19 = (max(((var_8 ? 472409972 : (~472409992))), ((((~(arr_0 [i_0] [i_0]))) & (~-472409973)))));
                }
            }
        }
    }
    var_20 = (((var_7 >> (var_14 - 119))));
    #pragma endscop
}
