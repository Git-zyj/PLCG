/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((1944944211 ? -16906 : ((-16906 ? 16901 : (((max(1, 0))))))));
                    arr_7 [i_0] [i_1] = (max(13, (-16887 % 17333633975040121171)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((min(479950095, (max(3889315172, 3815017201)))))));
                                var_19 = (((((0 & ((max(3815017195, 3815017190)))))) ? 13 : (((1319484432 ? 0 : 647748279)))));
                                arr_14 [i_0] [i_1] = ((((((min(15673448635133359601, 3135341751961109274)) + -5460270017879633962))) ? ((3889315150 ? ((min(var_2, -820281429))) : 0)) : var_5));
                            }
                        }
                    }
                    var_20 -= ((((min((0 > var_6), (-32763 / 3996302358)))) ? (-2147483637 && -6978583685593449203) : (min((min(5120144485592425115, var_5)), (((3815017177 ? var_13 : 0)))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((((max(17333633975040121171, (min(var_3, var_11))))) || 3492844202)))));
    var_22 = 18446744073709551610;
    var_23 = 6908640800703717770;
    #pragma endscop
}
