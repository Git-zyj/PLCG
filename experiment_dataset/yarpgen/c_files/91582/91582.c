/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (((min(8054235909739269711, (var_4 / 8054235909739269711))) + ((((var_0 >= (min(8054235909739269709, var_13))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((-461081010 ? (!8054235909739269688) : (((min(1, var_13)) * (arr_2 [i_1 - 1] [i_2 - 1]))))))));
                    var_17 = (min(var_17, ((min((max((min(1, (arr_3 [i_2] [16] [i_0]))), 8898)), (max(((var_12 ? 1 : -8054235909739269694)), ((max(-1228571766, (arr_2 [i_2] [i_0])))))))))));
                    var_18 ^= (min(var_11, (((((1228571753 ? 1766576442 : 0))) ? (min((arr_4 [i_0] [8]), var_13)) : ((min((-2147483647 - 1), var_0)))))));
                    var_19 = ((-4 ? ((461081009 ? -1766576442 : 1228571763)) : -var_11));
                }
            }
        }
    }
    #pragma endscop
}
