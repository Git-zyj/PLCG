/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 -= ((-1 ? -1 : 371396224));
    var_17 = (((((max(-1, var_1)) << (var_13 - 214))) - -17294));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= (((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0])))) ? (min(var_13, ((0 << (371396224 - 371396193))))) : (((max(var_14, (arr_2 [i_0]))))));
                var_19 += ((((((((((arr_1 [i_1] [i_0]) != 2130706432)))) - (arr_2 [i_0])))) ? ((min(var_12, (arr_1 [i_0] [i_0])))) : (((3288254028 || -371396224) ? (var_14 || var_9) : ((-371396224 ? 1006713267 : (arr_3 [i_1])))))));
                var_20 |= ((1558567340 ? -28497 : 1022));
                var_21 = arr_2 [i_0];
            }
        }
    }
    #pragma endscop
}
