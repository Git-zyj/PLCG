/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79426
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
    var_17 |= ((/* implicit */short) (-(var_16)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((int) arr_6 [i_0 + 1])) : (min((((/* implicit */int) (unsigned char)255)), (-1955834146)))));
            arr_7 [i_0] [i_1] = ((((arr_3 [i_0 + 3] [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [3LL]) - (((/* implicit */long long int) 185046762))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (arr_2 [i_0] [i_0 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [i_0 - 1] [i_2] [i_0])) - (((/* implicit */int) arr_4 [i_0] [i_2] [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 4; i_3 < 8; i_3 += 3) 
            {
                var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)125)), ((unsigned short)5184))))));
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 7027971678771293036LL))))) + (((/* implicit */int) arr_12 [i_3 - 3] [i_3 - 4] [i_3 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_3 + 2])))) : (((((/* implicit */_Bool) (-(arr_6 [8])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_3 + 3]) : (((/* implicit */long long int) var_5))))))));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2734)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_3))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) | (arr_8 [i_0 + 2] [i_0 + 3])));
                    arr_21 [(unsigned char)0] [i_0] [i_4] = ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((arr_5 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [4ULL]))))))));
                        arr_25 [i_0] [2] [i_4] [i_5 - 1] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_6]))) ? (((int) (unsigned short)62790)) : (((((/* implicit */int) (unsigned short)44502)) & (((/* implicit */int) (short)-16384))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((arr_8 [i_0 + 2] [i_5 + 1]) * (arr_8 [i_0 + 1] [i_5 - 1]))))));
                        arr_26 [i_0] [i_0] [i_0] [i_0 - 1] [(short)6] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) -2161548952898882175LL)) / (17513428635361188189ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0 + 2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0]))) : (var_15)));
                        arr_30 [i_5] [i_2] [i_0] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) : (var_15))) ^ (((/* implicit */unsigned long long int) ((66584576) << (((((/* implicit */int) arr_14 [i_7])) - (155))))))));
                        arr_31 [i_0] = ((/* implicit */unsigned int) var_1);
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((long long int) arr_19 [9ULL] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5]));
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_0 + 2] [i_0] [(unsigned short)0])) ? (((/* implicit */int) arr_18 [i_5 + 1] [i_0 + 2] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_5] [i_5 + 1] [i_0 - 1] [i_0 + 2] [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_39 [i_0] [i_0] [i_2] [i_4] [i_4] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2734))) : (((8862742164847321088LL) >> (((/* implicit */int) (unsigned char)32))))));
                        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) ((572972819417366071ULL) >> (((3387240077U) - (3387240025U))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 8; i_10 += 4) 
                    {
                        arr_43 [i_0] [i_2] [i_4] [i_0] [i_10 - 3] = ((/* implicit */unsigned short) ((long long int) arr_20 [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0] [i_0 - 1]));
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_8 [i_5 + 1] [i_2]) : (((/* implicit */unsigned long long int) 66584599))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (arr_23 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [7U] [i_4] [i_0 + 2] [i_11]))) : (((((/* implicit */_Bool) var_9)) ? (arr_23 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    arr_47 [i_0] [2ULL] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_2] [i_0 - 2] [i_4] [i_0 + 2])) ? (((/* implicit */int) ((short) 8309325184392990617ULL))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0 + 1] [5ULL] [i_2] [i_0]))));
                    var_28 = var_2;
                }
                for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_4] [i_4] [i_0])))))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) <= ((~(((/* implicit */int) arr_28 [i_0 - 1] [i_2] [i_4] [i_12] [i_12])))))))));
                    arr_50 [i_0 + 2] [i_2] [(unsigned short)8] [i_0 + 2] |= ((/* implicit */unsigned short) arr_22 [6U]);
                }
            }
        }
        for (signed char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 2; i_14 < 10; i_14 += 2) 
            {
                arr_56 [i_13] [i_13] [i_0] = ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_0] [i_14] [i_13])))) == ((~(arr_5 [5ULL])))));
                var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) 2917787265153761600ULL)) ? (((/* implicit */int) (unsigned short)55704)) : (((/* implicit */int) (_Bool)1))))));
            }
            arr_57 [i_0] [(signed char)10] |= ((/* implicit */int) var_14);
        }
        arr_58 [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) 17513428635361188189ULL))))));
        arr_59 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(arr_22 [i_0 + 1]))))));
        var_32 = ((/* implicit */unsigned long long int) var_12);
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    {
                        arr_70 [i_17] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (~(arr_60 [i_15])));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_62 [5U] [i_16] [i_18])))))));
                        var_34 = ((/* implicit */unsigned short) arr_65 [(signed char)12] [13] [i_17] [i_17]);
                        var_35 = ((/* implicit */long long int) max((var_35), (((((arr_63 [i_15]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)17077)) - (17071)))))));
                        var_36 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)96))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_19 = 2; i_19 < 15; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_20 = 1; i_20 < 15; i_20 += 1) 
            {
                var_37 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 15528956808555790013ULL)))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */int) arr_72 [(signed char)2] [i_19 + 1] [i_19 + 1])) / (-66584580))))));
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_80 [i_15] [i_19] = ((/* implicit */int) (((+(1247846602753742199LL))) >> (((((/* implicit */int) arr_78 [i_21] [i_21] [i_15] [i_15] [i_15])) - (65)))));
                    arr_81 [i_21] [i_19] [i_19] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_72 [i_19 + 2] [i_19 + 1] [i_20 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 3; i_22 < 16; i_22 += 2) 
                    {
                        var_38 |= ((/* implicit */unsigned char) arr_61 [i_19]);
                        arr_85 [i_20] [i_20] [i_19] = (!(((/* implicit */_Bool) arr_66 [i_19 + 1] [i_19 + 2] [i_19])));
                    }
                    arr_86 [i_19] [4ULL] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) arr_75 [i_15] [i_19])) ? (arr_77 [i_15] [i_19] [i_20] [i_21] [i_20] [i_20 - 1]) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_19 + 2] [i_20 + 2] [i_19] [i_20 + 2] [i_20 - 1])))));
                }
            }
            for (unsigned int i_23 = 0; i_23 < 17; i_23 += 1) 
            {
                var_39 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_77 [i_15] [i_19 + 1] [i_19] [i_23] [i_23] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [(signed char)2] [(signed char)2] [i_19] [i_23] [i_23]))) : (var_3)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        var_40 -= ((/* implicit */short) (-(((/* implicit */int) arr_90 [i_19 - 2] [i_19 - 2] [(short)15] [i_19 - 2] [i_19 - 2]))));
                        arr_95 [i_15] [i_19] [i_19] [i_15] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_91 [i_15] [i_25 + 1] [i_24] [i_23] [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)66)))))));
                        arr_96 [i_15] [i_19] [i_23] [(unsigned char)5] [i_15] [i_25] [i_25] = ((/* implicit */long long int) arr_60 [i_24]);
                    }
                    for (unsigned char i_26 = 0; i_26 < 17; i_26 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned char) arr_99 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
                        arr_100 [i_19] [i_19] [i_23] [i_24] [i_15] = ((/* implicit */short) ((((-1561930499851020819LL) + (9223372036854775807LL))) << (((17298081974565094639ULL) - (17298081974565094639ULL)))));
                    }
                    arr_101 [i_15] [i_19] [i_19] [3ULL] [i_23] [i_24] = ((/* implicit */unsigned char) (~((-(arr_92 [i_15] [5LL] [i_19 + 1] [i_23] [i_24])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 3; i_27 < 15; i_27 += 4) 
                    {
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14310154035242900962ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_93 [i_24]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_13)) ? (-66584577) : (-1777642321))))))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) % (-66584572)));
                        arr_104 [i_15] [6] [i_15] [i_15] [i_15] [i_15] |= ((/* implicit */_Bool) ((unsigned char) arr_82 [i_15] [i_15] [i_15] [i_15] [i_15]));
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_90 [i_27] [i_27] [i_27 - 1] [i_27 - 3] [i_27 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [13] [i_27] [i_27 - 2] [i_27 - 2] [i_27]))) : (405812164561395476LL)));
                        arr_105 [i_19] [i_23] [12ULL] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_102 [i_27 + 1] [i_19 + 2] [i_23])) || (((/* implicit */_Bool) (-(16609718977341052422ULL))))));
                    }
                }
            }
            for (long long int i_28 = 0; i_28 < 17; i_28 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_29 = 0; i_29 < 17; i_29 += 3) 
                {
                    var_45 = ((((/* implicit */_Bool) var_6)) ? (arr_84 [i_15] [i_19] [i_19 - 2] [i_15] [i_19 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_15] [i_19]))));
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(66584558)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_76 [i_19] [i_29] [i_28] [i_29]))))) : (arr_98 [i_19 + 2] [i_19 - 2])));
                }
                arr_112 [i_15] [i_19] [i_28] = ((/* implicit */short) 2380048497U);
            }
            arr_113 [i_19] [12ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_62 [i_19 + 1] [i_19 - 2] [i_19 + 2]))));
        }
        for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 3) 
        {
            var_47 |= ((/* implicit */long long int) 783167070);
            var_48 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)144)) ? (1421745226419858832LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_8)) : (arr_77 [i_15] [i_15] [i_15] [i_30] [i_30] [i_30]))));
        }
    }
}
