/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59755
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_1])))), (((int) (unsigned char)22)))) + ((+(((/* implicit */int) arr_3 [i_1 - 1]))))));
            var_21 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-83)) ? ((+(((/* implicit */int) (short)-10896)))) : (((/* implicit */int) (signed char)-83)))), (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_1 [i_1 - 1])))))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_8 [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_1 [i_2]))))) >= (((/* implicit */int) (short)-16982))));
            var_22 -= ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned char)234))))))));
        }
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55443)) || (((/* implicit */_Bool) (signed char)6))));
                            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 524287LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)22))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (arr_16 [i_6] [i_6] [i_6] [i_6] [i_6 + 3])))));
                        }
                    } 
                } 
            } 
            arr_21 [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)56702))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) var_13)) - (var_9))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_3])) > (var_1))))));
            var_25 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)201)))), (((((/* implicit */int) (short)15872)) ^ (((/* implicit */int) var_15))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((-38340896) + (38340915)))))) : (max((arr_19 [i_0] [i_0] [8] [i_0] [i_3] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1313092390288689185LL)) || (((/* implicit */_Bool) arr_14 [i_0]))))))));
        }
    }
    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        var_26 = ((((/* implicit */int) max(((unsigned char)22), (((/* implicit */unsigned char) ((signed char) (signed char)63)))))) << (((((/* implicit */_Bool) 2293442436U)) ? (((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (signed char)1)) : (-931039456))) : (((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */int) (short)-1979)) : (((/* implicit */int) (_Bool)0)))))));
        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-90)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) var_15))));
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 13; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */int) arr_30 [i_7 + 3]);
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_18) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_27 [i_7 + 3] [i_7] [i_7] [i_7])))))));
                    }
                } 
            } 
            var_31 ^= ((/* implicit */long long int) ((-38340896) + (((/* implicit */int) (_Bool)1))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_30 [i_7])))))));
        }
        for (long long int i_11 = 1; i_11 < 12; i_11 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_12 = 1; i_12 < 12; i_12 += 3) 
            {
                var_33 = ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))) >> (((max((((/* implicit */long long int) (signed char)123)), ((~(arr_24 [i_7 + 2]))))) - (4671587183673581463LL)))));
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_33 [12LL] [i_12] [i_12])), (1687509628U)))) ? (max((((/* implicit */long long int) (unsigned short)29701)), (arr_34 [i_12 + 1] [i_12] [i_12] [i_12 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_15))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    var_35 *= ((/* implicit */unsigned char) max((((unsigned int) (-(var_18)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)128), (((/* implicit */unsigned char) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1175714928)) || (((/* implicit */_Bool) (signed char)31))))) : ((+(((/* implicit */int) (signed char)-107)))))))));
                    var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (int i_14 = 2; i_14 < 10; i_14 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)21358)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)10103)), (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (1657939992655099133LL)))))) : ((~(min((((/* implicit */unsigned long long int) 0U)), (var_7))))))))));
                        var_38 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) * (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_1)) ? (-1) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max(((short)25514), (((/* implicit */short) arr_29 [i_14 - 2] [i_13] [i_11 + 2] [i_7 + 3])))))));
                        var_39 = ((/* implicit */signed char) min((min((((/* implicit */int) arr_29 [i_7] [i_11] [i_12] [i_12 - 1])), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_15)))))), (((int) var_16))));
                    }
                    for (int i_15 = 2; i_15 < 10; i_15 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) arr_38 [i_7] [i_7] [10U] [i_13] [(_Bool)1]);
                        arr_44 [i_12] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_16)), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)45173)))));
                        var_41 = ((/* implicit */_Bool) var_15);
                        var_42 = ((/* implicit */signed char) var_0);
                    }
                    for (int i_16 = 2; i_16 < 10; i_16 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) (~(((287667426198290432LL) << (((((((/* implicit */int) (signed char)-11)) + (46))) - (33)))))));
                        arr_47 [i_7] [i_12] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_9))), ((+(((/* implicit */int) arr_36 [6] [(_Bool)1] [i_7 + 3] [i_12] [i_7 - 1]))))));
                    }
                    var_44 = ((/* implicit */_Bool) (signed char)11);
                }
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20363)) | (((/* implicit */int) arr_46 [i_17] [(_Bool)1] [i_17] [(_Bool)1] [8LL]))))))))));
                arr_51 [i_7 + 3] [i_7 + 3] [(_Bool)1] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (805306368) : (((/* implicit */int) (unsigned short)61766))));
                var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20363))));
                arr_52 [i_7] [i_11] [i_17] = ((/* implicit */long long int) ((int) var_13));
                arr_53 [i_7] [i_11] [i_17] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)200)) | (arr_39 [6] [i_11 + 1] [i_17] [i_7 - 1])));
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
            {
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8146))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1285062589)) ? (593952745) : (((/* implicit */int) (unsigned char)200))))) : (3966725627U)));
                var_48 = ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-287667426198290412LL));
                arr_56 [i_18] [i_11] [i_7 + 3] = ((((/* implicit */_Bool) arr_32 [i_7 + 3])) ? (((/* implicit */long long int) (+(var_0)))) : ((+(-3325730039568821971LL))));
            }
            var_49 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (511))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -4823138472053050570LL)))))))));
            var_50 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((0LL), (var_8)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
            var_51 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_15))) ^ (((/* implicit */int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [i_11]))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8214650094140393414LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_7])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21834))) : (0U))))))) : ((~(((((/* implicit */int) var_10)) | (((/* implicit */int) arr_38 [(_Bool)1] [i_11] [(_Bool)1] [i_11 - 1] [i_11]))))))));
        }
        for (short i_19 = 1; i_19 < 11; i_19 += 4) 
        {
            var_52 = ((/* implicit */_Bool) var_18);
            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */short) var_10))))) ? (max((549688705024LL), (-4823138472053050597LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_19] [i_19 + 2] [10LL] [i_7])) ? (24) : (((/* implicit */int) var_14))))))))));
            arr_59 [i_7] [i_19] |= ((/* implicit */_Bool) max((((8214650094140393414LL) >> (((min((((/* implicit */int) arr_46 [i_7] [i_7] [(signed char)6] [(unsigned short)10] [i_19 + 3])), (1402512113))) + (15071))))), (min((((/* implicit */long long int) var_6)), (max((var_12), (((/* implicit */long long int) arr_46 [i_7] [i_7] [i_7] [(_Bool)1] [(unsigned short)2]))))))));
            var_54 = ((/* implicit */short) ((((/* implicit */int) (short)19123)) << (((((-1) + (25))) - (24)))));
        }
        /* vectorizable */
        for (unsigned int i_20 = 1; i_20 < 10; i_20 += 3) 
        {
            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_35 [i_7] [i_7] [i_7 + 2] [i_20]) : (((/* implicit */unsigned int) var_6))));
            var_56 = ((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_4)) : (arr_39 [12] [0LL] [i_7] [12])));
            /* LoopNest 3 */
            for (unsigned int i_21 = 1; i_21 < 12; i_21 += 1) 
            {
                for (short i_22 = 1; i_22 < 13; i_22 += 3) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_57 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (49152)))) : (((/* implicit */int) ((_Bool) var_6))));
                            var_58 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_61 [i_21 - 1] [i_7 + 1] [i_22 - 1])) >> (((/* implicit */int) var_10))));
                            var_59 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) var_18))) : (((((/* implicit */int) (unsigned short)20369)) / (var_9)))));
                        }
                    } 
                } 
            } 
            arr_71 [i_7] [i_7] = ((/* implicit */unsigned int) ((((-1) + (2147483647))) >> (((6687394091078042105LL) - (6687394091078042095LL)))));
        }
    }
    var_60 = ((/* implicit */short) ((((/* implicit */long long int) var_9)) > (max(((+(var_12))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_18)))))));
}
