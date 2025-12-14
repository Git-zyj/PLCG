/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = (((((6228995314003294855 != (arr_2 [i_1]))) ? (min((arr_5 [i_0] [i_1] [i_1]), 2305843009213693952)) : 1941441427)));
            var_14 = 1941441427;
        }
        arr_7 [i_0] [i_0 - 1] = ((!-5011072225160069913) ? (arr_1 [1]) : (min(-1140319826, (((arr_2 [i_0 - 1]) ? 9223372036854775784 : var_2)))));
        var_15 -= (((((arr_1 [18]) ? (arr_0 [i_0]) : 9223372036854775804)) <= ((-(arr_5 [12] [i_0 - 1] [13])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_16 = ((max(1140319801, (((1140319779 || (arr_2 [i_0])))))));
                    var_17 = (((!(2353525858 < -24136))));
                }
            }
        }
    }
    #pragma endscop
}
