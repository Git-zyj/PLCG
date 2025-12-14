/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((!(((28814 ? (min(28814, 0)) : ((min(4072073220416428600, 826580985)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (!256468446);
                    arr_8 [i_0] [i_1] [i_2] = 4039059002001347672;
                    var_16 = ((((((((-611305826 ? 1842434613 : 110))) ? -1842434613 : (max(53333, 0))))) ? (min((((22887 ? 1842434612 : 12203))), ((62 ? 157 : 10980766081834344132)))) : ((min(0, ((max(255, 58))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_0] [i_3] [i_0] [i_1] [i_0] = ((~(max(3918256368, -1842434613))));
                                arr_16 [i_0] = -491154867;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
