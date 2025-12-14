/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60590
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1508027974)) ? (((/* implicit */int) arr_6 [i_0] [16U] [i_0 - 1])) : (((/* implicit */int) (short)6213))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))))));
                    arr_7 [(unsigned char)14] [2U] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 2])) ? (arr_2 [i_1 + 2] [(short)18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])))))));
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [14LL])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [5ULL] [4LL]))) >= (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((arr_0 [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_1])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1]))) * (arr_2 [i_0] [10ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2767703951U))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) max((var_3), (min((((/* implicit */int) var_6)), (var_3))))));
}
