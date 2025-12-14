/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((var_13 / 48) && 6268632554449240179)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = (((min((arr_3 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_1]))) - 498326814));
                    var_18 += ((101 ? 3796640481 : 9206653882222892642));
                    arr_7 [i_2] [i_1] [i_2] &= (((arr_1 [i_0 - 3] [i_2 - 1]) >= (arr_2 [i_0] [i_0])));
                    arr_8 [i_1] = (((max((arr_4 [i_1]), ((3796640494 ? -31323 : 18374686479671623680)))) != ((((arr_2 [i_0 + 2] [i_1 - 1]) ? 72 : (arr_2 [i_0 + 2] [16]))))));
                    var_19 -= ((!(((498326814 ? (arr_4 [i_2]) : (arr_1 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_20 += var_10;
    var_21 |= var_10;
    #pragma endscop
}
