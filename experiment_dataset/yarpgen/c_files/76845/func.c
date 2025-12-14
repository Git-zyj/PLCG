/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76845
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
    var_10 = ((/* implicit */unsigned short) ((((var_2) <= (((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)38)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (_Bool)0)))) : (max(((-(var_5))), (((((/* implicit */int) var_0)) * (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6259335383813249903LL)) ? (arr_6 [(short)0] [i_1] [(unsigned char)9]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)22])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [24U] [8] [24U])))))) : ((~(max((((/* implicit */long long int) var_2)), (var_3)))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((1269113154) % (((/* implicit */int) (unsigned char)151))))) < ((~((~(arr_0 [i_1])))))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -4470318106441521340LL)))))))) << (((((/* implicit */int) var_6)) - (194))));
}
