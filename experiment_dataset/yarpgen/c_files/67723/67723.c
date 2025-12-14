/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_20 = ((((((!-1) & ((min(1536, 13197)))))) ? (((((21246 ? 4088 : 16618))) ? ((-5689 ? -5676 : -12635)) : (~-18983))) : ((-((-15528 ? -12631 : 0))))));
                    arr_11 [i_0] [i_1] [i_0] = ((((min(-32761, 28447))) ? ((-5695 ? -22938 : 19051)) : ((-15531 ? 12634 : 16168))));
                }
                var_21 ^= ((1593 != (~-5693)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_4] = ((-25615 ? -20655 : (-23318 - 29086)));
                    arr_19 [i_4] [i_5] [i_4] [i_5] = ((((((-17518 == 0) ? -8448 : (-20655 >= 8064)))) ? ((min(-1, 32763))) : (((((10366 ? 20655 : -6994))) ? ((-29009 ? -1 : 19257)) : (((-32767 - 1) ? -25449 : 31586))))));
                }
            }
        }
    }
    #pragma endscop
}
