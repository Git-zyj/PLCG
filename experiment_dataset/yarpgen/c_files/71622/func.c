/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71622
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
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 = ((/* implicit */long long int) (unsigned char)109);
    var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -5406465301245339342LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) : (268173312U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) ((((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)18484)))));
                var_16 -= ((/* implicit */_Bool) (signed char)119);
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1824458276)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (630643930U)))) : (((((/* implicit */_Bool) -667840242)) ? (max((668613496725135203ULL), (17778130576984416407ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 667840252)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))))))));
            }
        } 
    } 
}
