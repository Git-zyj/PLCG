/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90669
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) != ((+(var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4781)) >> (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_12)))) : (((int) var_7))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)114)) < (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 + 2] [i_1] [i_0 - 2])) < (((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned short)10])))))) == (8590762248882215830ULL)))) : (((((((/* implicit */int) (signed char)23)) ^ (((/* implicit */int) (unsigned short)60755)))) * (((/* implicit */int) ((var_7) <= (((/* implicit */int) var_4)))))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 4; i_4 < 20; i_4 += 3) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_6 [i_1] [i_3] [i_4])))) - (((/* implicit */int) arr_0 [i_3] [i_3]))));
                            var_19 = ((/* implicit */long long int) (((+(((/* implicit */int) max((arr_11 [i_1] [i_1] [i_0] [i_1]), (((/* implicit */short) var_2))))))) == (((/* implicit */int) arr_10 [i_0]))));
                        }
                        /* vectorizable */
                        for (short i_5 = 4; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (647798112U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))));
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) (short)-4443)) ? (((/* implicit */int) (short)15499)) : (((/* implicit */int) (signed char)21)))) - (15478)))));
                        }
                        for (short i_6 = 4; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) arr_2 [i_0] [i_1] [i_0]);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 - 1])) < ((+(((/* implicit */int) (unsigned char)63))))))) >> (((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (var_7)))) & (((763651891U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) -2393150387278186000LL);
                            arr_26 [i_2] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1] [i_7])) : (((/* implicit */int) var_2))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (arr_6 [(signed char)13] [(short)11] [i_2])));
                            arr_27 [(unsigned char)11] [i_7] [i_2] [i_1] [i_7] [i_0 - 1] [i_1] = ((/* implicit */int) (-(8418031686193000745LL)));
                            arr_28 [i_0 - 2] [i_1] [i_1] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */int) ((-1LL) + (((/* implicit */long long int) 483349412))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-28))));
                            arr_32 [i_0] [i_1] [i_1] [3] [i_1] = ((/* implicit */signed char) ((var_14) >= (((/* implicit */int) var_16))));
                            arr_33 [i_8] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) 4503324749463552ULL));
                            var_26 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        arr_36 [i_1] [i_1] = ((/* implicit */_Bool) -3880302263247328860LL);
                        var_27 = ((/* implicit */signed char) var_3);
                        /* LoopSeq 1 */
                        for (signed char i_10 = 2; i_10 < 20; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) (+(962938688)));
                            arr_39 [i_0 + 2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [(unsigned short)5] [i_2 + 1] [i_1] [i_0 - 1]);
                        }
                        arr_40 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) var_5));
                        arr_41 [i_1] = ((/* implicit */signed char) max((max(((unsigned char)208), (((/* implicit */unsigned char) (_Bool)0)))), (arr_38 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2])));
                    }
                    for (unsigned char i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        var_29 |= ((/* implicit */short) 13636288507969437681ULL);
                        var_30 = ((/* implicit */int) max((arr_31 [i_0] [i_2] [i_2]), (max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (short)4095)) > (arr_35 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
                        {
                            arr_46 [i_0 + 1] [i_1] [i_1] [(unsigned short)3] = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_14) - (((/* implicit */int) (unsigned char)0))))) ? ((+(arr_4 [i_1]))) : (3280963688364287949LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)56)) > (((/* implicit */int) (unsigned char)97)))))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(arr_15 [i_0] [i_0] [i_12 + 1] [i_0] [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [i_0 - 1] [i_1] [1U] [i_2] [i_2] [i_11 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)158)))))))))));
                        }
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) 224LL))));
                        var_33 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (unsigned short)19069)) ? (1049319414U) : (((/* implicit */unsigned int) -2147483638)))), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)119))))))), (((/* implicit */unsigned int) var_4))));
                        arr_49 [i_0 + 1] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_0 [i_0] [i_0]);
                    }
                    arr_50 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_17 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_2 - 1]));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */short) var_17);
}
