/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55550
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (unsigned short)39815);
        arr_2 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_0 + 1]) - (arr_1 [i_0 + 1] [i_0 - 1])));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 5209253199433203905LL)))) : (((/* implicit */unsigned long long int) var_3))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_2] [i_3] [(signed char)9] = ((/* implicit */unsigned long long int) (-(min((min((-9127087225147187759LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) ^ (var_3))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_6 [i_1] [i_2]), (((/* implicit */int) (unsigned char)6))))), ((-(4294967295U)))))) ? (((1326475428) & (((/* implicit */int) (unsigned short)25703)))) : (((/* implicit */int) (short)5733))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) max((arr_9 [i_3 - 2] [i_2 - 1] [i_1 - 1]), (arr_9 [i_3 - 1] [i_2 - 1] [i_1 + 1])))))))));
                            arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (min((var_0), (((/* implicit */long long int) ((arr_4 [i_1]) * (arr_4 [i_2 + 1])))))) : (((/* implicit */long long int) ((arr_11 [i_1 + 1] [(unsigned char)0] [i_1 + 1] [i_4] [i_5] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)255)))) != (((/* implicit */int) var_11))))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned short)41047))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (unsigned char)247);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        arr_25 [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_9 [i_1] [i_6] [i_1 + 1])), (arr_4 [i_1])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)29)), ((unsigned char)160)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned short)255)))))) : ((-(-4931043790607741781LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((9223372036854775802LL), (var_6)))) ? (min((((/* implicit */long long int) arr_9 [(short)2] [i_8] [i_9])), (arr_23 [i_8]))) : (((((/* implicit */_Bool) arr_23 [i_1 - 1])) ? (arr_23 [i_1 - 1]) : (((/* implicit */long long int) arr_19 [i_6]))))));
                            arr_28 [i_1 + 1] [i_9] = max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((9223372036854775802LL) / (((/* implicit */long long int) 2147352576))))) ? (522716396U) : (((/* implicit */unsigned int) (-(var_8)))))));
                            arr_29 [(unsigned short)9] [i_1] [i_6] [5LL] [i_8] [i_9] = ((/* implicit */unsigned char) (+(528648552U)));
                        }
                        arr_30 [i_1] [i_1 - 1] [i_1 - 1] [i_6] [i_1] [i_8] = ((/* implicit */int) (~(var_14)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    arr_38 [i_11] [i_11] [i_11] [i_11] [i_10] = arr_14 [i_1 - 1] [i_6] [i_10 + 1] [i_11] [i_10 - 2] [i_10 - 2] [i_10];
                    var_24 = ((/* implicit */long long int) (~(((var_11) ? (arr_21 [i_6] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65293)))))));
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_10 - 2] [i_10 - 1] [i_10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_27 [i_1] [i_10 - 1] [i_10] [i_1 - 1]) == (((/* implicit */unsigned long long int) -9223372036854775803LL))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_42 [i_12] [i_10] [(unsigned char)5] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_10] [i_10 - 2] [i_10 - 2]);
                    var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_1 + 1]))));
                    arr_43 [i_1 + 1] [i_1] [(unsigned char)11] [i_10] [i_12] = var_11;
                }
                for (int i_13 = 3; i_13 < 10; i_13 += 3) 
                {
                    arr_46 [i_1 + 1] [i_6] [i_10 + 1] [i_13 + 1] [i_13 + 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1624))))))) ? (((((/* implicit */int) (unsigned char)93)) ^ (((/* implicit */int) arr_41 [i_13] [i_10] [i_6] [i_1])))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        var_27 ^= ((/* implicit */unsigned int) (unsigned char)243);
                        var_28 += ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775803LL)))))));
                        arr_49 [i_1] [i_14] [i_1] = ((/* implicit */unsigned char) min(((unsigned short)241), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        var_29 = min((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19414))) : (2398258263U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)98))))));
                        arr_53 [i_15] [0] [0] [i_13] [0] [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)243))));
                        var_30 *= ((/* implicit */int) ((unsigned short) (_Bool)0));
                    }
                }
                for (unsigned short i_16 = 2; i_16 < 8; i_16 += 3) 
                {
                    arr_56 [i_1] [i_6] [i_10] [i_1] |= ((/* implicit */int) (!((((~(((/* implicit */int) (unsigned char)50)))) != (((/* implicit */int) ((((/* implicit */int) arr_10 [i_16] [i_10] [i_1])) == (((/* implicit */int) (short)7579)))))))));
                    arr_57 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8180)) | (((/* implicit */int) (unsigned char)220))));
                    arr_58 [i_6] [i_16] [i_6] [i_16] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 922750292)) : (var_5)))) ? (((/* implicit */int) arr_55 [i_10] [i_6] [i_6])) : (((/* implicit */int) var_11)))) & ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_34 [i_16 + 2] [i_10] [5U] [i_1]))))))));
                }
                for (unsigned char i_17 = 3; i_17 < 11; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 4) 
                    {
                        arr_66 [i_1 + 1] [(signed char)7] [i_17] = ((/* implicit */unsigned long long int) (unsigned char)11);
                        arr_67 [i_1] [i_17] [i_10] [i_17] [i_17] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)511)))))));
                        arr_68 [i_17] [i_6] [i_6] [i_17] [i_18] = ((/* implicit */signed char) var_16);
                        arr_69 [i_17] = ((/* implicit */int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)162))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)4]))) ^ (var_0))) : (((/* implicit */long long int) arr_31 [i_10 - 2] [i_17 - 3] [(unsigned char)8] [(short)3]))))));
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        arr_74 [i_1] [i_17] [i_17] [i_17 - 2] [9LL] = ((/* implicit */unsigned int) ((((arr_60 [7U] [i_1] [i_17] [i_17] [i_17]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)11)))) - (arr_47 [i_17])));
                        var_31 *= ((/* implicit */_Bool) (-((+(3612938113U)))));
                        arr_75 [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(922750292))))));
                        arr_76 [i_1 + 1] [i_6] [i_10] [i_17] [i_1 + 1] [i_19] [i_10 + 2] = ((/* implicit */signed char) (-(var_2)));
                        arr_77 [i_1] [i_1 + 1] [i_1] [i_1] [i_17] [i_1] = ((/* implicit */long long int) (~(var_14)));
                    }
                    arr_78 [i_17] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)39815)), (var_2)));
                    arr_79 [i_1] [i_17] [(short)6] [i_10] [i_1] [i_17] = ((/* implicit */short) var_10);
                }
            }
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                arr_82 [i_1] [i_1] [i_20] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)228)) ? (-922750279) : (arr_47 [i_6])))));
                arr_83 [7U] [i_1] [i_1] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 140737488322560LL)))) ? (0U) : (((/* implicit */unsigned int) arr_16 [i_1] [i_6] [2U]))));
                var_32 += ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8172))) - (arr_1 [i_1 - 1] [i_6])));
            }
            arr_84 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (540151316U) : (arr_45 [i_1 - 1] [i_1] [i_6] [i_6] [i_6])))) || (((/* implicit */_Bool) var_14)))))) ^ (((max((4U), (((/* implicit */unsigned int) -1014428499)))) + (((/* implicit */unsigned int) (+(arr_15 [i_1] [i_1] [i_6] [i_6] [i_6]))))))));
            arr_85 [i_1 + 1] = (-((+(283153316))));
        }
        arr_86 [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27424)))))), (((arr_52 [i_1] [i_1] [i_1] [i_1 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])))))))));
        arr_87 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (-922750275) : (arr_37 [i_1 + 1] [i_1])))) != ((((!(((/* implicit */_Bool) 31U)))) ? (8972014882652160ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1 + 1] [i_1])) + (((/* implicit */int) (unsigned short)28329)))))))));
        arr_88 [i_1] = ((/* implicit */short) 9223372036854775807LL);
    }
    for (long long int i_21 = 1; i_21 < 11; i_21 += 3) /* same iter space */
    {
        arr_92 [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)2)), ((unsigned short)8179)))) ^ (((/* implicit */int) (short)6998)))))));
        arr_93 [i_21] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_21 + 1] [i_21 + 1] [i_21 - 1] [i_21 - 1]))))), (max((arr_14 [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21] [i_21 + 1]), (((/* implicit */unsigned int) var_11))))));
        arr_94 [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_73 [i_21] [i_21] [i_21] [i_21])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8203))) * (arr_45 [4U] [4U] [i_21] [4U] [i_21])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775803LL)))))) : ((((-(var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)72), (((/* implicit */unsigned char) arr_41 [i_21] [i_21] [(short)7] [i_21]))))))))));
    }
    var_33 = var_8;
    var_34 = ((/* implicit */short) -922750275);
    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57357)))))) & (min((((/* implicit */unsigned long long int) 1979206490U)), (7636405061287854634ULL)))))) ? ((~(min((-6221485972691107102LL), (((/* implicit */long long int) var_11)))))) : (((((2U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((~(-6221485972691107102LL)))))));
}
