/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96245
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) max((var_7), (((/* implicit */short) arr_1 [(short)17])))))))), (min((((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned int) arr_1 [i_0])), (1U)))))));
        var_13 *= ((/* implicit */short) (+(((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) (-((((-(6538013950235722448LL))) | (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_1] [22U])), (272635024))))))));
            var_15 &= ((/* implicit */signed char) (+(536862720LL)));
            arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(4398046507008LL)))) && (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) > (9223372036854775807LL)))))) != ((+((-(((/* implicit */int) arr_0 [i_1] [i_0]))))))));
        }
    }
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 -= ((/* implicit */unsigned char) (signed char)-22);
}
