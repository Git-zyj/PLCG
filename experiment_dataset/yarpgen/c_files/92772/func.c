/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92772
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_10 [i_0 - 1] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (~((+(arr_9 [i_0 - 1] [i_3] [i_3 - 1])))));
                        var_17 = ((/* implicit */unsigned short) (((~(var_14))) & (min((((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_6)))), ((~(((/* implicit */int) arr_4 [i_1] [i_1] [i_2]))))))));
                        arr_11 [i_3] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_11)) & (((/* implicit */int) var_4))))));
                        arr_12 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((arr_1 [i_1 - 1] [i_1 + 1]) ? ((~(((/* implicit */int) arr_1 [i_1 - 1] [i_1])))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) (((~(arr_9 [i_0 - 1] [0U] [i_0]))) << (((((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]))) - (36992)))));
    }
    var_19 |= var_0;
}
