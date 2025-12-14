/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68576
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] [(_Bool)1] &= ((/* implicit */signed char) var_0);
                        var_12 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) max((arr_3 [i_1]), (var_9))))))), (((((/* implicit */_Bool) (signed char)29)) ? (4425099262795776421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (signed char)29))));
                            var_14 = ((/* implicit */unsigned char) (~(((((unsigned long long int) var_2)) / (((/* implicit */unsigned long long int) 1185223220))))));
                        }
                        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_15 = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)106))) ? (((/* implicit */int) (signed char)-125)) : ((-(var_7))));
                            arr_18 [i_0] [i_0] [(unsigned char)15] [i_5] [i_5] = ((/* implicit */short) min((min((((/* implicit */long long int) (unsigned short)8160)), (0LL))), (((/* implicit */long long int) var_3))));
                            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4623))) == (((((((/* implicit */_Bool) (unsigned char)251)) || (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) -6933908477446492894LL)) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))) : (((/* implicit */unsigned int) ((93771184) << (((15442648970785224337ULL) - (15442648970785224335ULL))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32764)) <= (((((/* implicit */int) (unsigned char)249)) / (((/* implicit */int) arr_20 [i_3] [i_3] [(short)0] [i_3] [i_3] [i_3]))))));
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0] [20] [i_2] [20] [i_6]))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_25 [i_3] [i_0] [i_2] [i_3] [21LL] = arr_4 [i_2] [i_2] [i_2];
                            var_19 = (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_2])));
                            var_20 = ((/* implicit */unsigned short) ((var_5) <= (var_2)));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1185223220)) ? (4425099262795776421ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_0] [i_1] [i_0])))));
                            var_22 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (var_7))))) : (arr_6 [i_0] [i_8])));
                            arr_28 [i_0] [21U] [i_2] [5LL] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_0] [i_0])) || (((/* implicit */_Bool) var_3))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_3]))));
                            var_24 = (+(arr_14 [i_0] [i_0] [i_2] [i_3] [i_9]));
                        }
                        for (long long int i_10 = 1; i_10 < 21; i_10 += 4) 
                        {
                            arr_34 [i_0] [15U] [i_1] [i_0] [i_0] [0LL] [15] = ((/* implicit */unsigned int) (unsigned short)0);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((var_3), (((/* implicit */int) ((arr_33 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]) == (arr_33 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1])))))))));
                            var_26 = ((/* implicit */int) (~(var_1)));
                            arr_35 [(signed char)13] [i_1] = ((((/* implicit */_Bool) ((var_7) / (((((var_10) + (2147483647))) << (((((/* implicit */int) var_9)) - (203)))))))) || (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)21346))))), (((((/* implicit */_Bool) 6304225097358793708LL)) ? (-1185223220) : (var_10)))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            arr_39 [i_0] [i_0] [i_2] [i_3] [i_11] [i_11] = ((/* implicit */unsigned char) var_4);
                            var_27 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> ((((+(93771184))) - (93771172)))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) arr_33 [i_0] [i_1] [i_0] [i_0] [i_0] [(unsigned char)8]);
                        /* LoopSeq 2 */
                        for (signed char i_13 = 1; i_13 < 21; i_13 += 1) 
                        {
                            arr_44 [15] [i_0] [i_0] [i_2] [i_12] [i_0] [15] |= ((((/* implicit */int) arr_12 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13] [i_13 + 1])) / (var_3));
                            arr_45 [i_2] = ((/* implicit */unsigned int) ((short) (unsigned char)248));
                            var_29 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_22 [i_0] [3] [i_0] [i_2] [i_12] [i_12] [i_12])) | (var_7))) + (2147483647))) >> (((((int) var_8)) - (1749166672)))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_30 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) / (93771207))) <= (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_2] [i_0] [i_14] [i_14])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_12] [(_Bool)1])) : (arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20984)) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((arr_6 [i_0] [i_1]) - (3152414248U))))))));
                            var_32 -= ((/* implicit */_Bool) -6304225097358793709LL);
                        }
                    }
                    arr_48 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 4) 
        {
            {
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((min((arr_30 [i_15]), (((/* implicit */int) arr_51 [i_15])))) <= (((/* implicit */int) arr_46 [i_16] [(_Bool)1] [i_15] [i_15] [(_Bool)1] [i_15])))) || (((/* implicit */_Bool) var_11)))))));
                arr_54 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (short)4891))) ? (min((-6304225097358793709LL), (-3283263481348890940LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_15] [(unsigned char)16] [i_15] [i_15] [i_15] [i_15] [i_15])))))));
                var_35 = ((/* implicit */unsigned short) -1112658280893195250LL);
            }
        } 
    } 
}
