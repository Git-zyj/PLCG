/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65926
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */long long int) 9U)) : (810463873335145386LL)));
                            arr_12 [i_0] [i_0 - 1] = ((/* implicit */short) (unsigned short)65535);
                            var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((4294967292U), (((/* implicit */unsigned int) var_10))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((((/* implicit */int) min((arr_5 [i_0] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) + ((+(((/* implicit */int) arr_3 [i_0])))))) + (min((((int) var_4)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-5)))), ((~(((/* implicit */int) (unsigned short)0))))))), ((+(min((861270444U), (((/* implicit */unsigned int) -1581646688))))))));
}
