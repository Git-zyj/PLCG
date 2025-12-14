/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69024
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [i_0])) & (var_8)))) ? (max((((/* implicit */long long int) var_6)), (var_4))) : (((/* implicit */long long int) 1805361530))))) || (((/* implicit */_Bool) (-((-(var_7))))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    arr_8 [3ULL] [i_0] = ((/* implicit */int) (~(((arr_4 [i_2 + 1] [i_2 - 2]) + (arr_4 [i_2 - 3] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_11 ^= ((/* implicit */int) min((((((/* implicit */_Bool) -1579986038)) ? (((/* implicit */unsigned int) -317495229)) : (arr_10 [i_2 - 3]))), (((/* implicit */unsigned int) max(((-(var_9))), (arr_11 [i_0]))))));
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) -317495230))) ? (((int) -317495215)) : (var_7)));
                                arr_15 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_4] [9U] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -317495229)))))) : (max((var_4), (var_4))))) | (((/* implicit */long long int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2] [i_2]))));
                                arr_16 [7LL] [7LL] [11] [11] [i_4] [i_3] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_6)))), (min((var_7), (((/* implicit */int) ((-317495215) == (((/* implicit */int) (unsigned char)183)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) var_9)), (arr_3 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((((arr_14 [i_0] [9ULL] [2LL] [6] [i_0]) * (((/* implicit */unsigned int) var_7)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -317495215))))))))));
                }
                for (int i_5 = 3; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2020351385U)) ? (-317495199) : (-317495196)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (min((var_4), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)10] [i_5])))));
                    arr_21 [i_1] = ((/* implicit */int) var_6);
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [5])) && ((!(((/* implicit */_Bool) var_1))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (+(max((var_5), (var_1)))));
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_15 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_24 [i_6]))))) ? (((/* implicit */int) ((_Bool) (unsigned char)48))) : (((((/* implicit */int) arr_24 [i_6])) ^ (var_0))))));
        var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [6U]))))) || (((/* implicit */_Bool) ((unsigned long long int) var_7)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_27 [16LL] = ((/* implicit */int) arr_26 [i_7] [i_7]);
        arr_28 [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) -317495215)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_0), (((/* implicit */int) (unsigned char)66)))) / (((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_26 [i_7] [i_7])) : (((/* implicit */int) arr_26 [i_7] [i_7]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_25 [i_7]))))))) : (((317495214) >> (((((/* implicit */int) arr_26 [15] [i_7])) + (80)))))));
        var_18 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 317495215)) ? (((/* implicit */unsigned int) 594768358)) : (77679445U)))), (((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (-393450480971281531LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7])))))));
    }
}
