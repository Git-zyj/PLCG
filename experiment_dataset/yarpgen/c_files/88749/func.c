/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88749
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) min(((+(var_13))), ((-(1058149951U)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((arr_3 [8ULL] [(signed char)15]) / (((int) 2137864366U))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */int) ((short) (signed char)0))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((arr_9 [i_2] [i_2]) << (((arr_9 [i_2] [i_2]) - (1073591797)))))) : (((3236817353U) << (((3236817340U) - (3236817339U))))))))));
                            arr_10 [i_3] = ((/* implicit */unsigned int) ((int) var_7));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */signed char) ((long long int) min((1058149956U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)199))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -4093515)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) var_3)))))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) >= (var_12)))))))));
}
