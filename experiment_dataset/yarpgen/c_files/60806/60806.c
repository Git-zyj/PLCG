/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min((((-7543519530816930032 < (7543519530816930005 == var_7)))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1 + 2] [i_2] [i_3] = (max(-7543519530816930033, ((-7543519530816930033 / (arr_2 [i_0])))));
                        var_12 *= ((~(min((-7543519530816930054 - -7543519530816930055), (((!(arr_13 [i_0]))))))));
                        arr_15 [i_2] [i_1] [11] = 7543519530816930054;
                    }
                    var_13 = (((((7543519530816930032 | (arr_11 [i_2] [i_1 + 1] [10] [i_1 + 1] [i_1 + 2])))) ? (((~((~(arr_13 [i_2])))))) : (~-7543519530816930027)));
                }
            }
        }
    }
    #pragma endscop
}
