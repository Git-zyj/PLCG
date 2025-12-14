/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = 0;
                var_12 = (min(var_12, ((max(1, (((arr_3 [i_0 + 1]) ? (arr_3 [i_0]) : ((max((arr_3 [i_0]), (arr_2 [i_1] [i_1] [i_0 + 1])))))))))));
                arr_4 [i_0] = ((((max(-11, (max(18, 6839332357954814533))))) ? ((((max(-2231661286982462719, 0)) <= 17))) : 18));
                arr_5 [i_0] = (max((arr_3 [i_0]), (arr_3 [3])));
            }
        }
    }
    var_13 = ((((var_4 ? var_5 : 0))));
    #pragma endscop
}
