/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94378
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) -8852086996655569172LL);
        arr_4 [i_0] [(short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) & (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [(signed char)3])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((((/* implicit */int) var_12)) ^ (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) (~(arr_5 [i_1])));
        var_16 += ((/* implicit */long long int) arr_0 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_17 [i_1] [5ULL] [i_1] = ((/* implicit */int) var_3);
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_2 - 2]))))));
                    arr_19 [i_1 + 2] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)23779)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) ((signed char) 0ULL))))));
                    arr_20 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1522099684)))) ? ((+(arr_15 [i_2 - 3] [i_2 + 1]))) : (((arr_15 [i_2 + 2] [i_2 - 3]) << (((arr_15 [i_2 + 2] [i_2 + 2]) - (7384183725643559241LL)))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) var_4);
}
