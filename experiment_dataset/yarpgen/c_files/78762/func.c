/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78762
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) min((var_8), ((short)15005))))))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_0)))) ? (((/* implicit */int) min((var_5), (var_6)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((min((((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_1))))))), (var_11)));
                                var_16 -= ((/* implicit */unsigned char) var_4);
                                var_17 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                                arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_11)))))) ? (((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) - (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned short) max(((((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((((/* implicit */int) var_5)) + (17576))) - (27))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 15214981234441380916ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)96))))))));
                    arr_17 [(signed char)9] [i_1] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_7))))));
                    arr_18 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 14967183657444768773ULL)) ? (662594899475032840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184)))));
        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)14)) ? (32767ULL) : (((((/* implicit */_Bool) (short)-22675)) ? (1698386757619415809ULL) : (((/* implicit */unsigned long long int) -1901826998)))))), (((/* implicit */unsigned long long int) var_12))));
        arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_8)) ? (min((32767U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (var_4)))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))))));
}
