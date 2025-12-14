/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(3434866464, -1940977165)) << (var_5 > var_3));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = ((-1940977177 < (!var_3)));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = -11152;
                    var_15 &= (~((3791183111 << (((~var_6) - 1882377379)))));
                }
            }
        }
        var_16 = (min(var_16, (((!((((-1940977156 / -1940977147) ? -var_9 : var_1))))))));
    }
    #pragma endscop
}
