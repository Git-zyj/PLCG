/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72177
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((15663822579458979285ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_19 = max((15663822579458979285ULL), (((/* implicit */unsigned long long int) -1715736459)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (min((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [12U])) ? (arr_3 [i_0] [(signed char)5] [(short)5]) : (((/* implicit */int) arr_4 [i_0])))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)14] [i_1])) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [(unsigned char)21])) : (min((arr_0 [i_0] [19]), (((/* implicit */unsigned int) var_7)))))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (((15663822579458979276ULL) >= (((/* implicit */unsigned long long int) var_7))))))))));
            }
        } 
    } 
}
