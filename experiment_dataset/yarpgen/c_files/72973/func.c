/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72973
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
    var_12 = (!(((/* implicit */_Bool) var_2)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                    var_13 *= ((/* implicit */short) max((min((1571366695U), (((/* implicit */unsigned int) (signed char)(-127 - 1))))), (var_8)));
                    var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_1] [i_1 - 2] [i_2]))) ? (var_7) : (((unsigned int) var_0))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) << (((6946128468360413275ULL) - (6946128468360413264ULL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) arr_2 [i_5] [i_4 - 3]);
                                var_17 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) arr_21 [i_7] [i_6] [(unsigned char)2] [i_5] [i_4 - 3] [i_4 - 3] [(_Bool)1])), (arr_7 [i_4] [i_5] [i_4]))))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_18 [i_3] [i_3] [i_6] [i_7])) : (arr_3 [i_4]))), (arr_3 [i_3])))));
                                arr_24 [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)182))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_16 [i_4 + 2] [12U] [12U]))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) var_3);
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))))), (((unsigned long long int) var_7))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (arr_11 [i_4 - 3])))) + (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_27 [i_10] [i_5] [i_4 - 3] [i_3]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))));
                            arr_35 [i_5] [i_5] = ((/* implicit */_Bool) arr_10 [(signed char)4] [i_3]);
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */int) (signed char)-72)), ((+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (-806686211))))))))));
                            arr_36 [i_3] [i_5] [i_5] [i_8] [i_10] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_8)))), ((+(var_11)))));
                        }
                        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) max((var_3), (var_0)))))));
                            arr_41 [i_5] = ((/* implicit */int) arr_13 [i_3] [i_8]);
                        }
                        for (signed char i_12 = 2; i_12 < 13; i_12 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3LL)), (7670231859000858797ULL)))) ? (((/* implicit */unsigned long long int) ((arr_32 [i_5] [i_8] [i_5] [i_5] [i_3] [i_3]) ? (((/* implicit */long long int) 0U)) : (-144115188075855872LL)))) : (((unsigned long long int) max((arr_29 [i_5] [i_8] [i_4 + 1] [i_5] [i_4 + 1] [i_4 + 1] [i_3]), (((/* implicit */unsigned char) var_3)))))));
                            var_25 = ((/* implicit */signed char) ((unsigned int) arr_44 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] [i_12]));
                        }
                    }
                    for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        arr_48 [(unsigned char)15] [i_3] [9LL] [(unsigned char)15] [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_5 [i_3] [i_3] [i_5] [i_3])))), (((/* implicit */int) var_5))));
                        arr_49 [i_5] [6LL] [6LL] [i_5] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_45 [i_3] [i_3] [i_5] [i_13]))))))), (((((/* implicit */_Bool) ((-1211894990) + (((/* implicit */int) (signed char)-68))))) ? (((((/* implicit */_Bool) (short)-23368)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (signed char)99)))) : (((/* implicit */int) arr_4 [i_5] [0] [0]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) -6437399163318435823LL))));
                            arr_53 [i_14] [i_5] [i_3] [(_Bool)1] [i_5] [i_3] = ((/* implicit */short) var_6);
                            arr_54 [i_14] [i_13] [i_5] [i_4] [i_3] = ((/* implicit */long long int) (!(var_4)));
                            arr_55 [i_5] [i_14] [i_5] [i_5] [i_5] [i_4] [i_3] = var_5;
                        }
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                        {
                            arr_59 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) / (((13469136144413573137ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_5))) - (((/* implicit */int) arr_10 [(signed char)11] [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_15] [i_5] [1U] [i_5] [1U] [i_5] [i_3])) ? (((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_3] [i_3] [i_5] [i_3])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) arr_30 [i_3] [i_4 - 2] [i_5] [i_13] [i_13] [i_15] [i_13])))))) : (((((((/* implicit */int) arr_33 [i_3] [i_3] [i_4 - 2] [i_5] [i_5] [i_5] [16])) & (((/* implicit */int) arr_40 [i_3] [i_3] [i_4] [i_5] [i_5] [i_13] [i_15])))) * (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_18 [i_3] [i_5] [i_5] [i_3])))))))));
                        }
                        var_28 += ((/* implicit */short) ((((arr_42 [i_3] [i_13] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3]) ? (((/* implicit */int) arr_14 [i_4 - 3])) : (((/* implicit */int) arr_14 [i_4 + 1])))) != (((/* implicit */int) min((var_0), ((!(((/* implicit */_Bool) var_2)))))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_16 = 1; i_16 < 14; i_16 += 2) 
                    {
                        arr_63 [i_16] [i_5] [i_5] [i_3] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */unsigned int) var_2);
                    }
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6282872205616761763LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (10315388321503839148ULL)));
                        var_31 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_4))))))));
                    }
                }
            } 
        } 
    } 
    var_32 += ((/* implicit */int) var_5);
}
