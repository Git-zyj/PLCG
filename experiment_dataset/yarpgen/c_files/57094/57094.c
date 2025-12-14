/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 255;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] &= (((max((~12), 15554))) ? (((16919 ? 30 : (arr_3 [i_0 + 1])))) : (max(((-25780 ? 26315 : 16652974206031614983)), -var_8)));
                arr_5 [0] [0] [1] = ((~((~((607500997 ? var_15 : 607501005))))));
                var_20 &= (min(-506651359, -104));
                arr_6 [i_0] [5] [0] = (max(7, 15551));
            }
        }
    }
    var_21 = ((~(max((!var_5), ((34 ? 26315 : 6))))));
    var_22 = (((((max(255, 13591473627387704085)) ? ((var_3 ? var_8 : 127)) : ((var_13 ? 19850 : -607500998))))));
    #pragma endscop
}
