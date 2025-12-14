/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min(((((arr_1 [i_1 - 1]) && 0))), var_9)))));
                var_14 = ((!((min((arr_4 [i_0] [i_1 + 1]), (arr_4 [i_0] [i_1 - 2]))))));
                var_15 &= (arr_1 [i_0]);
                var_16 &= (((min(var_7, (32767 && 156542822870158630)))) ? (((!(arr_2 [i_0])))) : (max(-3, (arr_2 [i_0]))));
                arr_5 [i_0] = (((~1823080228) * (((arr_4 [i_1] [i_1 - 2]) ^ (arr_4 [i_1] [i_1 - 2])))));
            }
        }
    }
    var_17 = (((((!var_8) ^ (0 ^ var_1))) << 0));
    #pragma endscop
}
