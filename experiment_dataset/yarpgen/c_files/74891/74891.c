/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3555520203;
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = ((4015440001 & (arr_0 [i_0] [i_0 - 4])));
                var_21 &= ((!(((max(var_14, var_16))))));
                var_22 = ((12 & ((((max(3555520186, 739447093))) ^ (max(4294967290, (arr_2 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
