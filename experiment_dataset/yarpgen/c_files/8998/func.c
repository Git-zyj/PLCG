/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8998
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
    var_17 = var_11;
    var_18 += ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_3))))) || (((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (var_5))))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((var_5) ? (((/* implicit */int) (unsigned short)65533)) : ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)61970)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) | (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (min((((/* implicit */long long int) (unsigned short)15)), (-1LL)))))));
                            var_21 = (~(((/* implicit */int) ((unsigned short) ((unsigned char) 3731674726U)))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned char)82))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) && ((_Bool)0))));
            }
        } 
    } 
    var_23 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_10)) | (12652267222114721939ULL)))))) | (min((var_11), (((/* implicit */unsigned long long int) var_0))))));
}
