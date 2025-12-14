/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9317
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)511))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)125)))))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [(signed char)12])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) + (var_8)))))));
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_6 [i_0] [i_1]);
                    arr_9 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [(unsigned short)2] [3ULL] [9ULL]);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) arr_4 [i_3] [i_3] [0U]);
        var_19 = ((/* implicit */int) arr_5 [i_3] [3LL] [i_3]);
    }
}
