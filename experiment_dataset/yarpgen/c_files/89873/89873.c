/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 ^= ((((max((((var_7 ? var_3 : 1))), (max(3911575538781664608, 3911575538781664608))))) ? -var_1 : 3911575538781664625));
                    var_16 ^= (min(((min(-0, -30015))), (max(-var_3, ((3911575538781664608 ? 5153149122160406367 : var_13))))));
                    arr_6 [i_0] [i_0] = (max(((var_7 ? 5153149122160406367 : (max(3911575538781664626, 14535168534927887008)))), var_12));
                    arr_7 [i_0] [i_0] = (((((var_6 ? ((var_13 ? var_0 : var_13)) : var_12))) ? ((((((min(-47, var_4)))) >= (max(3911575538781664605, 14535168534927886997))))) : ((~(~var_9)))));
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
