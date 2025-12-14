/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((19802 ? 19 : ((var_12 ? var_8 : var_6))))) ? (~58) : ((~(~var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_14 &= ((-((-((3283453264 ? 70 : -5392894237926631732))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] = ((((((56 ? var_8 : var_3)))) ? (((((~(arr_13 [i_0] [i_0] [i_2] [i_3] [13])))) ? (!0) : (~var_10))) : (((((-86 ? 3283453264 : -1))) ? (((arr_6 [i_4] [i_1] [i_1] [0]) ? -64 : 16717735072266566479)) : (!62954)))));
                                var_15 = (min(var_15, 71));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [12] = ((-((40 ? (((arr_6 [i_0] [i_1] [i_1] [i_2 + 1]) ? var_3 : -22144)) : -815996127))));
                                var_16 ^= (~22168);
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_0] [i_1] = (((-1 ? 3774114516 : 1011514032)));
                var_17 ^= ((!((((((var_4 ? (arr_4 [i_1] [i_0] [i_0]) : (arr_0 [i_0])))) ? (~182) : (!var_6))))));
            }
        }
    }
    #pragma endscop
}
