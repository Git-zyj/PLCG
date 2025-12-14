/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6714
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)4))))));
                    arr_10 [i_0] [i_2] [(unsigned short)8] = ((/* implicit */unsigned int) arr_8 [i_0] [14U] [i_2] [14U]);
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-13331)) % (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0]))))) ? (((12365178016130994804ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)13331)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) << (((((((/* implicit */int) (short)-13332)) + (13339))) - (7)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_24 [i_0] [(unsigned char)8] [i_4] [i_4] [i_0] [i_0] &= ((/* implicit */short) ((signed char) ((int) arr_3 [i_0] [i_0] [i_0])));
                            var_19 = ((/* implicit */unsigned int) (short)-13318);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) arr_22 [i_0] [9U] [i_3] [i_3] [(_Bool)1] [(_Bool)1]);
            }
            arr_25 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13331)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3674))) : (arr_19 [i_0] [(unsigned char)2] [i_3] [i_3] [i_3] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139))))) : (((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0])) ^ (((/* implicit */int) (unsigned short)0))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [11]))));
            arr_26 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) << (((((/* implicit */int) arr_21 [i_0] [i_8])) - (206)))));
                    arr_33 [i_8] [i_7] [i_8] [(short)5] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)-13339))) ? (((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */unsigned int) arr_28 [5U] [5U] [i_8])) : (arr_13 [i_0] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_7] [i_0] [i_0])) < (((/* implicit */int) arr_8 [8] [8] [i_8] [12]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (short)32758))));
                        var_24 = ((/* implicit */signed char) ((unsigned int) arr_1 [i_9] [13]));
                    }
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_25 = arr_2 [i_8];
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) 
                        {
                            arr_42 [i_11] [i_0] [5] [i_0] [i_7] [i_0] |= ((/* implicit */unsigned char) ((((_Bool) arr_30 [(_Bool)1] [i_11] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (arr_17 [i_8] [i_7]))))) : (((6487204785429500361LL) + (((/* implicit */long long int) 2806181429U))))));
                            var_26 |= ((/* implicit */unsigned int) arr_0 [i_10] [i_0]);
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */int) min((var_27), (arr_22 [i_7] [i_10] [i_8] [i_7] [i_7] [i_0])));
                            arr_46 [i_12] [2] = ((/* implicit */int) ((unsigned int) (unsigned char)138));
                            arr_47 [(short)4] [i_7] [i_8] [i_8] [i_10] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-19494)) ? (8388544U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13318)))));
                            var_28 = ((/* implicit */unsigned long long int) arr_40 [i_0]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_50 [i_8] [i_8] [i_8] [i_8] [i_7] [i_0] = ((/* implicit */unsigned int) (unsigned char)107);
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (arr_19 [i_8] [i_8] [(signed char)13] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) -16))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_10]))) & (arr_13 [i_13] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198)))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (+(arr_22 [i_10] [i_7] [i_8] [i_8] [i_0] [i_7])))) < (arr_19 [(unsigned short)11] [i_7] [(unsigned short)11] [i_8] [(unsigned short)11] [(unsigned char)2])));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_55 [i_14] [i_14] [i_8] [i_14] [i_7] = ((/* implicit */unsigned short) arr_53 [11LL] [i_14] [i_10]);
                            var_30 = ((/* implicit */unsigned short) 70288175591791179LL);
                            var_31 = ((/* implicit */unsigned char) arr_3 [i_7] [(unsigned short)14] [(unsigned short)14]);
                            arr_56 [i_0] [i_0] [10ULL] [(signed char)2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0]))) : (arr_34 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_0] [i_0] [i_0] [i_0] [i_10] [i_14]) <= (((/* implicit */int) (unsigned short)54884)))))) : (arr_16 [i_0] [i_7] [i_0] [4U])));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_3 [(signed char)1] [(signed char)1] [i_8]))));
                            arr_59 [i_0] [i_8] [i_8] [i_7] [i_15] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        }
                        for (short i_16 = 3; i_16 < 12; i_16 += 3) 
                        {
                            arr_63 [i_0] [i_7] [(_Bool)1] = ((/* implicit */short) arr_40 [i_0]);
                            arr_64 [i_7] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_37 [i_0] [i_0] [13] [i_0]))));
                            arr_65 [i_10] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-25)) * (((/* implicit */int) (short)-13323))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            arr_68 [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-13323)))))) & (arr_22 [(unsigned char)7] [0ULL] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7])));
                            var_33 = arr_28 [i_0] [(unsigned char)6] [i_8];
                        }
                        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            arr_73 [5U] [5U] [i_8] [i_10] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */int) (unsigned short)63553)) : (((/* implicit */int) (_Bool)0))));
                            var_34 = ((/* implicit */signed char) arr_4 [i_0]);
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13368)) && (((/* implicit */_Bool) 1436793345620698792ULL)))))));
                        }
                        arr_74 [i_8] [i_7] = (~((-2147483647 - 1)));
                        arr_75 [i_0] [i_7] [i_8] [i_0] [i_8] [(signed char)8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((3377699720527872LL) == (((/* implicit */long long int) 1940661815U))))) > (2147483647)));
                    }
                }
            } 
        } 
    }
    var_36 *= ((((/* implicit */int) var_7)) < (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_17)))) << ((((~(((/* implicit */int) var_10)))) + (4630))))));
}
