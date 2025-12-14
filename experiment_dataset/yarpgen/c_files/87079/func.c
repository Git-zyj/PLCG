/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87079
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
    var_20 = ((/* implicit */short) (+(var_16)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)143)), (min(((unsigned short)6144), (min(((unsigned short)65525), (((/* implicit */unsigned short) (unsigned char)143))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)194))))), (var_15)));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1 - 1] [i_2 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) -2063891231)), (4846395191533618471LL)));
                    var_22 *= ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_2 [i_2 + 1] [i_2 + 1])), (0U))), (((((/* implicit */_Bool) ((6527637228927020365LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (2775726581U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58873)))))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)90));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)59385))));
                        arr_17 [i_3] [i_1 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) ((short) 2937944565959302714ULL));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_1)))))));
                            arr_22 [i_0] [i_1] [i_3] [(short)14] [(_Bool)1] [i_0] = ((/* implicit */signed char) 6917529027641081856ULL);
                        }
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 4) 
                        {
                            var_26 *= ((/* implicit */unsigned int) ((_Bool) (short)(-32767 - 1)));
                            arr_25 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)6663))));
                        }
                        arr_26 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_0)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_12);
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)6150)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_12)))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                            arr_35 [(unsigned char)9] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (((((/* implicit */_Bool) var_13)) ? (11371286220323836065ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3647508664977020085LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200)))))))));
                        }
                        var_30 = ((/* implicit */int) (signed char)15);
                        var_31 = ((/* implicit */short) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_9))));
                    }
                    var_32 *= (!((_Bool)1));
                }
                for (short i_10 = 1; i_10 < 18; i_10 += 4) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [i_10] = var_13;
                    var_33 = ((/* implicit */_Bool) var_15);
                    arr_39 [i_0] [i_1] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_33 [i_0] [21] [i_10 + 3] [i_1 - 1] [i_1 - 1])))));
                }
            }
        } 
    } 
    var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min(((-(1610635144084467906LL))), (((/* implicit */long long int) (unsigned char)11)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
}
