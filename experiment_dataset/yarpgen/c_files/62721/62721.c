/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] = (arr_3 [i_0] [i_0]);
                var_14 += 849765634;
            }
        }
    }
    var_15 = var_12;
    var_16 += ((((min((((var_9 + 9223372036854775807) >> (7455124759753005322 - 7455124759753005308))), -88))) ? 7455124759753005313 : 1));
    var_17 = (max(var_17, ((max(var_5, (((var_13 != (136 - var_9)))))))));
    #pragma endscop
}
