/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58206
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = 0U;
                    var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? ((+(arr_1 [(short)1] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1015813024)) + (0U)))) ? (((unsigned int) 4294967295U)) : (((/* implicit */unsigned int) 611680916)))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) != (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_0))))), (arr_5 [i_0])))));
        var_12 -= ((/* implicit */unsigned int) (((~(arr_3 [i_0] [i_0] [11LL]))) & (((/* implicit */int) var_6))));
    }
    var_13 = ((/* implicit */int) var_9);
    var_14 = (((~(min((((/* implicit */long long int) var_3)), (var_9))))) | (((/* implicit */long long int) ((/* implicit */int) min((((short) var_5)), (((/* implicit */short) ((var_8) > (((/* implicit */long long int) -18))))))))));
    var_15 = ((/* implicit */_Bool) ((unsigned char) var_0));
    var_16 = ((((/* implicit */int) var_5)) == (((/* implicit */int) var_0)));
}
