/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((arr_0 [i_0 + 1]) ? (((arr_2 [i_1] [2]) ? (~-4589275985192469936) : (-13 + 4056169088672352334))) : 9223372036854775807);
                var_16 = ((((-(arr_3 [i_0 - 2])))) ? (((arr_3 [i_0 + 3]) - var_10)) : (((arr_3 [i_0 - 2]) >> (var_0 + 1288196130665102742))));
            }
        }
    }
    var_17 ^= max(var_10, (min(-3911204904970222291, var_12)));
    var_18 = (~(((((var_8 ? -1422268822102465168 : var_10))) ? (~var_6) : (var_10 & -1147007277418035802))));
    #pragma endscop
}
