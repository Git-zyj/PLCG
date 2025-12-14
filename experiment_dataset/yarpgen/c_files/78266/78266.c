/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(7350127887296942014, -7350127887296941988)), var_12));
    var_17 &= var_4;
    var_18 = ((var_11 ? (!var_7) : ((var_14 ? (!var_5) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((12120911320783954114 ? (max(((7350127887296942026 ? var_14 : 12120911320783954107)), (((-(arr_4 [i_1])))))) : (((max((27777 > var_9), (-1216939176 || var_4)))))));
                var_20 = (max(var_20, (((12120911320783954107 ? 18446744073709551609 : -41)))));
                arr_6 [i_1] = ((var_5 < ((42141 * ((max((arr_0 [i_0 - 2]), 37030)))))));
            }
        }
    }
    #pragma endscop
}
