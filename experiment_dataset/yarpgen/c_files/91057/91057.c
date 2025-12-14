/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2722619710348910821;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 += (15724124363360640795 && 2722619710348910830);
                    var_15 = (min(var_15, (((!((min((2722619710348910835 > 20), (max(var_10, 9223372036854775807))))))))));
                }
            }
        }
    }
    var_16 = ((((max(840959903, var_1))) * ((((!(((1674637383 ? 18176 : 1)))))))));
    var_17 = var_6;
    #pragma endscop
}
