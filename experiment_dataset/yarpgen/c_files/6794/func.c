/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6794
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */int) ((long long int) min((((((/* implicit */_Bool) var_4)) ? (14696825078671451170ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((_Bool) var_10))))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)16533))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1822424942868239055LL)) ? (var_0) : (((/* implicit */long long int) arr_2 [12LL] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)69))) : (((var_0) << (((var_2) - (14449376422607590902ULL)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [(short)7]))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((_Bool) max((((unsigned long long int) arr_4 [(signed char)5] [(signed char)5] [i_3])), (((/* implicit */unsigned long long int) min((1822424942868239055LL), (((/* implicit */long long int) (unsigned char)131)))))))))));
    }
}
