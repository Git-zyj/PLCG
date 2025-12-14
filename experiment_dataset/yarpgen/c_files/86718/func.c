/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86718
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */signed char) (+(((((unsigned long long int) var_18)) * (min((((/* implicit */unsigned long long int) (unsigned char)70)), (var_0)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) var_12))))) <= (((/* implicit */int) (short)24922)))));
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_1 [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_5)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) var_10));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) var_10))));
                            arr_15 [i_4] [5ULL] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [13]);
                            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_5))) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                        }
                        for (signed char i_5 = 2; i_5 < 12; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(var_9)));
                            var_24 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_13))))), (((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        }
                        arr_20 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3] [(signed char)12] [i_1] [i_0])) || (((/* implicit */_Bool) -4503599627370489LL))));
                        var_25 *= (((!(((/* implicit */_Bool) var_18)))) && (((/* implicit */_Bool) max((((/* implicit */int) var_2)), (arr_16 [i_1] [i_1] [i_3])))));
                    }
                    for (short i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        arr_25 [i_0 - 1] [i_1] [i_2] [(unsigned short)12] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                        arr_26 [i_0 + 1] [(_Bool)1] [i_2] [i_6] = ((4503599627370501LL) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) -937961855)))));
                        var_26 -= ((/* implicit */unsigned long long int) var_16);
                        var_27 *= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_6 + 3] [i_2] [3ULL] [i_1])) ? (((/* implicit */int) arr_24 [i_2] [i_6 - 2] [i_6] [i_6 + 2] [i_6])) : (var_17))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)32766))));
                    }
                    arr_27 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((min((arr_16 [i_0 + 1] [i_0] [i_0]), (arr_16 [i_0 - 1] [i_0] [i_0 - 1]))) ^ (((/* implicit */int) arr_18 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1]))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    var_29 *= var_18;
                    arr_30 [i_7] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_19)));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) 18446744073709551615ULL);
    var_31 = ((/* implicit */long long int) min((((((/* implicit */int) ((unsigned short) 28))) >> (((((/* implicit */int) (unsigned short)33957)) - (33942))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((var_19) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) var_6))))));
    var_32 = ((/* implicit */_Bool) var_11);
}
