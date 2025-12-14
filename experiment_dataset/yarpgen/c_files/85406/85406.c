/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((max(var_7, (var_4 | 120))));
    var_14 = (((max(988412660, -20313))) ? (!24634) : 6556);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((31672 ? (min((!-1), ((58982 ? -26 : (arr_0 [i_0]))))) : ((-(max(var_9, (arr_6 [8] [8] [1])))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = (((arr_0 [i_0]) ? 2147483645 : (((!((607495104 && (arr_2 [i_0] [i_0]))))))));
                }
            }
        }
    }
    var_15 = ((max((3087299947 && 51), var_7)));
    #pragma endscop
}
