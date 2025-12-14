/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96254
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((1536216878), (((/* implicit */int) (signed char)-118)))), (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (18446744073709551607ULL))) >> (((((((/* implicit */_Bool) (short)-22315)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) - (23826))))))));
    var_14 = ((unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))));
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (-823025968002910396LL)))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) (signed char)-42)))) : (((/* implicit */int) ((unsigned short) var_3))))), (((int) (unsigned char)79))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] &= ((/* implicit */short) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)106)) || (((/* implicit */_Bool) (signed char)-1))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) var_11);
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % ((+(((/* implicit */int) var_3))))));
                                arr_15 [i_2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (short)32761))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)164)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))));
                            arr_22 [i_2] [i_5] [i_2 + 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (var_2)));
                            arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_2] [i_5] [i_2] [i_6]);
                            var_20 -= ((/* implicit */unsigned short) ((arr_21 [i_5 + 3] [(short)20] [8LL] [i_5] [i_0] [i_1] [i_0]) / (var_4)));
                            arr_24 [7LL] [7LL] [i_2 - 1] [i_5] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_3))))));
                        }
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 2] [i_5 + 1])) + (101950447)));
                        var_22 ^= ((/* implicit */unsigned long long int) arr_17 [i_0] [i_5 + 3] [i_2] [1ULL]);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) var_11)))));
                    }
                    var_24 = ((/* implicit */signed char) -7026110647529206320LL);
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) var_5);
                            var_26 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)150));
                            arr_30 [i_0] [i_2] [i_2 - 2] [i_7] [i_8] = ((/* implicit */unsigned short) ((-263810405) / (((/* implicit */int) (short)32747))));
                            arr_31 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)224)) || (((/* implicit */_Bool) (short)-32741))));
                        }
                        var_27 |= ((/* implicit */int) ((((/* implicit */int) (signed char)7)) != (((/* implicit */int) var_6))));
                        arr_32 [(unsigned short)22] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2113599555)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)9] [i_1] [i_2 + 3] [i_2 + 2]))) | (var_7)));
                        arr_35 [(unsigned short)2] [(unsigned short)2] [i_2] [i_9] [i_2] [i_0] = ((/* implicit */signed char) (+(arr_7 [i_2 - 1])));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) (-(arr_28 [i_2 - 2] [i_1] [i_2] [i_11] [i_0])));
                            arr_42 [4] [i_10] [i_2] [i_1] [i_2] [6LL] [(unsigned char)5] = var_4;
                            arr_43 [i_11] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (unsigned short)6385);
                        }
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_46 [i_2] = ((/* implicit */int) ((unsigned short) arr_37 [i_2] [i_2 - 2] [(signed char)8]));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))))));
                        }
                        for (unsigned char i_13 = 4; i_13 < 23; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (((var_7) | (var_7)))));
                            var_32 = ((/* implicit */unsigned short) (-(((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        }
                        var_33 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2 + 3] [i_10] [i_1] [i_10]))));
                        var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [18ULL] [i_1] [18ULL] [i_2 + 2] [i_10] [i_1])) | (((/* implicit */int) arr_40 [(short)20] [(short)20] [i_2 - 1] [i_2 + 2] [4] [i_0]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            var_35 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_15] [i_15] [i_2] [i_14]))) != (var_2))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
                        {
                            arr_59 [i_0] [i_1] [i_14] [i_2] [(signed char)2] [i_16] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_2] [i_2 - 2] [i_2] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 2]))) : (-9223372036854775798LL)));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32720)) : (var_4))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                            var_38 -= ((/* implicit */unsigned short) 1084244521U);
                        }
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            var_39 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                            var_40 &= ((/* implicit */_Bool) ((arr_2 [i_2 + 1] [i_2 - 1]) % (((/* implicit */long long int) 263810404))));
                            var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)-5598)))))));
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (unsigned char)121))));
                        }
                        for (unsigned char i_18 = 3; i_18 < 22; i_18 += 3) 
                        {
                            arr_66 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [(short)21] = ((var_4) / (((/* implicit */int) var_6)));
                            arr_67 [i_2] [i_1] [i_2] [i_1] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_48 [i_0] [i_1] [i_14] [i_18]))) ? (((/* implicit */int) arr_34 [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) var_9))));
                            arr_68 [i_18] [i_2] [i_2] [i_0] = ((/* implicit */short) (signed char)76);
                        }
                        var_43 = ((/* implicit */short) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((unsigned short) var_7)))));
                    }
                    arr_69 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39557))));
                }
            } 
        } 
        arr_70 [i_0] = ((/* implicit */unsigned short) var_10);
    }
    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_20 = 3; i_20 < 18; i_20 += 1) 
        {
            arr_77 [i_20] [i_20 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) | (min(((+(1084244521U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_19] [i_19] [i_20] [i_19] [i_19])) : (((/* implicit */int) (signed char)107)))))))));
            arr_78 [i_20] = ((/* implicit */signed char) ((long long int) ((max((((/* implicit */unsigned int) var_12)), (arr_38 [i_20] [i_20] [i_20] [i_19]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)13674)) : (((/* implicit */int) var_10))))))));
        }
        /* vectorizable */
        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 2) 
        {
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_19] [i_21])) : (((/* implicit */int) (short)-32722))))) : (((((/* implicit */_Bool) 9223372036854775799LL)) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))))));
            var_45 = ((/* implicit */int) ((var_1) >> (((((/* implicit */_Bool) 3210722763U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 3) 
            {
                var_46 = ((/* implicit */short) var_2);
                var_47 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (2099563417227108275ULL)));
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_63 [i_22 + 1] [i_22 + 1] [i_22 - 1] [i_22 - 1] [i_22 + 1])) << (((((/* implicit */int) ((unsigned char) var_8))) - (33)))));
                    var_49 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_5))));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
            {
                for (long long int i_26 = 4; i_26 < 20; i_26 += 2) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_50 *= (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_26]))) : (173565939U))));
                            var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((long long int) var_1)))));
                        }
                    } 
                } 
            } 
            var_52 += ((/* implicit */short) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_80 [i_19] [i_19] [i_24]))));
        }
        /* LoopNest 3 */
        for (long long int i_28 = 0; i_28 < 22; i_28 += 1) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    {
                        arr_103 [i_19] [i_28] [i_28] = ((/* implicit */signed char) var_10);
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_95 [i_29] [i_30])), (arr_71 [i_28])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_28] [i_28] [i_30])) : (((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) ((signed char) min((((/* implicit */short) (_Bool)1)), ((short)-13693)))))));
                        var_54 = ((/* implicit */_Bool) var_11);
                        var_55 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) - (((/* implicit */int) var_11)))) + ((+(((/* implicit */int) (short)32730))))));
                        var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) arr_27 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))));
                    }
                } 
            } 
        } 
    }
}
