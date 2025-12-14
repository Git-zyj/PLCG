/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82796
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
    var_14 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((1880802790U), (((/* implicit */unsigned int) var_5))))), ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5765380645771653342LL)) ? (5765380645771653331LL) : (var_2)))) : (14148335316072818920ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned char) max(((~(140737488355327LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)68)) << (((((/* implicit */int) var_13)) - (79))))))));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)14004)) : (((/* implicit */int) (_Bool)1))))), ((+(9223372036854775794LL))))), (((/* implicit */long long int) ((unsigned char) ((unsigned long long int) var_10))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned char) min((654332662U), (((/* implicit */unsigned int) (signed char)-45))));
}
