/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68081
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) min(((-(((/* implicit */int) var_11)))), ((-(1879048192)))))) / (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (unsigned char)157))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (-(min((-9223372036854775797LL), (((/* implicit */long long int) (_Bool)1))))));
                                var_20 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((3758096384U) << (((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) - (94)))))))) ? (var_17) : (((unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) : (var_16))))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (72057594004373504ULL))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_6))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (+((-((-(var_14))))))))));
}
