/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93742
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21752)))))) ? (((/* implicit */int) ((var_12) < (((/* implicit */int) var_6))))) : ((~(((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_15)), (var_1)))) ? (((/* implicit */int) (unsigned short)43771)) : (((/* implicit */int) min((var_10), (var_10)))))) : (((/* implicit */int) (unsigned short)21732))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */short) ((unsigned short) (-((~(((/* implicit */int) var_13)))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) + ((-(arr_6 [i_2 + 1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) (+(arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3])));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (2827653931U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)34))))));
                            var_24 |= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)54646)) ? (((/* implicit */int) (short)-18939)) : (((/* implicit */int) (signed char)-89)))) & (arr_9 [i_0] [i_0] [i_2] [i_3])));
                        }
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_25 |= ((/* implicit */unsigned char) var_7);
                        var_26 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_11)) ? (var_17) : (((/* implicit */unsigned int) var_12)))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)155)))))));
                    }
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+((-(var_16))))))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    var_28 ^= ((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [13LL] [i_1] [i_0] [13LL])) <= (var_17)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned int) max((var_16), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_2 [i_6])))))))));
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (-(((/* implicit */int) (short)-22813)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)40482)), (-1)));
                }
                var_32 ^= ((/* implicit */unsigned long long int) ((unsigned char) max((((unsigned long long int) var_18)), (((/* implicit */unsigned long long int) var_8)))));
                var_33 = min(((-(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - ((+(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_34 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (-1)))) ? (((/* implicit */unsigned int) var_2)) : (max((((/* implicit */unsigned int) var_9)), (2823422300U))))));
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((var_5), (((/* implicit */unsigned int) var_14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) (+(-137891884)))), (var_18)))));
    var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_18)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))))));
}
