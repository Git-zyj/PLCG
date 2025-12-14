/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60806
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
    var_11 += ((/* implicit */_Bool) min((((/* implicit */long long int) (((-(7543519530816930032LL))) < (((/* implicit */long long int) ((/* implicit */int) ((7543519530816930005LL) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))), (var_8)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_1 + 2] [i_2] [i_3] = ((/* implicit */unsigned int) max((-7543519530816930033LL), (((-7543519530816930033LL) / (((/* implicit */long long int) arr_2 [i_0]))))));
                        var_12 *= ((/* implicit */unsigned char) (~(min((((-7543519530816930054LL) - (-7543519530816930055LL))), (((/* implicit */long long int) (!(arr_13 [i_0]))))))));
                        arr_15 [i_2] [i_1] [(short)11] = ((/* implicit */_Bool) 7543519530816930054LL);
                    }
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((7543519530816930032LL) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_1 + 1] [(short)10] [i_1 + 1] [i_1 + 2])))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) arr_13 [i_2]))))))) : ((~(-7543519530816930027LL)))));
                }
            } 
        } 
    } 
}
