/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9162
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)242))))) : (((var_3) >> (((536866816) - (536866792))))))) >= (((/* implicit */int) min(((unsigned char)0), ((unsigned char)51))))));
    var_16 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (unsigned char)6)))))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (6120682492092269091ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) 34359738367ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)108)) || (((/* implicit */_Bool) 730064280015103101ULL))))) : ((+(((/* implicit */int) (unsigned char)27)))));
                    arr_7 [i_1] = ((/* implicit */int) (((-2147483647 - 1)) >= (var_3)));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (2147483647))) << (((((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) var_6)))) - (2310)))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) 2054992532))))) ^ (((/* implicit */int) var_6))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_11)) ? (16144852112047301218ULL) : (((/* implicit */unsigned long long int) 1536)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
}
