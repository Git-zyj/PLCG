/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74617
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_4))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((((/* implicit */int) (signed char)-64)) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_3)))))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+((-(((((/* implicit */int) (unsigned char)208)) >> (((((/* implicit */int) var_1)) - (206))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (2828369232214582144ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : (((unsigned int) var_8))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_2]))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(-2283128896191339804LL))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) 7987900190041972691LL);
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)11749)))));
    }
}
