/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = 2147483647;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 &= (max(((-(arr_13 [i_0] [i_0] [i_2] [i_3] [i_3]))), ((((arr_9 [i_2] [i_2] [i_2] [i_2 + 4] [i_2 + 3] [i_2 + 1]) < (~4294967295))))));
                                var_13 = ((+((max((var_7 > var_7), (32750 && 5208))))));
                                arr_15 [i_0] [i_4] [i_4] [i_0] [i_0] [i_4] = (((((~(arr_2 [i_0])))) == ((((18 ? 805112974322733906 : (arr_6 [i_0] [i_0] [i_0])))))));
                                var_14 &= (64668 & 7009661866128010218);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 &= -805112974322733907;
    #pragma endscop
}
