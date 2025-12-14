/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9252
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
    var_17 = ((/* implicit */unsigned char) (((~((+(var_8))))) < (var_8)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0 - 1]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 274877906943ULL)) ? ((-(((/* implicit */int) (short)10876)))) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))))) : ((~(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (short)14921))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_6 [i_1]))))) >> (((((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (arr_5 [(short)8] [i_1])))) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))))) - (511919284486640047ULL)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) 5533359067010251557ULL);
            var_20 |= ((/* implicit */long long int) ((int) arr_6 [i_1]));
            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1] [i_1]))));
        }
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
            arr_12 [i_3 - 1] [i_1] = ((/* implicit */_Bool) (-(arr_6 [i_1])));
            arr_13 [i_1] [i_3] = 3725982208U;
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1))))) || (((/* implicit */_Bool) (+(((arr_11 [i_1]) / (((/* implicit */int) var_1)))))))));
            var_24 = ((/* implicit */unsigned char) var_0);
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22404))) : (((((/* implicit */unsigned long long int) var_13)) + (9795720562366374148ULL))))))));
            var_26 = (!(((((/* implicit */_Bool) (short)-22404)) && (((/* implicit */_Bool) -9223372036854775799LL)))));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            arr_18 [i_1] = max((((/* implicit */unsigned short) (short)-22397)), ((unsigned short)12));
            arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) || (((/* implicit */_Bool) (-(((var_14) * (arr_16 [i_5]))))))));
            var_27 = ((/* implicit */long long int) max(((((+(((/* implicit */int) (unsigned short)0)))) >> (((((((/* implicit */_Bool) 16777215)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_5]))))) - (1744306454U))))), (((/* implicit */int) (((~(arr_7 [i_1]))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22404))))))))));
            var_28 = ((/* implicit */unsigned short) 9223372036854775807LL);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_29 = arr_5 [i_1] [i_1];
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                var_30 = (-((~(((/* implicit */int) (short)-22404)))));
                arr_26 [(_Bool)1] [i_6] [i_7] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) var_10))));
                var_31 = ((/* implicit */long long int) arr_5 [i_1] [i_6]);
            }
            for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    var_32 = ((/* implicit */short) arr_24 [i_1] [i_6] [i_8]);
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_9 + 2] [i_1] [i_1])) % (((/* implicit */int) arr_23 [i_9 - 1] [i_6] [i_8]))));
                    var_34 |= ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : ((-9223372036854775807LL - 1LL)));
                    var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_6] [i_9 + 1]))));
                    var_36 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_1] [i_8] [i_9]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */long long int) 133303640)) : (var_13)))) : (arr_16 [i_8]));
                }
                var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_8]))));
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_21 [i_1]))));
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    var_39 += ((/* implicit */short) ((unsigned char) arr_16 [i_10]));
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(short)1] [i_8] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_30 [i_6] [i_6] [12ULL] [i_10])) : (((/* implicit */int) arr_33 [i_10] [(unsigned short)14] [i_6] [i_6] [i_1]))))) : (((((/* implicit */unsigned int) 16777215)) / (arr_10 [i_8])))));
                }
                for (int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_41 = ((/* implicit */short) (~((((_Bool)1) ? (9795720562366374148ULL) : (((/* implicit */unsigned long long int) 0U))))));
                        var_42 = ((/* implicit */int) (~(var_14)));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (short)22407)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22403))) : (8651023511343177489ULL)));
                        var_44 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 16777197)) || (((/* implicit */_Bool) arr_15 [i_1] [i_6] [i_8])))))));
                    }
                    for (long long int i_13 = 3; i_13 < 19; i_13 += 4) 
                    {
                        var_45 = ((/* implicit */short) arr_5 [i_1] [i_1]);
                        var_46 = ((/* implicit */unsigned short) ((arr_27 [i_13] [i_11] [i_1]) >> (((/* implicit */int) ((((/* implicit */long long int) arr_27 [i_11] [i_8] [i_6])) < (-9223372036854775800LL))))));
                        var_47 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_33 [i_13 - 3] [i_11] [i_8] [i_6] [(short)2]))));
                        var_48 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) 16777227))) << (((-185330214441140492LL) + (185330214441140512LL)))));
                    }
                    for (short i_14 = 4; i_14 < 19; i_14 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-22399)) || ((_Bool)1)));
                        var_50 = ((/* implicit */unsigned short) var_5);
                        var_51 = ((/* implicit */unsigned int) arr_44 [i_1] [i_14 - 2] [i_8] [i_11] [i_14 + 2]);
                    }
                    for (short i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        var_52 = ((/* implicit */_Bool) arr_16 [i_11]);
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((9795720562366374150ULL) / (10081248546203272872ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1])))));
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_8] [i_11] [i_15])) && (((/* implicit */_Bool) arr_33 [i_1] [i_1] [4] [i_1] [i_1]))));
                        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((((/* implicit */_Bool) arr_37 [i_1] [i_6] [i_8] [i_8] [i_11] [i_15])) ? (arr_48 [i_15] [i_11]) : (((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_8] [i_11])))) : (((/* implicit */unsigned long long int) 1254237215U))));
                    }
                    var_56 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) arr_41 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 2) 
                    {
                        var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) (~(((/* implicit */int) (short)-8666)))))));
                        var_58 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_1] [i_6] [i_6] [i_11] [i_16 + 1])) ? (arr_34 [i_1] [i_6] [i_11] [i_11] [i_16 - 1]) : (568985087U)));
                        arr_52 [i_16 + 1] [i_11] [i_8] [i_6] [i_6] [i_1] = (-(1991085220));
                        var_59 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)58691))));
                    }
                    var_60 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_8] [i_1] [(signed char)5] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_1] [i_6] [i_6] [i_8] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8675))) : (arr_32 [i_1] [i_8] [i_8] [i_11])))) : (((((/* implicit */_Bool) arr_43 [i_1] [13LL] [11LL] [i_1] [i_1] [(signed char)19] [i_1])) ? (arr_47 [i_1] [i_1] [4LL] [i_8] [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
                var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((unsigned short) (-(arr_38 [i_1] [i_6] [i_1])))))));
            }
        }
        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            arr_55 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 4) 
            {
                var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_18 + 2] [i_17])) ? (((/* implicit */int) arr_14 [i_1])) : (((((/* implicit */int) arr_22 [i_1])) << (((((/* implicit */int) var_1)) + (29532)))))));
                arr_58 [i_18 + 2] [i_17] [i_17] [i_1] = ((/* implicit */long long int) ((unsigned char) arr_50 [i_18 - 1] [i_1] [i_18 - 1] [(unsigned char)0] [i_18] [i_17]));
                var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_1] [i_17] [i_18 + 1] [i_1] [i_17])) ? (((7248148189559388218LL) / (((/* implicit */long long int) 568985102U)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30570))) / (arr_29 [i_1] [i_17] [i_18] [i_1]))))));
            }
            for (int i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
            {
                arr_61 [i_19] [i_17] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(9223372036854775795LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_17] [i_19])))));
                arr_62 [i_19] [i_19] [i_19] = max((((((/* implicit */_Bool) (unsigned short)65515)) ? (((((/* implicit */_Bool) arr_53 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) -1991085220)) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6845)))))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_51 [(short)17] [i_1] [(short)17] [i_19])))) && (((/* implicit */_Bool) arr_44 [i_1] [i_17] [i_19] [i_19] [i_19]))))));
                var_64 = ((/* implicit */int) ((unsigned long long int) (unsigned short)7));
            }
            for (int i_20 = 0; i_20 < 21; i_20 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_65 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_22 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (arr_51 [i_1] [i_1] [i_1] [i_1])))) : ((~(((/* implicit */int) (unsigned short)11)))))), (((((/* implicit */_Bool) arr_63 [i_17] [0LL] [i_20])) ? (((((/* implicit */_Bool) var_0)) ? (arr_60 [i_1] [i_1] [i_1]) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_5 [i_20] [i_21]), ((unsigned short)65515))))))));
                    arr_69 [i_1] [i_17] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_1])))) : ((+(((arr_44 [i_21] [i_20] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_21])))))))));
                }
                var_66 = arr_17 [i_1];
            }
            var_67 = ((/* implicit */unsigned short) max((arr_48 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_60 [i_1] [i_1] [i_1]))));
        }
        var_68 = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775787LL)) || (((/* implicit */_Bool) (signed char)-1))));
    }
    var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2083801417)) ? (((/* implicit */int) (short)4347)) : (1991085219)));
}
