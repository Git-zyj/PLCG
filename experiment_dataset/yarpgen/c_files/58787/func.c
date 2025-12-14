/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58787
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) == (11779198302284976658ULL))))))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (arr_1 [i_0 - 1]))) : ((-(((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))))));
        var_16 = ((/* implicit */int) max((var_16), ((((+(((/* implicit */int) (signed char)-112)))) - (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)112))))))));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 8824485017241828062ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((/* implicit */int) (unsigned char)240);
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)91)), (7744480356411416167ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1 + 1]))) : (arr_5 [i_1])));
        }
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            arr_12 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)91)) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)125)))) : (((/* implicit */int) max(((_Bool)1), (var_9))))))) == (((((/* implicit */_Bool) ((arr_10 [i_1] [i_3]) ? (((/* implicit */unsigned long long int) var_8)) : (1680819010317312064ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (((unsigned int) (unsigned char)73))))));
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((unsigned int) arr_3 [i_1] [(unsigned char)15]))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_5) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((_Bool) ((unsigned int) var_12))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)138)))) == (((/* implicit */int) (signed char)44))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        arr_25 [i_1] [i_4] [i_1] = ((/* implicit */signed char) (!(max((arr_22 [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1]), (arr_10 [i_1] [i_1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) 
                        {
                            var_23 *= ((/* implicit */signed char) ((arr_23 [i_1] [i_4] [i_1]) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) (unsigned char)119)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183)))))));
                            arr_28 [i_1] [i_6] [(unsigned char)14] [(signed char)6] [i_4] [i_7] = ((/* implicit */unsigned int) ((int) var_7));
                        }
                        arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (_Bool)0)) : (-1836032200)));
                        arr_30 [i_1 - 1] [i_1] = ((min((arr_17 [i_1 - 1] [i_1] [i_5] [i_6 - 1]), (((/* implicit */unsigned long long int) var_9)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_9 [i_1 - 3])))))));
                        var_24 *= ((/* implicit */unsigned char) (~(((int) var_9))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_25), (arr_19 [6ULL] [i_1] [6ULL])));
    }
    var_26 = var_7;
    var_27 = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)44))))) == (1079251982U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */_Bool) -4111901362901686898LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4137786107U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_0)))))))));
}
