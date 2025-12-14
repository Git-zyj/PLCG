/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= ((((max((arr_3 [i_1] [20] [14]), (arr_3 [i_0] [i_1] [i_1])))) != (arr_1 [i_1] [i_0])));
                arr_4 [i_0] |= (((((14078982744618906608 * var_7) ? (((-7018128730063197666 ? var_8 : 0))) : ((1 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1]))))) * 1));
            }
        }
    }
    var_13 = var_9;
    var_14 = var_8;
    #pragma endscop
}
