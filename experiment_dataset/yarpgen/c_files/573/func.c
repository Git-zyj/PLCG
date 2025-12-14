/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/573
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((long long int) ((_Bool) var_0));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)0)), (3728624589U))), (3728624589U)))), (max((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_0 - 1])))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) var_0);
                        arr_15 [i_0] [i_1] [i_1] [i_3] = arr_3 [i_0] [i_0];
                        arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(_Bool)1] = ((/* implicit */_Bool) min(((-(arr_10 [i_1 + 1] [i_0 + 1]))), (min((arr_10 [i_1 - 1] [i_0 + 1]), (arr_10 [i_1 + 1] [i_0 - 1])))));
                    }
                } 
            } 
        } 
    }
}
