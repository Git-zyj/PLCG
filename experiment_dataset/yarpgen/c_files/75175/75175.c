/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(45618 / var_6)));
    var_19 = min((var_10 ^ 0), (((~var_7) ? (32759 || 0) : ((var_6 ? var_15 : 2773557114644552988)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = min(((~(arr_2 [i_1]))), ((((arr_1 [i_0]) < (arr_1 [i_0])))));
                var_20 -= (min(12, ((((!2773557114644553002) == (max(193, -1752083310)))))));
                var_21 = ((-(((-609598020 == ((max(0, 58))))))));
            }
        }
    }
    #pragma endscop
}
