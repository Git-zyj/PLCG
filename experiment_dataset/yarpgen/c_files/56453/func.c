/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56453
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) <= (((max((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_2]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))))))));
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) & (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2]))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_7))))), (((arr_2 [i_0] [i_1 - 1]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 2]))))))))))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-105)) + (117))))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-105)), (var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)30882)), (-1092897985)))) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-48)))))))));
    }
}
