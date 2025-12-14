/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56891
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
    var_14 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (+(0ULL)));
        var_16 = ((/* implicit */long long int) (+(1113937213U)));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) (unsigned char)158)), ((short)-1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-15920))) | (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                arr_8 [(short)3] [19] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 1] [16LL])), (453846971)))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-5))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_0 - 1] [11ULL] [i_3]);
                var_18 = ((/* implicit */unsigned long long int) ((long long int) (short)-1));
                arr_14 [i_0] [1LL] [(unsigned char)13] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)56))));
            }
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    arr_19 [i_0] [i_0] [4U] [i_0] = ((/* implicit */unsigned int) ((long long int) (short)-1));
                    var_19 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_4] [i_4])))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_1]))) : (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                }
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) min((((unsigned long long int) (unsigned short)19932)), (((/* implicit */unsigned long long int) -453846972))));
                    /* LoopSeq 2 */
                    for (short i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-4979040485403708344LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)5297)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) : (min((((/* implicit */unsigned long long int) var_4)), (11859313986320860344ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) (short)3449)), (arr_22 [i_0] [i_1] [i_1] [(unsigned short)13] [i_6 + 2] [i_7 - 1]))))))));
                        var_23 = ((/* implicit */unsigned long long int) (short)-32724);
                    }
                    for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        arr_28 [1ULL] [(_Bool)1] [i_8] [(signed char)9] [(signed char)9] = ((/* implicit */signed char) ((unsigned long long int) ((long long int) max((2632250084U), (((/* implicit */unsigned int) var_7))))));
                        arr_29 [i_0] [10LL] [i_4] [i_8] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [0ULL] [i_0] [i_1] [i_4]);
                        var_24 = ((/* implicit */unsigned short) var_2);
                    }
                }
                arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) ((signed char) -8330063258274840199LL))) : ((~(((/* implicit */int) var_13)))))));
            }
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-83)))))));
            var_26 = ((/* implicit */unsigned char) arr_22 [14ULL] [i_0 - 1] [i_0 - 1] [(signed char)13] [i_1] [i_1]);
            arr_31 [21ULL] = ((/* implicit */unsigned int) arr_9 [(unsigned char)9] [i_1] [i_0 - 1] [i_0]);
        }
        for (signed char i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            var_27 = (!(((((/* implicit */int) (short)-11578)) > (((/* implicit */int) (signed char)119)))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (unsigned short i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (unsigned short)4116)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned char) arr_20 [i_10] [17ULL]))))) : (((unsigned long long int) ((unsigned short) (signed char)-16)))));
                        var_29 = ((/* implicit */unsigned int) arr_15 [i_11] [i_9] [9U]);
                        arr_40 [(signed char)21] [14] [i_9] [i_10] [(short)20] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -1))) || (((/* implicit */_Bool) var_4))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [(signed char)8])) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) arr_1 [i_10]))));
                        var_31 = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
        }
        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((_Bool) max((arr_35 [i_0] [i_0 - 1] [i_12 - 2]), (((/* implicit */unsigned short) (signed char)118)))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (long long int i_14 = 3; i_14 < 21; i_14 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
                        {
                            var_33 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)0)))))) | (((unsigned long long int) (signed char)56)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-109)) | (((/* implicit */int) ((signed char) 4294967295U))))))));
                            arr_54 [(unsigned short)19] [i_12] [i_13] [(unsigned short)4] [3ULL] = ((/* implicit */int) (unsigned short)26540);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 4; i_16 < 20; i_16 += 2) 
                        {
                            arr_57 [i_0] [i_12 - 1] [i_13] [i_14 - 3] [i_13] = ((/* implicit */unsigned short) min((max((((2052556944U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)480))))), (((/* implicit */unsigned int) (signed char)-30)))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (unsigned char)0))))))));
                            var_34 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)5717));
                        }
                        arr_58 [i_0 - 1] [i_0 - 1] [i_0] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) var_3))), (var_7)))) == (((/* implicit */int) ((((/* implicit */int) (signed char)-56)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115))))))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) (!((_Bool)1)));
        }
        for (unsigned int i_17 = 2; i_17 < 21; i_17 += 2) /* same iter space */
        {
            arr_62 [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_0 - 1])))))));
            var_36 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (unsigned short)38995)));
            var_37 = (signed char)108;
            var_38 = ((/* implicit */signed char) var_2);
            arr_63 [i_17 - 2] = ((/* implicit */unsigned long long int) min((((unsigned char) ((((/* implicit */_Bool) arr_51 [(unsigned char)4] [(unsigned char)4] [7LL] [i_17 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)300))) : (6492037006550782748ULL)))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) (_Bool)0)))))));
        }
    }
}
