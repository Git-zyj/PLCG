/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67237
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0] [i_0 - 1])), (var_7))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 3]))));
                        var_16 = (!((!(((/* implicit */_Bool) (unsigned short)11393)))));
                        var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 + 4]))));
                        arr_9 [i_3] [i_3] = ((/* implicit */signed char) var_7);
                        var_18 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)58406))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 4] [i_4 + 2] [i_4 + 2])) || ((_Bool)1)));
                        arr_12 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2639768998U)))))) + (((unsigned int) -1984428996))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((((/* implicit */_Bool) (short)-11520)) && (((/* implicit */_Bool) ((4294967295U) + (((/* implicit */unsigned int) var_3))))))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((1984428987) > (((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0 - 1] [i_0])))) && (((((/* implicit */int) var_13)) > (-1984428998))))))) : (min((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + ((-9223372036854775807LL - 1LL)))))))));
                    }
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_13 [7LL] [i_0] [i_0 - 1] [i_0 + 3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))))))));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 3; i_6 < 20; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((signed char) max((((/* implicit */signed char) (_Bool)1)), (arr_5 [i_0] [i_0 - 1] [i_0 + 2])))))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [(short)16] [i_6] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)15640)))))))));
                        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_2] [i_0]))) + (5299804694126219022LL))), (((/* implicit */long long int) arr_13 [i_6] [i_6] [i_2] [i_1] [i_0]))))) ? (((unsigned int) arr_3 [i_6])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_2] [i_6 + 2] [i_0 + 2])) ? (-1887357830696698177LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))))))))));
                        arr_18 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) 134217728U)))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_25 *= ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_8))) * (((/* implicit */int) (unsigned char)72)))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_0])))) || (var_13))))));
                        arr_22 [i_1] [(short)16] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((signed char) (unsigned short)65535)))) ? (((/* implicit */int) min((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_2])))), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [i_7]))))))) : (((((/* implicit */int) min((arr_14 [i_1] [i_1] [i_2]), (((/* implicit */unsigned short) (unsigned char)190))))) * (((/* implicit */int) var_4))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (arr_1 [i_1])))) ? (((arr_6 [i_1]) << (((((/* implicit */int) var_1)) - (73))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30))))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1887357830696698183LL)) ? (((/* implicit */long long int) -2147483638)) : (2304483262503568321LL)))) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 + 4] [i_0] [i_8]))))))) > (min((((((/* implicit */int) var_10)) * (((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */short) arr_19 [i_0 + 3] [i_1] [i_2] [i_0 + 3])), (arr_16 [8LL] [8LL] [i_0 + 1] [i_0 + 1]))))))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_8]))))))))))))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) max((((/* implicit */int) max((var_11), ((!(((/* implicit */_Bool) arr_0 [i_0]))))))), (((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))));
        arr_25 [i_0] &= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned short) ((signed char) (short)-13012))), (arr_14 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-59))))) && (((/* implicit */_Bool) var_3))));
        arr_28 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 9223372036854775794LL)) ? (((/* implicit */int) arr_8 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9])) : (((/* implicit */int) (signed char)1))))));
    }
    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 3) 
    {
        arr_31 [i_10] = ((/* implicit */short) ((((/* implicit */int) max((arr_19 [i_10 - 1] [i_10 - 1] [i_10] [i_10]), (arr_19 [i_10] [i_10 + 1] [i_10 + 1] [i_10])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50738)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_31 += ((/* implicit */short) ((((((/* implicit */int) arr_15 [(signed char)6] [i_11] [i_11] [(signed char)0])) > (((/* implicit */int) arr_27 [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16))))) : (((/* implicit */int) ((signed char) var_4)))));
            arr_35 [i_11] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) -9223372036854775795LL))));
            var_32 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)4))))));
        }
        var_33 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775804LL))))), (((unsigned long long int) arr_19 [i_10] [i_10] [i_10 + 2] [i_10 + 2]))));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_7))));
        var_35 *= ((/* implicit */unsigned int) arr_20 [i_12] [(_Bool)1]);
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((4160749577U) << (((/* implicit */int) (unsigned short)0))))))))));
        var_37 = ((/* implicit */_Bool) var_6);
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [7LL] [i_12] [i_12] [i_12])) | (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12] [(unsigned short)22]))) : (arr_39 [i_12])));
    }
    var_39 = ((/* implicit */unsigned char) max((var_9), (((((/* implicit */_Bool) 2304483262503568318LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)21))))));
    var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) - ((+(((/* implicit */int) var_1)))))))));
}
