/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((arr_6 [i_0] [i_2]) + (((((((145 ? (-2147483647 - 1) : 145))) >= ((15381114983257788260 ? 145 : var_11)))))))))));
                    var_17 = 110;
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((var_13 ? ((((((2238196913 ? -354201660 : var_9))) || 17))) : 1));
                }
            }
        }
    }
    var_18 -= ((-(max((var_3 + -32746), ((max(30034, 110)))))));
    var_19 = var_7;
    #pragma endscop
}
