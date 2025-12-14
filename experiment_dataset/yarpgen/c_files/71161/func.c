/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71161
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (signed char)-38);
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1269)))))));
                    var_21 = ((/* implicit */signed char) ((long long int) var_4));
                }
            } 
        } 
        arr_9 [(signed char)19] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (arr_3 [11LL] [8LL]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (var_7)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_23 &= ((/* implicit */signed char) ((var_2) > (((((/* implicit */int) ((unsigned char) arr_3 [6ULL] [12]))) | (((/* implicit */int) var_16))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - ((+(((/* implicit */int) arr_19 [i_4] [14LL] [(unsigned short)18]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_5))))))) : (min((((/* implicit */long long int) (signed char)38)), (8567473530205822525LL))))))));
                    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)120))));
                }
            } 
        } 
    }
    for (short i_6 = 2; i_6 < 8; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 2; i_7 < 9; i_7 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) var_2);
            var_27 = ((/* implicit */short) min(((unsigned short)43954), (((/* implicit */unsigned short) (signed char)56))));
            /* LoopSeq 1 */
            for (long long int i_8 = 3; i_8 < 9; i_8 += 2) 
            {
                arr_28 [i_8] = ((/* implicit */signed char) 8126464ULL);
                var_28 = ((/* implicit */unsigned int) max((var_28), ((-(((((/* implicit */_Bool) 8126473ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10812))) : (var_13)))))));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) - (arr_24 [i_6 - 2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_24 [i_6 - 1])) : (var_7)))));
                    arr_33 [9U] [0U] [(signed char)7] [i_8] [(signed char)9] [1LL] = ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)4] [14U] [11LL]))))))) : (((((/* implicit */int) (short)1919)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
                {
                    var_30 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_7 - 1] [i_8 - 2] [i_10 + 1])))));
                    var_31 = ((/* implicit */short) var_4);
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) var_9);
                        var_33 = ((/* implicit */int) var_0);
                        var_34 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0)))))), ((-((+(arr_16 [8U] [(signed char)15] [(short)4] [(_Bool)1])))))));
                    }
                    for (long long int i_12 = 1; i_12 < 7; i_12 += 1) 
                    {
                        arr_42 [i_8] [5U] [(unsigned short)4] [9ULL] [(short)0] [8LL] [(signed char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_14)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((var_7) + (8519185619885929070LL))))))))) : (((((((/* implicit */_Bool) arr_40 [i_8] [(signed char)6] [(unsigned short)6])) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_17)))) * (((/* implicit */int) var_14))))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(0)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_8 - 1] [i_8 + 1] [i_8 - 3])) & (((/* implicit */int) arr_26 [i_8 - 3] [i_8 - 1] [i_8 - 3]))))) : (min((((/* implicit */long long int) var_5)), (var_15)))));
                        arr_43 [6LL] [(short)6] [i_8] [(unsigned char)4] = min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_8])) : (((/* implicit */int) arr_37 [7U])))))), (max(((~(var_7))), (((/* implicit */long long int) var_1)))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */int) arr_12 [(short)16])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))))));
                    }
                }
                for (unsigned int i_13 = 1; i_13 < 8; i_13 += 1) 
                {
                    arr_46 [2LL] [(signed char)1] [i_8] [(unsigned char)6] [(_Bool)1] = var_8;
                    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [(signed char)5]))));
                    var_38 = ((/* implicit */short) (~(((((/* implicit */int) (signed char)76)) / (((/* implicit */int) ((short) (signed char)-77)))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_39 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_16))))));
                    /* LoopSeq 1 */
                    for (short i_15 = 1; i_15 < 8; i_15 += 4) 
                    {
                        arr_53 [(signed char)8] [8LL] [(unsigned short)5] [i_8] [6LL] [(signed char)7] = ((/* implicit */unsigned int) var_14);
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_39 [i_15 + 2] [(signed char)9] [i_15 - 1] [i_15 + 1] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2035)))))));
                        arr_54 [(unsigned short)9] [(short)5] [6U] [(signed char)3] [(signed char)3] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                    }
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_25 [2] [(unsigned char)9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_32 [1LL] [3U] [2LL] [(_Bool)1] [(short)9] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) >> (((arr_39 [6] [(signed char)5] [(unsigned short)2] [3LL] [9ULL]) - (18244153144698277683ULL))))), ((+(0)))))) : (arr_47 [0U] [(short)6] [(_Bool)1])));
                    var_42 += ((/* implicit */unsigned short) ((18446744073701425137ULL) >> (((18446744073709551611ULL) - (18446744073709551588ULL)))));
                }
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    arr_57 [4U] [0LL] [(_Bool)1] [(short)1] [(short)1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [14U]))))) * (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_13)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-164334835) : (arr_0 [(signed char)4])))))))));
                    var_43 = ((/* implicit */unsigned short) var_6);
                    arr_58 [i_8] [(signed char)9] [(signed char)9] [2ULL] [(unsigned char)6] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_29 [(short)4] [(signed char)9] [i_6 - 2] [2LL])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))));
                    var_44 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_27 [i_6 - 2] [i_7 - 2] [i_8 - 1] [0U])) || (((/* implicit */_Bool) var_15))))));
                }
                var_45 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_17)) ? ((+(arr_2 [2LL] [18LL] [(signed char)6]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((arr_34 [i_7] [(signed char)6]) - (3814730844U)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (short)248)) : (((/* implicit */int) arr_37 [i_6 + 1])))))));
            }
            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_16)))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) : (var_7))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))))));
        }
        var_47 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)62337)), (((arr_3 [i_6 + 1] [i_6 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
    }
    for (signed char i_17 = 1; i_17 < 22; i_17 += 1) 
    {
        arr_61 [(unsigned char)15] [19U] = ((/* implicit */_Bool) arr_60 [i_17 - 1] [17U]);
        arr_62 [(signed char)5] = ((/* implicit */unsigned char) arr_59 [(unsigned char)15]);
        var_48 = (((~(((/* implicit */int) arr_60 [(unsigned char)6] [15U])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_17 - 1] [(_Bool)1]))))));
        /* LoopSeq 2 */
        for (short i_18 = 4; i_18 < 23; i_18 += 2) /* same iter space */
        {
            arr_65 [9LL] [(short)12] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) arr_59 [(_Bool)0]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31112))) : (18446744073701425147ULL))))));
            var_49 *= ((/* implicit */_Bool) 0LL);
            var_50 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18059)) ? ((((+(((/* implicit */int) arr_63 [(short)2] [18ULL] [(short)0])))) * (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_60 [5ULL] [(unsigned short)17]))))))) : (((((/* implicit */_Bool) arr_64 [19LL] [i_17 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_64 [(unsigned short)16] [i_17 + 2]))))));
            arr_66 [(unsigned char)14] [3U] [23U] = ((/* implicit */signed char) arr_63 [19U] [(short)22] [(unsigned short)15]);
        }
        for (short i_19 = 4; i_19 < 23; i_19 += 2) /* same iter space */
        {
            var_51 = ((/* implicit */unsigned short) min((((((((/* implicit */int) (short)-1)) + (var_9))) & ((~(((/* implicit */int) (signed char)-32)))))), ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_11))))))));
            var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_59 [10ULL]), (((/* implicit */unsigned short) arr_68 [8ULL]))))) ? (arr_67 [9U] [22ULL]) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)92))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_67 [(signed char)12] [4U]) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_63 [3U] [(short)9] [2U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [(unsigned char)18] [(signed char)17])))))))) : (var_6)));
            var_53 |= ((/* implicit */signed char) (+(((450183005U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023)))))));
            var_54 = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)73)) : (var_2))))));
        }
    }
    var_55 = ((/* implicit */signed char) var_5);
    var_56 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)251)), (4503462188417024ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
    {
        for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
        {
            for (short i_22 = 2; i_22 < 16; i_22 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 2; i_23 < 15; i_23 += 1) 
                    {
                        for (unsigned int i_24 = 1; i_24 < 14; i_24 += 4) 
                        {
                            {
                                var_57 = ((/* implicit */unsigned long long int) min((var_57), (((((/* implicit */_Bool) (((_Bool)1) ? (261632LL) : (-261633LL)))) ? (((/* implicit */unsigned long long int) -549476858)) : (((unsigned long long int) -261632LL))))));
                                var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)55593)) : (((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (~(8393840783875961435LL)))) ? (((((/* implicit */int) (signed char)-56)) / (arr_17 [(signed char)12] [i_21]))) : (((((/* implicit */int) arr_77 [2U] [(signed char)4] [(signed char)1])) / (((/* implicit */int) arr_60 [(signed char)4] [3U])))))) : (var_9)));
                                var_59 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_10)) ? (arr_70 [(signed char)12] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))), (((/* implicit */unsigned long long int) (+(-6220195283634042950LL)))))) - (min((arr_74 [i_22 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)9] [6LL] [(unsigned short)15])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))))))));
                            }
                        } 
                    } 
                    arr_80 [(unsigned char)2] [(signed char)14] [(unsigned short)3] [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_21])), (arr_12 [(unsigned short)1]))))));
                    var_60 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [1] [18] [(unsigned short)4])) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_79 [7U] [(unsigned short)2] [3LL] [11LL] [(unsigned char)1] [1LL]))) - (arr_8 [(unsigned char)16] [(unsigned short)3] [(short)20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10)))))) : (arr_2 [i_22 - 1] [i_22 + 1] [(unsigned short)4]))) : ((~(arr_78 [13] [i_22 - 1] [i_22 + 1] [(unsigned short)1])))));
                    arr_81 [(signed char)13] [1LL] [7ULL] = ((/* implicit */unsigned int) (unsigned char)118);
                    var_61 = ((/* implicit */short) max((((/* implicit */int) var_12)), (var_2)));
                }
            } 
        } 
    } 
}
