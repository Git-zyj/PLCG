/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (((((10302 - (arr_3 [i_0 + 3] [i_1] [i_0 + 3])))) ? 38529 : (0 - 4294967295)));
                var_19 = (((((max(0, 38503)))) ? (((var_12 | 1) | (((arr_3 [i_0 - 2] [i_1] [i_0]) ? var_12 : 32767)))) : (27007 >= 0)));
            }
        }
    }
    var_20 = ((((((var_4 - 38524) >= (1803217042993284743 >= 38518))))) <= 4294967295);
    var_21 = (((((13838839489016102335 ? 65504 : (~0)))) ? var_17 : (var_7 % 1011178515)));
    #pragma endscop
}
