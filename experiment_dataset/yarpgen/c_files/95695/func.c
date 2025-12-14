/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95695
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
    var_15 = ((/* implicit */unsigned short) var_8);
    var_16 = ((/* implicit */short) max(((+((+(((/* implicit */int) (unsigned short)4900)))))), (((/* implicit */int) (unsigned short)60635))));
    var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) max(((unsigned short)39196), (((/* implicit */unsigned short) var_13)))))))), (var_5)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) (-((+(-6999605064288710570LL))))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)60630)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_1] [(signed char)3]))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_9)))) == ((~(((/* implicit */int) arr_8 [i_1 - 2]))))));
        }
        for (short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) arr_8 [i_1]);
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((min((((/* implicit */int) min(((_Bool)1), (var_9)))), (((((/* implicit */_Bool) (unsigned short)4900)) ? (((/* implicit */int) arr_4 [i_1] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_1])))))), ((~(max((312666278), (-2104817380))))))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)9523)) ? (max((((/* implicit */long long int) ((arr_12 [i_1] [i_3] [i_3]) ? (((/* implicit */int) (short)-26052)) : (((/* implicit */int) (unsigned short)4906))))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 2] [i_1 - 2]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_14 [i_1 + 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned int i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((unsigned short) var_2));
                            var_24 = ((/* implicit */unsigned char) 2104817380);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_7 = 4; i_7 < 15; i_7 += 3) 
            {
                var_25 -= ((/* implicit */long long int) ((-166169622) | (((((/* implicit */_Bool) var_8)) ? (arr_11 [9] [i_3]) : (((/* implicit */int) (unsigned short)53938))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */long long int) arr_13 [i_1] [i_3] [i_7] [i_1]))))) ? (arr_17 [i_7 - 2]) : (((/* implicit */int) var_14))));
                var_27 = ((/* implicit */long long int) ((unsigned char) arr_19 [i_1] [(unsigned short)14] [i_3] [i_7]));
                var_28 = ((/* implicit */_Bool) var_8);
            }
            var_29 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1] [i_1 + 1])))) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 3])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)11597)) >= (((/* implicit */int) arr_20 [15U] [2] [i_3] [2] [i_3] [i_3] [i_3]))))))) + (min(((((_Bool)0) ? (((/* implicit */int) (unsigned short)23506)) : (((/* implicit */int) (unsigned short)53938)))), ((~(((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        arr_29 [i_1] [i_3] [(signed char)4] [i_1 - 2] [6LL] [i_1] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_7))))))));
                        var_30 = ((/* implicit */short) ((((arr_17 [i_1]) <= (arr_17 [i_1]))) && (((((/* implicit */int) arr_27 [i_1] [(short)10] [i_1 - 4] [i_1] [i_1] [i_1])) <= (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1])) ? ((+(((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10])))) : (arr_18 [i_10] [i_1] [i_1 - 4] [i_10] [(short)2] [i_10]))))));
            /* LoopSeq 1 */
            for (short i_11 = 3; i_11 < 13; i_11 += 2) 
            {
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_10] [i_10] [i_10])) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                var_33 = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_33 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) ((var_9) ? (arr_26 [i_1] [i_11] [i_1 - 3]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_35 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_1] [i_1]))))) * (((/* implicit */int) ((_Bool) arr_22 [i_1] [i_10] [i_10])))));
                            var_36 = ((/* implicit */int) ((arr_12 [i_1] [i_10] [i_11 + 3]) ? ((-(-6268657460387331172LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1 - 1] [8] [i_1])) ? (arr_26 [i_1] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_10]))));
            }
        }
        for (signed char i_14 = 1; i_14 < 13; i_14 += 4) 
        {
            arr_45 [i_14] = ((/* implicit */signed char) arr_34 [i_1]);
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2019930736U)) ? (((/* implicit */int) (unsigned short)60622)) : (((/* implicit */int) (short)4125))));
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned int) arr_32 [i_1] [i_14])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_16] [i_16])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)11170)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_1] [i_15] [(short)3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1 - 1] [i_14 + 3] [i_14]))) : (((((/* implicit */_Bool) 9007199254708224LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_40 [i_1 + 1] [i_1] [(short)6] [8U] [i_16])), (arr_38 [i_1] [i_16] [10] [i_1]))))))));
                        arr_51 [i_1] [i_14] [i_1] [i_16] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((arr_23 [i_1 - 2] [i_1 - 2] [i_16]) - (arr_36 [i_16] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_24 [i_14 + 3] [i_1 - 1] [i_16] [i_16])) : (((/* implicit */int) var_6)))));
                    }
                } 
            } 
            arr_52 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)37814)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_46 [i_1] [i_1] [i_1])))))))), (((((/* implicit */int) (_Bool)1)) + (arr_37 [i_1 - 1] [12] [i_1 + 1] [i_1] [i_14 + 2])))));
        }
        var_40 -= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)20)))))) & (((/* implicit */int) (((~(((/* implicit */int) (signed char)-21)))) != (var_8))))));
        var_41 = ((/* implicit */long long int) -1783225035);
        arr_53 [i_1] |= ((/* implicit */_Bool) max((((max((815877728U), (((/* implicit */unsigned int) var_3)))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_48 [i_1] [i_1] [i_1])))))) - (((unsigned int) arr_8 [i_1 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
    {
        arr_56 [i_17] = ((/* implicit */short) arr_54 [i_17]);
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        var_42 ^= ((/* implicit */long long int) ((unsigned short) arr_59 [i_18] [i_19] [i_20]));
                        var_43 += ((/* implicit */long long int) arr_58 [i_20]);
                        /* LoopSeq 3 */
                        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
                        {
                            arr_66 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_20])) ? (((long long int) -2727985509691522650LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_17])))));
                            var_44 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2053570876U)) ? (((/* implicit */int) arr_55 [i_17])) : (((/* implicit */int) var_11)))) - (((/* implicit */int) arr_60 [i_20]))));
                            var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_65 [i_17] [i_17] [i_17] [8] [(_Bool)1]))));
                            arr_67 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] &= ((/* implicit */unsigned int) ((-2727985509691522657LL) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)4)) > (((/* implicit */int) var_3))))))));
                            var_46 ^= 16777215;
                        }
                        for (short i_22 = 0; i_22 < 20; i_22 += 4) /* same iter space */
                        {
                            var_47 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_61 [i_17] [i_18])) : (-6268657460387331182LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_60 [i_17])) - (88)))));
                            var_48 = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_64 [i_19]))))) ? (((/* implicit */int) arr_65 [(unsigned char)2] [i_18] [i_19] [(unsigned short)17] [(_Bool)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_17] [i_18] [i_18]))))));
                        }
                        for (short i_23 = 0; i_23 < 20; i_23 += 4) /* same iter space */
                        {
                            arr_74 [(signed char)13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_65 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_17] [i_18] [i_19] [i_20] [i_23])))));
                            var_49 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_17] [i_17] [i_17] [i_17] [i_17])))))));
                            var_50 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)4081)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_11)))));
                        }
                        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) arr_72 [i_17] [i_17] [i_17] [i_17] [17U])) ? (arr_72 [i_17] [1LL] [(signed char)0] [i_20] [(signed char)0]) : (arr_72 [i_17] [i_18] [i_20] [i_20] [i_18]))))));
                        var_52 -= ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    for (long long int i_24 = 0; i_24 < 12; i_24 += 4) 
    {
        var_53 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((int) var_11))))) : (max((((/* implicit */unsigned int) 596595477)), (815877728U)))));
        var_54 = ((/* implicit */int) arr_70 [i_24] [i_24] [i_24] [i_24] [i_24]);
    }
}
