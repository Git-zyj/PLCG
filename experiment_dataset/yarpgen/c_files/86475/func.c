/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86475
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
    var_12 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_1)), (((((((/* implicit */_Bool) (unsigned char)123)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))))) - (((/* implicit */unsigned long long int) 4294967295U))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_1))))) | (((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_1 [i_0]))))), (max((var_4), (var_3))))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_9))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        var_14 *= ((/* implicit */_Bool) (-((-(11101975198655670410ULL)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    {
                        arr_15 [i_2] [i_4] [i_4 + 1] [i_3] [i_2 + 1] [i_2] = var_0;
                        arr_16 [i_1] [(short)16] [i_3 - 1] [(short)16] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((10070191816204310216ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (var_0) : (((/* implicit */int) (unsigned char)132))));
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)138)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
                arr_20 [i_1] [i_2] [(unsigned short)18] [(unsigned short)7] = ((/* implicit */int) var_6);
            }
            arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_11)))))));
        }
        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
        {
            var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_6 + 1])) : (((/* implicit */int) var_1))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) (unsigned char)138)) == (((/* implicit */int) (short)-31124))))));
            arr_24 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)117);
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 15; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((((/* implicit */int) (unsigned short)49933)) / ((-2147483647 - 1))))));
                        arr_30 [i_8] [i_7] [i_6] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                {
                    arr_37 [(unsigned char)9] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))) >= (var_2)))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) != (((/* implicit */int) arr_23 [i_1] [i_1] [i_1])))))));
                    var_20 = ((/* implicit */long long int) ((unsigned short) var_11));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_1] [(unsigned char)0] [i_1] [i_11]))))) | (var_9)));
                        arr_41 [i_1] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [i_1] [i_9] [i_10] [i_11]))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_1))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (3652737987U)));
                        var_24 = ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))) && ((!(((/* implicit */_Bool) (unsigned char)96)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_42 [i_1 - 2] [i_1 - 3] [i_1 + 2]))));
                    }
                    arr_44 [i_1] [i_9] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_9] [i_9]))));
                }
            } 
        } 
        var_26 = (!(((/* implicit */_Bool) (unsigned char)245)));
    }
    var_27 *= ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), (var_3)))))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) & ((~(((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        var_28 = ((/* implicit */unsigned char) arr_11 [i_13] [i_13]);
        arr_49 [i_13] = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_13] [i_13]))))) & (max((642229303U), (((/* implicit */unsigned int) arr_42 [i_13] [i_13] [i_13])))))));
    }
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        var_29 = ((/* implicit */short) (+(((unsigned int) (short)16))));
        /* LoopSeq 2 */
        for (long long int i_15 = 1; i_15 < 14; i_15 += 1) 
        {
            var_30 |= ((/* implicit */unsigned long long int) var_3);
            var_31 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) (unsigned char)123))) ? (min((var_0), (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_45 [i_15 + 1])))), (((/* implicit */int) arr_53 [i_14] [i_14]))));
        }
        for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            arr_58 [i_16] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (max((((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_7))))), (1593337236)))));
            /* LoopNest 3 */
            for (long long int i_17 = 3; i_17 < 14; i_17 += 3) 
            {
                for (short i_18 = 2; i_18 < 13; i_18 += 3) 
                {
                    for (signed char i_19 = 3; i_19 < 15; i_19 += 3) 
                    {
                        {
                            arr_67 [i_19] [i_18] [i_18] [i_18] [i_18] [i_16] [i_14] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_14] [i_14] [i_17] [i_18 + 3] [i_17])) : (2147483632))), ((-(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) var_1))))));
                            arr_68 [i_18] [(signed char)4] [i_18] [i_18] [1] = ((/* implicit */int) ((signed char) max((((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_1))))), (var_9))));
                            var_32 = arr_66 [i_14] [i_16] [i_16] [i_18 - 1] [i_19 - 2];
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (-((-(((/* implicit */int) (unsigned char)0)))))))));
                            arr_78 [i_14] [i_22] [i_20] [i_21] [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-5967)))))));
                            var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-126)) && ((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-99))) || (((/* implicit */_Bool) var_5)))))));
                            var_35 &= ((/* implicit */short) 579916182U);
                            var_36 = ((/* implicit */unsigned char) (signed char)-92);
                        }
                    } 
                } 
                arr_79 [i_20] [i_14] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_60 [i_14]))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 16; i_23 += 2) 
            {
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_4))));
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
                {
                    for (unsigned short i_25 = 3; i_25 < 14; i_25 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(arr_7 [i_14] [i_14]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (arr_40 [(short)8] [i_16] [(short)8] [i_23] [i_25] [i_25]))))))) ? ((~(((/* implicit */int) (!(var_7)))))) : ((~(((/* implicit */int) arr_83 [7] [i_16] [i_23] [i_24] [i_25] [i_25]))))));
                            var_39 = ((/* implicit */unsigned int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) arr_22 [i_14])) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) var_11)))))) >= (((/* implicit */int) var_4))));
                            arr_86 [i_14] [i_16] [i_23] [i_24] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_76 [(unsigned short)4] [i_16] [(signed char)4] [i_24] [i_16]))))), (min((min((arr_46 [i_16]), (((/* implicit */unsigned int) (unsigned char)123)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_14] [i_14])) ? (((/* implicit */int) (short)-21301)) : (arr_9 [i_16] [i_23] [i_25 - 3]))))))));
                        }
                    } 
                } 
                arr_87 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) == (576460752303423487LL)))) != (((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) var_0)))))))) - (max((arr_70 [i_23] [i_14] [i_16] [i_14]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_9))))))));
                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_6))));
                /* LoopNest 2 */
                for (unsigned int i_26 = 1; i_26 < 13; i_26 += 2) 
                {
                    for (signed char i_27 = 0; i_27 < 16; i_27 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */int) (short)18771)) >= (((/* implicit */int) arr_84 [i_14] [i_14] [i_14] [i_14] [i_14]))))))) * ((+(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_7)))))))));
                            arr_93 [i_27] [i_26] [i_23] [i_26] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned long long int) min((var_2), (((/* implicit */unsigned long long int) var_5))))))));
                        }
                    } 
                } 
            }
        }
        var_42 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_34 [i_14] [i_14] [i_14]), (((/* implicit */long long int) var_0))))) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))))) && (((/* implicit */_Bool) var_1))));
    }
}
