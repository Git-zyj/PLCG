/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91228
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37337)) ? (1880459698) : (((/* implicit */int) var_4)))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((((/* implicit */_Bool) 643490211U)) && (((/* implicit */_Bool) (unsigned short)1))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_16 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_4)) & (((/* implicit */int) arr_11 [i_0] [i_0] [i_2]))))))), (max((((/* implicit */unsigned long long int) (unsigned short)47770)), (280555501484906093ULL)))));
                        var_17 = ((/* implicit */long long int) ((unsigned short) var_10));
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((unsigned int) (signed char)-124)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_14 [i_0] [(short)3] [i_1] [(short)3] [(short)3] [(_Bool)1] = ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_0])));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26489))) / (arr_0 [i_2])))));
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-119)) ? (3469168387205092587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_1] [i_1])) + (((/* implicit */int) var_6)))) == (((/* implicit */int) (_Bool)1))));
                            var_23 = ((((/* implicit */int) ((unsigned char) (unsigned char)189))) - (((/* implicit */int) arr_11 [i_0] [i_1] [i_2])));
                            var_24 = ((/* implicit */unsigned char) var_4);
                            var_25 |= ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0]);
                        }
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (short)-10979))))), (6099573863493875598ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned char) var_8)))))) * (arr_16 [i_2] [(short)0] [(short)0] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) 349235590))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_3 [i_8 + 1])))) + (((/* implicit */int) ((short) arr_3 [i_8 - 2])))));
                                var_29 += min((((/* implicit */unsigned long long int) arr_3 [i_8 + 1])), (arr_7 [i_0] [i_1] [6] [6]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) (+(arr_2 [(_Bool)1] [(_Bool)1])));
                                var_31 = ((/* implicit */short) (((-(((/* implicit */int) arr_22 [i_11] [(_Bool)1] [i_2] [i_1] [(unsigned char)6])))) * ((-(((/* implicit */int) arr_10 [i_0] [0ULL] [i_2] [i_10] [i_11]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4))))))));
    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (-(((/* implicit */int) var_9)))))));
}
