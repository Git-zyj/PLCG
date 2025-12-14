/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] = (max((((var_6 < ((max((arr_2 [i_1] [i_1]), var_3)))))), var_7));
                    var_12 = (max(var_12, ((max((arr_4 [i_0] [i_1] [i_2]), (min(968445723, 1)))))));
                    var_13 &= (arr_0 [i_0] [i_2]);
                    arr_7 [i_0] [i_2] [1] = (!-166752258);
                    var_14 = max((arr_5 [i_2] [i_1] [i_1] [i_2 + 1]), ((436814076 ? 5076940671509570897 : (arr_5 [i_2] [i_1 + 1] [i_0] [i_0]))));
                }
            }
        }
    }
    var_15 = (max(var_15, 0));
    #pragma endscop
}
