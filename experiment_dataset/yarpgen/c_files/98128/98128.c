/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 -= (((~(var_9 ^ 33))));
                var_11 = 2511850658511934568;
                var_12 = ((!(arr_4 [i_0] [i_1])));
                var_13 = ((((!(((~(arr_4 [9] [i_1]))))))));
                var_14 = (min(7840150685555453300, 1));
            }
        }
    }
    var_15 *= var_7;
    #pragma endscop
}
