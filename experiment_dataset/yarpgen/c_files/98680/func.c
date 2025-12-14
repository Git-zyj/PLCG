/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98680
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) (((-(((((/* implicit */_Bool) (signed char)127)) ? (2097024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_1 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0] [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned short) (signed char)127))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((_Bool) (short)32767));
                            var_20 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
                            var_21 = ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 3] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 1] [i_0 + 1] [i_0])));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)2)) > (((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_4 - 1]))))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 + 2] [i_0] [i_1])) ? (1164545215) : (arr_14 [i_0] [i_0 - 1] [i_0] [i_0] [i_3]))))))));
                            var_24 = ((/* implicit */long long int) (_Bool)1);
                            var_25 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(arr_14 [i_0] [i_0 + 3] [(unsigned short)0] [i_0 - 1] [i_5])))), (arr_1 [i_0])));
                            var_26 += ((/* implicit */unsigned long long int) (unsigned char)60);
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_1] [i_1]))));
                        }
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_28 = ((/* implicit */int) arr_9 [i_0 + 1] [i_6] [i_2] [i_3] [i_6]);
                            arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 809736671)), (((((/* implicit */_Bool) (short)6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_2]))) : (-7483322221042536289LL)))))) ? (((((/* implicit */int) arr_12 [i_0] [(short)17] [i_1] [i_0] [i_3] [i_0])) + (((/* implicit */int) (short)-2)))) : ((~(((/* implicit */int) max(((unsigned char)71), (((/* implicit */unsigned char) (_Bool)1)))))))));
                            var_29 = ((/* implicit */_Bool) arr_12 [i_0] [i_0 + 3] [i_0] [i_0 - 2] [i_0] [i_0]);
                        }
                        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_1 [i_0 - 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))))), (min((((/* implicit */unsigned int) (-(1164545218)))), (min((((/* implicit */unsigned int) (unsigned short)23053)), (4197104337U)))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    arr_24 [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) min((arr_15 [i_0]), (((/* implicit */int) arr_7 [i_0] [i_7] [i_7] [i_8]))))), (arr_11 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_7] [i_7] [i_8]))), (((/* implicit */unsigned int) min((((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) arr_23 [i_0] [(unsigned char)15] [(unsigned char)15] [i_8]))))), ((-(((/* implicit */int) (_Bool)0)))))))));
                    var_31 = ((/* implicit */int) (short)7);
                }
            } 
        } 
        var_32 += ((/* implicit */int) min((arr_4 [i_0] [i_0] [(unsigned short)14]), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)12] [i_0] [i_0 + 1] [(_Bool)1])) && (((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 3] [(unsigned char)8] [i_0]))))), ((unsigned short)16)))));
    }
    var_33 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), (var_1)));
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)128)) ? (18446744073707454616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8)))));
    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) max((((/* implicit */long long int) (unsigned char)114)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)2020)) ? (((/* implicit */long long int) 22)) : (-5930906894064783253LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)128)) & (((/* implicit */int) (unsigned short)11))))))))))));
    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_13))));
}
