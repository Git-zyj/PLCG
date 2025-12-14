/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84036
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
    var_13 = ((/* implicit */unsigned char) var_9);
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1 - 1])))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((arr_2 [(unsigned short)0]) / (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (var_9)))))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (var_7) : (var_7))))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_16 ^= ((/* implicit */_Bool) max((524287ULL), (((/* implicit */unsigned long long int) (unsigned char)205))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_2])) : ((~(((/* implicit */int) var_1)))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_4))));
    }
}
