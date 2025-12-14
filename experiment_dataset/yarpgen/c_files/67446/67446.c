/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 *= (~1);
                arr_4 [i_0] [1] [i_0] = (~var_6);
                arr_5 [i_0] = (((((min(var_2, 1))))) ? (arr_0 [i_1]) : -6349799742267154210);
            }
        }
    }
    #pragma endscop
}
