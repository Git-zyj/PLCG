/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98295
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)0);
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) ((_Bool) var_3))) ^ (((/* implicit */int) (unsigned short)7))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) - (((((/* implicit */_Bool) max(((unsigned short)17), ((unsigned short)65518)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((int) (unsigned short)65519));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65518)) >> (((((/* implicit */int) (unsigned short)65532)) - (65516))))))));
        var_13 += ((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) != (((/* implicit */int) (unsigned char)235))));
        arr_8 [(unsigned short)12] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (signed char)111)), (arr_0 [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)17)))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        var_14 *= ((/* implicit */unsigned int) ((_Bool) ((unsigned int) min(((unsigned short)65532), (((/* implicit */unsigned short) (unsigned char)237))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            var_15 = min(((!(((/* implicit */_Bool) (unsigned short)18)))), ((!(((/* implicit */_Bool) (unsigned short)0)))));
            arr_13 [13LL] [i_3] [i_2] = ((/* implicit */unsigned int) max((((long long int) var_6)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-25))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_16 -= ((/* implicit */short) (+(((/* implicit */int) (signed char)69))));
                var_17 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_2 + 1]));
                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (signed char)6))));
                arr_17 [i_2] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((-2147483639) ^ (-2147483639))) : ((~(-927740162)))));
            }
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            arr_20 [i_5] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) var_1)) << (((arr_19 [i_5] [i_2]) - (4460445083663413823ULL))))), ((~(-2142191930))))) / ((~(((/* implicit */int) max((var_5), (var_5))))))));
            arr_21 [i_2] [i_5] = ((/* implicit */int) var_4);
            var_19 += ((/* implicit */long long int) (((~(((/* implicit */int) arr_11 [i_2 + 4])))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)17)) > (((/* implicit */int) (unsigned char)19)))))));
            var_20 += ((((((/* implicit */int) (signed char)4)) ^ (((/* implicit */int) (signed char)0)))) * ((~(((/* implicit */int) (signed char)0)))));
        }
        arr_22 [16U] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)31)), (-1064549398)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
        var_21 = ((/* implicit */unsigned int) var_1);
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
    {
        for (unsigned char i_7 = 1; i_7 < 7; i_7 += 2) 
        {
            {
                var_22 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)36495)));
                var_23 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (signed char)-41)) : ((~(((/* implicit */int) arr_11 [i_6 + 1]))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_28 [i_7]) : (arr_28 [i_6])));
                    arr_31 [i_6] = ((/* implicit */unsigned long long int) ((arr_16 [i_6 - 1] [i_7 - 1] [i_7] [i_8]) == (arr_16 [i_6] [i_7 - 1] [i_7] [(_Bool)1])));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((/* implicit */int) (short)14210)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        for (signed char i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            {
                                arr_39 [i_6] [i_7] [i_6] [i_10] = ((/* implicit */signed char) (~(var_3)));
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (signed char)-36))));
                                arr_40 [i_10] [i_10] [i_10] [i_9] [i_10] [i_10] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_0)))) < (((/* implicit */int) var_6))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((unsigned short) arr_19 [i_6] [i_7 - 1]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    arr_44 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 3)) ? (17087692512223289308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6 + 1]))))) : (((/* implicit */unsigned long long int) var_2))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        var_28 = (!(((/* implicit */_Bool) (-(((long long int) (unsigned char)16))))));
                        arr_48 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned short)65535)) - (65530)))));
                        arr_49 [i_11] [i_7] [i_11] &= ((/* implicit */unsigned char) (+(((var_11) ^ (((/* implicit */long long int) ((int) 3)))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (signed char)24))) ^ (-15)));
                        arr_50 [i_6] [i_7] [(signed char)0] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)127)))) == (arr_25 [i_6]))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 16352U)) : (3393902072924202778ULL)))))));
                    }
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 7; i_13 += 3) /* same iter space */
                {
                    arr_55 [2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_36 [i_13 - 3]);
                    var_30 -= ((/* implicit */unsigned char) arr_25 [(short)4]);
                }
                for (int i_14 = 3; i_14 < 7; i_14 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_63 [i_15] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) var_6);
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) % (max((14), (((/* implicit */int) (_Bool)1))))));
                        arr_64 [i_6] [(signed char)5] [i_14] [1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52992))) != (3393902072924202778ULL)))), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)1))))), ((unsigned char)210)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_17 = 2; i_17 < 8; i_17 += 2) /* same iter space */
                        {
                            var_32 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_34 [i_6] [i_7] [i_6] [i_7 + 3]))))))) * (((var_7) - (min((((/* implicit */unsigned int) arr_46 [i_6] [i_7] [i_14 + 1] [i_14] [i_16] [i_7])), (arr_30 [i_7] [i_7] [i_7])))))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_3))));
                            var_34 = ((/* implicit */unsigned long long int) ((signed char) var_6));
                            arr_73 [i_6] [i_6] [i_14 + 3] [i_16] [(unsigned short)9] = ((/* implicit */int) (signed char)-47);
                        }
                        for (unsigned short i_18 = 2; i_18 < 8; i_18 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (short)-15679)))))));
                            var_36 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_9)), (var_3)));
                        }
                        /* vectorizable */
                        for (unsigned short i_19 = 2; i_19 < 8; i_19 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-10))));
                            var_38 = ((/* implicit */int) min((var_38), (((130816) << (((((/* implicit */int) (signed char)-1)) + (11)))))));
                        }
                        arr_78 [1U] [i_7] [i_6] [i_16] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 503316480U)))))) - (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (9223372036854775807LL)))));
                    }
                    for (int i_20 = 4; i_20 < 7; i_20 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            arr_84 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (-(var_2)));
                            var_39 = -278460451;
                        }
                        for (signed char i_22 = 0; i_22 < 10; i_22 += 4) /* same iter space */
                        {
                            arr_87 [i_14] [i_7] [(_Bool)1] [i_20] [i_6] [i_6] = ((/* implicit */_Bool) (+(((arr_32 [i_14] [i_14] [i_14] [i_14 - 3] [i_14]) ? (arr_52 [i_7] [i_7 - 1] [i_6] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1763467404868998455LL))))))))));
                            arr_88 [i_6] [(signed char)2] [(signed char)2] [4U] [i_20] [i_20] &= ((/* implicit */signed char) (~((~(var_2)))));
                        }
                        for (signed char i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
                        {
                            arr_91 [i_6 - 1] [3] [i_14] [6U] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [8U] [i_7 + 1] [i_14 + 2] [i_6] [i_20 - 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-1))))), (min((23ULL), (((/* implicit */unsigned long long int) arr_52 [i_14 + 3] [i_14 + 2] [i_6] [2LL]))))));
                            var_40 = ((/* implicit */_Bool) (+(min((3), (1056964608)))));
                            arr_92 [i_6] [i_20] [i_6] [i_7] [5ULL] [i_6] = ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551613ULL));
                        }
                        for (unsigned int i_24 = 3; i_24 < 7; i_24 += 4) 
                        {
                            arr_95 [i_6] [(unsigned char)9] [i_6] [i_6] [i_24 - 3] [6U] [(unsigned char)9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -4531785678452986845LL)) ? (((/* implicit */long long int) ((unsigned int) 1008367445U))) : (((long long int) var_4))))));
                            var_41 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_33 [i_7] [(unsigned char)4] [i_7 - 1] [i_7]))))), ((((+(arr_51 [(_Bool)1] [i_20] [i_7]))) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned short)35503)))))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            arr_98 [2] [i_6] [i_7] [i_14] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_81 [(signed char)7] [i_7 + 1]);
                            arr_99 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (!((!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_3)))))));
                            arr_100 [i_6] [i_6 + 1] [i_6] [i_6] [(signed char)1] [i_6] [(short)7] = ((/* implicit */unsigned char) var_5);
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) arr_34 [i_6] [i_7 - 1] [i_20] [i_7 - 1]))));
                            arr_103 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) 16ULL);
                            arr_104 [i_6] [i_20] [i_6] [i_7 + 1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_37 [i_20 + 2] [i_20] [i_20] [i_20 + 3] [(signed char)0] [i_20] [i_7 + 2])) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_6)))) % ((~(((/* implicit */int) arr_34 [i_6 + 1] [i_7 + 1] [i_14 - 2] [i_20 - 3]))))));
                        }
                        var_43 ^= ((/* implicit */_Bool) (-2147483647 - 1));
                    }
                }
            }
        } 
    } 
    var_44 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_9))))) - (((/* implicit */int) var_1))));
    var_45 = ((/* implicit */_Bool) -4531785678452986838LL);
}
