/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-32767 - 1);
    var_11 = (max((((((var_5 ? var_7 : var_6))) ? 0 : var_0)), (~-1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((!(arr_3 [i_2]))))));
                            var_13 = (min(((max(-322447395, ((max(15, 1)))))), 2576203232172293991));
                            arr_14 [i_3] [i_3] [i_2] [i_3] = ((((((arr_0 [i_0]) + ((min(65535, 0)))))) > ((((((arr_7 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (!var_4) : (((arr_8 [i_3] [i_1] [i_3] [i_3]) ? 6765627721745804853 : 0))))));
                        }
                    }
                }
                var_14 ^= 32114;
            }
        }
    }
    #pragma endscop
}
