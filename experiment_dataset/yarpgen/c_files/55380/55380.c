/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4294967295;
    var_19 = 63;
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (min(((-7021564493715843884 ? 10 : 7449)), 7449));
        arr_2 [i_0] = ((-((-(arr_1 [i_0])))));
        var_22 *= (((((((var_3 ? (arr_0 [8] [i_0]) : var_12))) ? 7449 : (~12934461179534125419))) != (((min((arr_0 [i_0] [i_0]), 32754))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (max(((-((var_2 ? 12934461179534125419 : (arr_6 [i_1] [i_1]))))), (((((1 ? 225 : -12120))) ? ((-32758 ? 5512282894175426196 : (arr_4 [i_1]))) : 239))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((255 >> (255 - 244)));
                    var_24 &= ((175 ? ((-(arr_4 [i_1]))) : ((max(1, (arr_4 [i_3]))))));
                    var_25 = ((228 ? 222 : 2147483618));
                }
            }
        }
        var_26 = (min(var_26, (arr_7 [i_1] [i_1])));
    }
    #pragma endscop
}
