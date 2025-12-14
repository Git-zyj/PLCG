/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [8] |= ((!(((~((-20919 ? var_3 : 36933)))))));
                var_12 = ((-(((((3193163628003131174 ? 5790915412653982271 : 47342)) == 2636995347628880111)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, var_8));
                            arr_11 [i_0] [i_2] [i_2] [i_3] = ((-233749031 ? 0 : 13131));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
