/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 = 2078642812;
        arr_2 [i_0] = ((+(((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 781424572480328724))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = ((~((((((arr_1 [i_0] [i_0]) ^ (arr_4 [i_0] [6] [i_2])))) ? (arr_6 [i_0] [1] [i_0]) : -115))));
                    arr_7 [i_0] [i_1] [i_0] = ((-115 ? (((~(~31642)))) : -1899859013210385510));
                    var_15 = (min(var_15, 43634));
                    var_16 -= 1;
                }
            }
        }
    }
    var_17 = var_12;
    var_18 = (min(var_18, (~var_11)));
    #pragma endscop
}
