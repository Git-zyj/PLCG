/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((932622814 ? 932622845 : 65528));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 += ((((((arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 1]) ? (arr_7 [i_2] [i_2 + 1] [i_2 - 1] [7]) : (arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2])))) ? (((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 2]) % (arr_4 [i_2] [i_2 + 1] [i_2 + 2]))) : (((max(9779, 21469))))));
                            var_19 = (max(0, ((((~32765) & (arr_7 [i_0] [i_1] [i_2 + 1] [i_3 - 1]))))));
                        }
                    }
                }
                var_20 = (max(var_20, 23139));
            }
        }
    }
    #pragma endscop
}
