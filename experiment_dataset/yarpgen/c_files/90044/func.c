/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90044
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) % (((/* implicit */int) var_9)))))));
    var_20 += var_10;
    var_21 = (unsigned short)43047;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) == (((((/* implicit */int) ((((/* implicit */int) (unsigned short)61166)) >= (((/* implicit */int) var_0))))) + (((/* implicit */int) max((var_5), ((unsigned short)0))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_15))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)52205)) % (((/* implicit */int) (unsigned short)32768))));
            arr_8 [(unsigned char)2] [i_1] [(unsigned char)6] &= ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_17)))), (((/* implicit */int) (unsigned short)37182))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)10)))))));
                        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_6 [(unsigned short)2] [(unsigned short)8] [(unsigned short)3])) ? (((/* implicit */int) arr_7 [(unsigned short)15] [(unsigned short)2])) : (((/* implicit */int) (unsigned short)1023)))))) ? (((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32768)))))));
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) var_18)) < (((/* implicit */int) (unsigned char)21))));
                        var_27 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (unsigned short)64275))), ((~(((/* implicit */int) max((var_2), (var_14))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)18)))) + ((+(((/* implicit */int) var_12))))));
            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_17)) | (((/* implicit */int) arr_12 [i_0 + 2])))) : (((/* implicit */int) (unsigned char)219))));
        }
    }
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_18 [(unsigned short)18] [i_5 + 3]), ((unsigned short)65527))), (((/* implicit */unsigned short) arr_19 [i_5 + 1]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5 - 2]))))) ? (((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */int) var_6)) - (31203))))) : (((/* implicit */int) ((unsigned char) (unsigned char)19))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28035))))) ? (((/* implicit */int) (unsigned short)40752)) : (((/* implicit */int) var_10)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 23; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5 - 1] [(unsigned short)13] [(unsigned char)22] [i_8 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)11111)))))));
                            var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned char)14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) (unsigned char)255))));
                            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)18)) % (((((/* implicit */int) (unsigned char)18)) | (((/* implicit */int) (unsigned char)255))))));
                            var_34 *= ((/* implicit */unsigned char) var_16);
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) << (((((((/* implicit */_Bool) (unsigned short)24390)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)59960)))) - (40)))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 3; i_10 < 23; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_36 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [i_10 - 3] [i_10 - 3] [(unsigned short)15] [(unsigned short)2])) % (((/* implicit */int) ((((/* implicit */int) arr_29 [i_12 + 1] [i_11] [(unsigned char)8] [(unsigned short)10] [i_6 - 3] [(unsigned char)10])) > (((/* implicit */int) arr_20 [(unsigned short)4])))))));
                            var_37 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [(unsigned char)16] [i_6 - 2] [i_5 + 1] [(unsigned char)11] [i_11])) + (((/* implicit */int) arr_37 [(unsigned short)8] [i_6 + 1] [i_5 + 1] [(unsigned short)1] [i_12 + 1]))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_16))));
                            arr_40 [(unsigned short)3] [(unsigned short)19] [i_11] [i_6 + 1] [(unsigned short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_29 [(unsigned char)16] [(unsigned short)6] [(unsigned char)4] [(unsigned char)0] [(unsigned short)19] [i_6 - 2])) : (((/* implicit */int) (unsigned short)6))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_14 = 2; i_14 < 23; i_14 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned short) min((var_39), (min((min((((/* implicit */unsigned short) var_0)), (((unsigned short) var_2)))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) < (((((/* implicit */int) (unsigned short)63338)) % (((/* implicit */int) arr_39 [i_13])))))))))));
                var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)1023), (((/* implicit */unsigned short) arr_33 [(unsigned short)6] [i_13 - 1] [i_13 - 2] [(unsigned char)1]))))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5 - 2] [i_13 - 2])))))));
                var_41 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max(((unsigned short)56996), (((/* implicit */unsigned short) (unsigned char)255))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_16))))))), (((((((/* implicit */int) (unsigned short)11119)) - (((/* implicit */int) var_4)))) == (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_38 [(unsigned char)8] [i_14 - 1] [(unsigned short)20] [(unsigned char)1] [i_5 + 1]))))))));
            }
            for (unsigned char i_15 = 2; i_15 < 23; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_16 = 3; i_16 < 21; i_16 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 1; i_17 < 23; i_17 += 3) 
                    {
                        var_42 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_28 [(unsigned char)7] [(unsigned short)20] [(unsigned char)9] [i_13 - 2] [(unsigned short)19] [i_13 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_35 [(unsigned short)0] [i_13 - 2] [(unsigned char)11] [(unsigned char)19])))), (((/* implicit */int) (unsigned short)44859))));
                        arr_56 [i_13] [i_13 + 3] [(unsigned char)20] [i_16 - 3] [(unsigned char)14] |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_33 [i_5 - 2] [(unsigned short)22] [i_16 - 1] [(unsigned short)18]))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)38072))))) && (((/* implicit */_Bool) min((arr_54 [(unsigned char)1] [i_15] [i_15 - 1] [(unsigned short)21] [i_17 - 1] [i_13 - 2] [i_15 + 1]), ((unsigned short)7364))))));
                        var_44 += ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_35 [i_5 - 1] [(unsigned char)17] [(unsigned short)22] [(unsigned short)15]), (arr_35 [i_5 - 1] [i_13 + 3] [i_15 + 1] [(unsigned short)11])))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [i_5 - 1] [(unsigned short)0] [i_15 - 2] [(unsigned char)10])) : (((/* implicit */int) var_4))))));
                        var_45 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36654))))))));
                    }
                    for (unsigned char i_18 = 2; i_18 < 23; i_18 += 2) 
                    {
                        var_46 += ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_45 [i_5 - 1] [i_13] [i_15 - 2]), (var_10)))), ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) arr_37 [(unsigned char)23] [i_13 + 3] [i_15 - 1] [(unsigned char)2] [i_18 + 1])) : (((/* implicit */int) max(((unsigned short)25984), (var_4))))))));
                        var_47 = ((/* implicit */unsigned short) max((var_47), ((unsigned short)27274)));
                        arr_59 [(unsigned short)18] [(unsigned short)18] [i_15] [(unsigned short)13] [(unsigned char)4] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_34 [(unsigned short)16] [i_13 + 3] [(unsigned char)14] [(unsigned short)4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)998)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)58171)))))) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_41 [i_13 - 1] [i_15 - 1] [(unsigned char)17])) : (((/* implicit */int) (unsigned char)45)))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [(unsigned char)12] [(unsigned short)19] [(unsigned short)20] [i_5 - 1])) > (((/* implicit */int) (unsigned short)50161)))))))));
                    }
                    for (unsigned short i_19 = 1; i_19 < 22; i_19 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_42 [(unsigned char)0] [(unsigned char)12] [i_16 + 2])), ((~(((/* implicit */int) var_17))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [(unsigned char)8] [i_13 + 2] [(unsigned char)13] [i_16 - 3]))))) : (((/* implicit */int) ((((((/* implicit */int) var_10)) != (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))))))));
                        arr_62 [i_13] [(unsigned char)12] [(unsigned short)8] [(unsigned char)10] [i_16 - 3] [(unsigned short)22] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_41 [(unsigned short)3] [i_15 - 2] [i_15 - 2])), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned short)25960)) : (((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) var_6))));
                    }
                    var_49 += arr_34 [(unsigned short)15] [i_13 - 1] [(unsigned char)14] [(unsigned short)2];
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_20 = 3; i_20 < 23; i_20 += 3) 
                {
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) var_4))));
                    /* LoopSeq 4 */
                    for (unsigned char i_21 = 2; i_21 < 22; i_21 += 2) 
                    {
                        var_51 |= ((/* implicit */unsigned short) arr_33 [i_13 + 3] [(unsigned char)5] [i_13 - 1] [i_15 + 1]);
                        var_52 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [(unsigned short)6] [i_15 - 2] [i_15 - 1])) * (((/* implicit */int) var_13))));
                        var_53 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [(unsigned short)0] [(unsigned short)11] [i_15 - 1] [i_13 + 1] [(unsigned short)12])) ? (((/* implicit */int) arr_37 [(unsigned short)0] [(unsigned short)16] [i_15 - 1] [(unsigned char)9] [(unsigned short)16])) : (((/* implicit */int) arr_37 [(unsigned char)13] [(unsigned short)8] [i_15 - 2] [i_5 - 2] [(unsigned short)14]))));
                        var_54 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
                    }
                    for (unsigned char i_22 = 1; i_22 < 23; i_22 += 2) 
                    {
                        var_55 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) arr_36 [i_13 - 1] [i_13] [i_20 - 1] [(unsigned char)14] [i_22 + 1] [i_22 + 1]))));
                        var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
                        var_57 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)15375)))) * (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_25 [(unsigned short)8])) : (((/* implicit */int) (unsigned short)35152))))));
                    }
                    for (unsigned char i_23 = 2; i_23 < 22; i_23 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)1)))) + (((/* implicit */int) (unsigned char)1))));
                        var_59 *= arr_24 [(unsigned char)5] [i_13 + 3] [(unsigned char)15] [(unsigned short)21];
                        var_60 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_2))))));
                        var_61 = ((/* implicit */unsigned char) max((var_61), (var_1)));
                    }
                    for (unsigned char i_24 = 1; i_24 < 23; i_24 += 1) 
                    {
                        var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_38 [i_20 - 3] [(unsigned short)16] [i_15 - 1] [i_13 + 1] [(unsigned short)13]))));
                        var_63 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_48 [i_15 + 1] [(unsigned short)13] [(unsigned char)19] [(unsigned char)21]))));
                        var_64 = ((/* implicit */unsigned char) max((var_64), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)1015)))))));
                    }
                    var_65 = ((/* implicit */unsigned short) max((var_65), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57157))))))))));
                    var_66 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)233))));
                }
            }
            /* vectorizable */
            for (unsigned char i_25 = 2; i_25 < 23; i_25 += 1) /* same iter space */
            {
                var_67 = ((/* implicit */unsigned char) min((var_67), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)16)))))));
                var_68 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)112)) ? (((((/* implicit */_Bool) (unsigned short)1026)) ? (((/* implicit */int) arr_46 [i_25 - 1] [i_13] [i_5 + 3])) : (((/* implicit */int) (unsigned short)57556)))) : (((/* implicit */int) var_16))));
            }
            arr_77 [(unsigned char)7] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
            var_69 += ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)2198)) != (((/* implicit */int) var_13)))))))));
            var_70 = ((/* implicit */unsigned short) min((var_70), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_28 [(unsigned char)6] [i_13 + 2] [(unsigned char)2] [i_5 + 1] [(unsigned char)13] [(unsigned char)14])) ? (((/* implicit */int) arr_67 [(unsigned short)3] [(unsigned short)11] [i_5 + 1] [(unsigned char)1] [i_5 + 3])) : (((((/* implicit */int) (unsigned short)15392)) >> (((((/* implicit */int) (unsigned short)8369)) - (8361))))))))))));
            /* LoopNest 3 */
            for (unsigned short i_26 = 3; i_26 < 21; i_26 += 3) 
            {
                for (unsigned short i_27 = 1; i_27 < 22; i_27 += 2) 
                {
                    for (unsigned short i_28 = 0; i_28 < 24; i_28 += 2) 
                    {
                        {
                            var_71 = ((/* implicit */unsigned char) min((var_71), (((unsigned char) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_45 [(unsigned short)12] [i_28] [(unsigned short)22])) >= (((/* implicit */int) var_3))))), (max((var_7), (var_2))))))));
                            var_72 = ((/* implicit */unsigned short) var_14);
                            arr_84 [i_28] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)214)), (var_4)));
                            arr_85 [(unsigned short)7] [(unsigned short)14] [(unsigned short)7] |= (unsigned short)65531;
                        }
                    } 
                } 
            } 
        }
    }
}
