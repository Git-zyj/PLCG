/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83158
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))), (((unsigned long long int) (short)19331))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))) / (max((arr_11 [14U] [14U] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)8))))))));
                        var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32768)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_0] [i_4]);
                        arr_15 [i_4] [i_4] [i_4] [(signed char)16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [(unsigned short)6] [i_2 + 2] [i_4] [i_2 + 1] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((3596572274U), (((/* implicit */unsigned int) var_2))))) ? (698395021U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_4] [i_1])) % (((/* implicit */int) (unsigned char)192))))))))));
                        arr_16 [i_0] [i_0] [i_2 - 1] [i_4] [i_1] = ((/* implicit */long long int) (signed char)-104);
                        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-100)) / (((/* implicit */int) (unsigned char)208))))) == (((unsigned int) max((1745033930538092243LL), (((/* implicit */long long int) -719540732)))))));
                        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned long long int) (-(-3474737748847135685LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_2 + 1] [i_1] [i_0])) ? ((~(3596572275U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))) : (((((/* implicit */unsigned long long int) 1745033930538092243LL)) % (arr_1 [12ULL] [i_0])))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_20 [10LL] [10LL] [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_5])) ? (arr_0 [i_5] [i_2 - 1]) : (arr_0 [(short)3] [i_5]))) << (((max((3221225472U), (((/* implicit */unsigned int) arr_2 [i_5])))) - (4294967236U)))));
                        arr_21 [i_1] [i_1] = max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [(signed char)11] [i_0]))) & (var_6))), (max((10466770485462633894ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))))), (((/* implicit */unsigned long long int) var_10)));
                        var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-21))))) : (((((/* implicit */_Bool) arr_18 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) 1885784230U)) : (arr_18 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_5])))));
                        arr_22 [(short)9] [i_2 - 1] [(short)9] [i_0] = ((/* implicit */signed char) (unsigned char)3);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_24 = (_Bool)0;
                        arr_27 [i_0] [(unsigned char)2] [(_Bool)1] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_6] [i_1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_0]))))) | (max((((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_6])), (arr_14 [i_0] [i_2] [i_6])))));
                        var_25 = ((/* implicit */unsigned long long int) max((max((max((arr_25 [i_0] [(_Bool)1] [i_0] [(unsigned short)12] [i_0] [(unsigned short)12]), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) arr_23 [13LL] [i_2] [i_1] [i_0])))), (((/* implicit */long long int) ((signed char) ((var_3) > (((/* implicit */int) (unsigned char)129))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_26 -= ((/* implicit */short) max((arr_18 [i_2 + 1] [i_2] [i_0] [i_0]), (((unsigned long long int) arr_28 [i_0] [i_0] [i_2 + 1] [i_6] [i_2]))));
                            var_27 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 + 2] [i_2 + 2] [i_6]))))) > (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)190)), ((unsigned short)43842)))));
                            var_28 -= ((int) (signed char)-21);
                            var_29 -= ((/* implicit */long long int) max((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_28 [i_2 + 1] [i_7] [i_7] [i_7] [i_7]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            var_30 += ((/* implicit */long long int) arr_26 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_8 + 2]);
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_2 + 2] [i_1] [i_2] [i_6])))))));
                            var_32 = ((/* implicit */short) (unsigned short)65513);
                        }
                    }
                    var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(698395021U)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned short)21693)) : (((/* implicit */int) arr_2 [(signed char)0])))) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2] [i_0])), (arr_25 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 2; i_9 < 14; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 7979973588246917722ULL));
                            arr_38 [i_0] [i_1] [i_1] [i_10] [i_10] [i_0] = ((/* implicit */short) (_Bool)1);
                            arr_39 [i_0] [i_0] [(short)1] [i_0] [2U] [i_0] [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2] [i_2 + 2])) ? (arr_24 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 + 2] [i_2] [i_2 - 1] [i_2] [(signed char)11])))))) ? (arr_24 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
                        }
                        arr_40 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_10 [i_1] [i_9]);
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) 10466770485462633914ULL);
    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) var_15))));
}
