/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(-38, (max(1, ((var_6 ? 0 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min(((min(1, (max(var_15, (arr_0 [i_1])))))), (max((max((arr_3 [i_1] [i_0]), (arr_1 [7] [1]))), (4294967295 != 8)))));
                arr_6 [i_0] [i_1] [i_1] = -35184372088768;
                arr_7 [i_1] [i_1] = ((((((1 >= (max(278089778687059690, 18660)))))) != 4294967288));
            }
        }
    }
    #pragma endscop
}
