/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93640
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (var_7) : (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -117925237)))))))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 117925237)) * (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28051))) >= (arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0] [i_0] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))))));
                    arr_7 [i_0] [i_2] = (+(arr_5 [i_2 + 1] [i_2] [i_2] [i_2]));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
    }
    var_13 = ((/* implicit */unsigned short) min((((((var_1) > (var_3))) ? (min((18446744073709551615ULL), (var_6))) : (var_6))), (min((((0ULL) << (((var_5) - (1295252557665125085ULL))))), (((/* implicit */unsigned long long int) (unsigned short)0))))));
    var_14 = ((/* implicit */short) ((unsigned long long int) (((+(((/* implicit */int) var_2)))) / (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))));
}
