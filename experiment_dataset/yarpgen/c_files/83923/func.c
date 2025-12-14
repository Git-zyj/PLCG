/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83923
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) ((((3897726381U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)15)) | (((((/* implicit */_Bool) 397240915U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)2)))))) & (var_3)));
                            var_18 = ((/* implicit */int) ((unsigned char) ((min((var_4), (((/* implicit */unsigned long long int) (_Bool)0)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65519)) && (((/* implicit */_Bool) arr_10 [i_3] [(short)11] [i_3] [i_3] [i_3])))))))));
                            var_19 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1]))) : (var_11))), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_13))))))));
                            var_20 = ((/* implicit */int) arr_0 [i_0]);
                        }
                        var_21 = ((/* implicit */_Bool) (short)-21239);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_22 += ((/* implicit */_Bool) arr_5 [i_0 - 3] [i_1 - 2]);
                        var_23 = ((/* implicit */int) ((long long int) (~(arr_12 [i_1 - 2] [i_2] [i_5]))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned short)21] [i_1] [(short)8])) / (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) arr_13 [i_0 - 3] [i_0 - 3] [(signed char)2] [i_0] [i_0 + 1] [i_1 - 2])) : (((/* implicit */int) arr_0 [i_0 - 4]))));
                        var_25 = ((/* implicit */int) var_11);
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_4 [i_0 + 1] [i_0 + 1]);
                        var_27 = ((/* implicit */unsigned short) ((unsigned int) ((arr_12 [i_0] [(unsigned char)20] [i_6]) + (((/* implicit */int) arr_4 [i_2] [i_2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_20 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6265360155610375941LL)) ? (((/* implicit */int) var_9)) : (var_13)))) || (((/* implicit */_Bool) ((unsigned char) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2])))));
                                arr_21 [i_8] [i_1] [i_2] [(unsigned short)0] [i_8] = ((/* implicit */unsigned int) arr_19 [i_8] [i_1] [i_0 - 2] [i_1] [(unsigned char)13]);
                                var_28 = ((/* implicit */unsigned long long int) (~(max((-1562191369), ((~(((/* implicit */int) (unsigned short)9547))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        var_29 |= ((/* implicit */unsigned char) arr_6 [i_2]);
                        var_30 = ((/* implicit */short) var_13);
                        var_31 = ((/* implicit */unsigned char) ((arr_18 [i_0] [(unsigned short)14] [i_0] [i_0] [(unsigned char)2] [(short)1] [i_0 - 4]) ? (((/* implicit */long long int) ((int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1))))) : (((((/* implicit */_Bool) min((397240917U), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) var_7)) ? (6265360155610375930LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_24 [i_2] [i_2] [i_2] [i_0] [i_2]))) : (((/* implicit */long long int) ((var_5) - (((/* implicit */int) arr_4 [i_9] [i_9]))))))) ^ (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_9]))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_0] [i_1 + 1] [i_1] [i_10]))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */short) (+(((var_4) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (3536304449U) : (((/* implicit */unsigned int) var_13)))))))));
                                var_35 = ((/* implicit */_Bool) 1048575LL);
                                var_36 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_15)) && (arr_18 [i_0 - 3] [i_1] [15ULL] [(_Bool)1] [15ULL] [(unsigned short)18] [(unsigned short)7]))) ? (((/* implicit */int) (short)-9950)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_9))));
                                arr_32 [i_0] [(unsigned short)21] [i_10] = ((/* implicit */unsigned short) var_14);
                                var_37 = arr_3 [i_0] [i_10];
                            }
                        } 
                    } 
                    arr_33 [(_Bool)1] [(_Bool)1] [i_0 - 1] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) ((int) arr_22 [(unsigned char)6] [i_1])))), (((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) (signed char)127)) ? (var_3) : (((/* implicit */int) (short)-21232)))) + (1258547835)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            {
                                var_38 += ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) var_4)))), (var_9)))));
                                var_39 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (short)32704))) | (-18LL))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(min((var_4), (((/* implicit */unsigned long long int) var_9))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) arr_8 [17LL] [7ULL] [i_15] [i_15]);
                        var_41 += ((/* implicit */unsigned long long int) var_14);
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) (unsigned short)16))))), (((/* implicit */int) var_6)))))));
                    }
                    for (int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        arr_44 [i_0] [i_1] [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_11 [i_0] [i_1 - 2] [i_1] [i_15] [i_17]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_15] [i_17]))))))));
                        var_43 = ((/* implicit */short) (-(max((((/* implicit */int) arr_3 [i_0] [i_0])), (max((((/* implicit */int) var_14)), (1663408243)))))));
                        var_44 = ((/* implicit */_Bool) var_3);
                    }
                    arr_45 [i_15] [5] = ((/* implicit */unsigned short) var_6);
                }
                arr_46 [(unsigned short)18] [i_0 + 2] = ((/* implicit */long long int) (short)-27709);
                arr_47 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0 - 3])) ? (arr_27 [i_0 + 2] [i_0 - 3]) : (arr_27 [i_0 - 3] [i_0 + 2])))) - (((((/* implicit */_Bool) (short)14459)) ? (1048575LL) : (((/* implicit */long long int) 0U))))));
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) min((max((((((/* implicit */int) var_9)) >> (((var_4) - (1392983732490748258ULL))))), (((/* implicit */int) var_1)))), (((/* implicit */int) var_12))));
    var_46 = ((/* implicit */unsigned short) var_7);
    var_47 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned short)44)) & (((/* implicit */int) var_15)))));
}
