/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (-((((3758096384 >> (-1 + 21))) * 0)));
                    arr_8 [i_2] [i_2] [i_2] = (~var_2);
                }
            }
        }
    }
    var_19 = (min((min(1, (min(65535, var_6)))), ((((max(13, 65523))) ? ((min(19815, 7))) : 65525))));
    #pragma endscop
}
