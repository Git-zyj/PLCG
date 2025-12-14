/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59233
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned int) 407817921484613169LL))))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0]))) : ((-(((/* implicit */int) ((unsigned char) 0ULL)))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 *= ((/* implicit */short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((unsigned short) var_4)))));
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6377676331941308815LL)) / (18446744073709551613ULL))))));
            arr_8 [i_0] [i_1] = (-((+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))));
        }
        for (unsigned int i_2 = 4; i_2 < 14; i_2 += 3) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((127471318504566409ULL), (((/* implicit */unsigned long long int) (short)5377))))) ? ((-(((/* implicit */int) ((unsigned short) arr_0 [i_0]))))) : (((((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(signed char)8] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [0LL] [0LL] [i_0])))) : (((/* implicit */int) ((short) (short)-1)))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1835790270))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_12 [15] [3ULL] [i_3] [i_0]))));
                            var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_0 [i_2])))))), (((((/* implicit */_Bool) ((-2651260517340027050LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-19049)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_6 [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_18 [i_0] [i_4] [i_5])) : (arr_13 [i_0] [i_2 - 3] [(short)17] [i_5])))))));
                            arr_19 [i_5] [i_4] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3])) == (((/* implicit */int) arr_7 [i_2] [i_4] [i_5])))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_0] [i_4] [i_3])))))));
                        }
                    } 
                } 
                arr_20 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_11 [i_0])) / (arr_17 [i_0] [(short)12] [(short)12] [(short)12] [i_0] [(short)16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (arr_18 [i_0] [0U] [i_0]))))) : (((((/* implicit */_Bool) 2846178440U)) ? (2897014203U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0LL))))));
                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((unsigned long long int) (short)-1)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)63490), (((/* implicit */unsigned short) (_Bool)1))))) >> (((/* implicit */int) (!((_Bool)1)))))))));
            }
        }
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59646))) > (18446744073709551590ULL)))) | (((/* implicit */int) ((((/* implicit */int) (short)0)) == (((/* implicit */int) (unsigned short)2032)))))));
    }
    var_20 = ((/* implicit */_Bool) ((var_1) << (((((((/* implicit */int) var_11)) * (((((/* implicit */_Bool) (short)-15690)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))) + (693088)))));
    var_21 = var_9;
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_3)), (var_0)))) <= (((((/* implicit */int) var_0)) - (((/* implicit */int) var_4)))))))));
}
