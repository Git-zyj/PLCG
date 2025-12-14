/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6338
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) (-(17114524727747144546ULL)));
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned int) (signed char)-85)), (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                    var_12 -= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_0)));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_12 [(unsigned char)5] [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_0] [20U] [i_2] [i_2])), ((~(((/* implicit */int) (signed char)-99))))));
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) >> (((((/* implicit */int) var_6)) - (225))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
                    {
                        var_14 -= ((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) min((arr_13 [7U] [i_4 + 1] [7ULL] [i_4] [i_1]), (min((((/* implicit */unsigned short) var_6)), (arr_13 [i_0] [i_0] [i_1] [i_0] [i_1]))))));
                        var_15 -= ((/* implicit */signed char) var_5);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_16 -= max((((unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_1] [i_5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_5]) : (arr_3 [i_2])))));
                        var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (unsigned char)119)) * (((/* implicit */int) arr_14 [i_5])))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_2 [i_1] [16])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 21; i_6 += 3) 
                        {
                            arr_25 [i_0] [i_0] [(unsigned short)19] [(short)2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((signed char) 3099095773U)))));
                            var_18 *= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)2] [i_6 - 2] [i_0])) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_26 [i_1] [i_1] [(unsigned short)13] [i_5] = ((unsigned char) ((_Bool) var_8));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */short) ((((/* implicit */int) var_9)) >= (((((((/* implicit */_Bool) arr_0 [i_0] [i_7])) ? (((/* implicit */int) (short)6871)) : (arr_9 [(signed char)13] [i_2] [i_7 + 3] [i_8]))) + (((arr_15 [i_1] [i_2] [(unsigned short)13] [i_8]) ? (((/* implicit */int) arr_27 [(unsigned short)12] [(unsigned char)4] [i_0])) : (((/* implicit */int) (signed char)-71))))))));
                                arr_33 [i_1] [i_1] [(short)12] [i_1] [i_8] = ((/* implicit */unsigned int) -2147483643);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)17274)) * ((-(((/* implicit */int) arr_13 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]))))));
        var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_9 + 1] [i_9 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9] [i_9 - 1]))) : (var_8))) & (((/* implicit */long long int) ((((((/* implicit */int) var_1)) == (((/* implicit */int) var_10)))) ? (((((/* implicit */int) (short)-1)) - (((/* implicit */int) arr_31 [i_9])))) : (((/* implicit */int) ((short) 0ULL))))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned char) (unsigned short)2611);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((unsigned char) arr_10 [i_9] [i_9] [i_9 - 1] [i_9 - 1])))))) || (((/* implicit */_Bool) ((short) arr_34 [i_9 + 1] [i_9 - 1])))));
        var_23 = ((/* implicit */unsigned int) var_10);
    }
}
