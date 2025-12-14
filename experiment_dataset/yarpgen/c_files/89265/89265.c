/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((3259094925 ? 2305843009213693951 : var_1)), 16140901064495857656));
    var_11 = (max((min((var_2 * var_5), var_9)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((min((min((arr_3 [i_0]), var_3)), (arr_2 [i_0] [i_0] [i_0])))) ? (min(((((arr_2 [i_0] [i_1 - 1] [i_0]) % (arr_3 [i_0])))), -16140901064495857664)) : 74);
                var_12 = var_4;
                arr_6 [i_0] [i_1 + 1] = (arr_4 [i_1 + 1] [i_0] [i_0]);
                var_13 = (max(var_13, ((((arr_3 [i_1]) ? -653385632 : ((-(arr_4 [i_0] [i_1 - 2] [i_1 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
