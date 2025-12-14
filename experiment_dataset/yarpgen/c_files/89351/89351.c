/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((!((((var_2 ? 94651531 : 7298808038566763344)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (min(var_2, (~var_3)))));
                arr_5 [6] &= (max(((7298808038566763344 ? 3597534555 : 9)), ((16382 ? (max(16382, 0)) : (((max(16374, 49175))))))));
            }
        }
    }
    #pragma endscop
}
