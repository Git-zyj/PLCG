/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((((var_8 ? 7027612170672597950 : var_10))) ? var_4 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (((((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))) < 16181992810902428196));
                var_13 = -8365;
                arr_4 [i_1] [i_1] = (((~var_7) ? ((var_4 ? 124 : 392546567548750655)) : var_5));
                var_14 *= ((var_8 ? var_9 : ((-392546567548750656 ? var_7 : var_4))));
            }
        }
    }
    #pragma endscop
}
