/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max(1182791207, 9706077942804614629))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (max(1, ((3298632709310438545 / (arr_3 [i_0] [i_1])))));
                var_14 -= (~226);
                var_15 = ((~(((arr_3 [i_1] [i_0]) ? 8740666130904936977 : (arr_3 [i_1] [i_0])))));
                var_16 = (arr_4 [10] [i_0]);
            }
        }
    }
    var_17 = -var_3;
    #pragma endscop
}
