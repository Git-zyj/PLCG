/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 2835226271;
                var_10 &= ((((max(2835226271, (arr_1 [i_0] [i_0])))) ? ((((arr_1 [i_0] [i_1]) ? ((max(var_2, var_0))) : ((((arr_4 [i_1 + 2]) > (arr_4 [i_0]))))))) : (((arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 2]) ? 1459741024 : var_4))));
                var_11 = (((((~(arr_0 [i_1 + 2])))) ? ((~(arr_0 [i_1 - 2]))) : ((max(147, 1459741024)))));
            }
        }
    }
    var_12 = ((((((((11465996315448863916 ? 2835226262 : 2835226262))) ^ (-127 - 1)))) ? (min(var_4, (~var_1))) : 47232));
    var_13 = var_2;
    #pragma endscop
}
