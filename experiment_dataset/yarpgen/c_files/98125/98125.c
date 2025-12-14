/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3469298552955199871;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [3] [3] = ((-(arr_7 [i_1] [i_0 - 1] [i_1 + 2] [i_0 - 1])));
                    var_11 *= ((6 | ((max(-15020, -98)))));
                    arr_9 [i_2] [6] [i_0] [i_2] = ((-((((((arr_7 [i_0] [2] [i_1] [0]) ? 1392284291 : 1))) ? (((arr_3 [i_0] [i_0]) - 0)) : (5333 == 32755)))));
                }
                var_12 = 49152;
            }
        }
    }
    var_13 = (max(var_13, var_0));
    #pragma endscop
}
