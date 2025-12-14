/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89996
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
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0 - 3] [i_0 - 1] = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_3))));
            arr_8 [i_1] |= ((/* implicit */short) var_1);
            var_11 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)0)))) < ((~(((/* implicit */int) var_5))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_12 = (!(arr_0 [i_0]));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_14 [i_2] [i_3] [i_2] [i_2] = ((unsigned char) arr_3 [i_0 - 2] [i_0 - 2]);
                var_13 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)0)))) > ((~(((/* implicit */int) arr_13 [i_0 - 3] [i_2] [i_2]))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4] [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 442893084)) ? (((/* implicit */int) arr_17 [i_0 - 3] [i_0 - 2] [i_4] [i_2])) : (((/* implicit */int) arr_17 [i_0] [i_0 - 2] [i_0] [i_2]))));
                            var_14 = arr_17 [i_0] [i_0] [i_0] [i_2];
                        }
                    } 
                } 
                arr_23 [i_2] [i_2] = ((/* implicit */int) var_3);
                arr_24 [i_2] [(unsigned short)17] [(unsigned short)17] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [12] [(unsigned char)13])) ? (((/* implicit */int) arr_9 [i_2] [i_0 - 1])) : (45855756)))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_27 [(_Bool)1] [i_2] [i_6] |= ((/* implicit */unsigned char) var_6);
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_2]))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_7))));
                var_17 ^= ((/* implicit */unsigned int) arr_3 [i_6] [i_2]);
            }
        }
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_30 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8))));
            arr_31 [i_7] = ((/* implicit */long long int) var_5);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_18 += ((/* implicit */int) var_7);
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) var_3))))) : ((~(arr_5 [i_0] [i_0] [16LL]))))))));
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_35 [i_0] [i_0] [7U])) % (-45855756)))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_4 [i_0] [i_8] [i_9]))));
            }
            for (long long int i_10 = 1; i_10 < 18; i_10 += 4) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((442893084) | (45855760)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((var_2) ^ (((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_8]))))));
                var_23 = ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_10 + 2] [(unsigned short)10]))));
                var_24 = ((/* implicit */short) (+(((((/* implicit */int) (short)-2)) & (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_12 = 3; i_12 < 17; i_12 += 3) 
                {
                    var_25 = var_10;
                    var_26 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (-3696785487957796813LL))))));
                    var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_33 [i_11] [i_12])))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [4LL] = ((unsigned short) (~(442893084)));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) var_10)))))));
                }
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    var_29 += ((/* implicit */long long int) (unsigned short)51784);
                    var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) -3696785487957796813LL)) ? (((((/* implicit */_Bool) 67108864)) ? (((/* implicit */int) (_Bool)1)) : (-20))) : (((/* implicit */int) ((_Bool) arr_47 [i_0 - 3] [i_8] [i_11] [i_8] [i_8])))));
                    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_0] [i_0 - 2]))));
                }
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        arr_55 [i_0] [i_15] [i_0] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_0 - 1] [i_0 - 2])) ? (arr_50 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        var_32 = ((/* implicit */short) arr_34 [i_0 - 2]);
                        arr_56 [i_0] [i_8] [i_8] [i_15] [i_8] [i_0] = ((/* implicit */unsigned char) var_0);
                    }
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (-(var_2))))));
                }
                for (long long int i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 - 3] [(short)12] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_19 [i_0] [i_8] [i_11] [i_0 + 1] [0U] [i_8] [i_17])));
                    var_35 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_17] [i_17])) >= (-415892722)));
                }
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 3])) ? (arr_58 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) var_5))));
            }
        }
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_19 = 1; i_19 < 16; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 3; i_20 < 18; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        {
                            var_37 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) -6982330672545943930LL)) || (((/* implicit */_Bool) (unsigned short)24754)))))));
                            var_38 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2))) + (((/* implicit */unsigned int) ((arr_21 [i_0 - 1] [i_18] [i_20]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))));
                            arr_70 [i_20] [i_0] [i_20] [i_0] [i_21] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_51 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_20] [i_0 - 2]))));
                            arr_71 [i_18] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 204270750U)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (unsigned short)32752))));
                        }
                    } 
                } 
                arr_72 [i_0 - 1] = ((/* implicit */_Bool) ((var_3) ? (arr_65 [i_19] [i_19 + 1] [(_Bool)1] [(unsigned char)16] [i_0 - 2]) : (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_54 [(signed char)7] [(signed char)7] [i_18] [(signed char)7] [i_18] [i_19] [i_18])))));
                var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_10 [i_0 + 1] [i_0 - 2]) : (((unsigned long long int) var_0))));
            }
            for (unsigned int i_22 = 1; i_22 < 16; i_22 += 4) /* same iter space */
            {
                arr_75 [i_0] [i_18] [i_22 + 4] [i_18] = ((/* implicit */unsigned char) var_10);
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3696785487957796799LL))))));
            }
            for (unsigned long long int i_23 = 4; i_23 < 19; i_23 += 2) 
            {
                arr_79 [i_18] [i_18] = ((/* implicit */short) (-(((((/* implicit */_Bool) 0)) ? (arr_54 [i_18] [i_18] [i_23] [i_0] [i_23] [i_23 - 2] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_18])))))));
                arr_80 [i_23] [i_18] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((var_9) ? (3088620552U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (arr_69 [i_18] [i_18])));
                arr_81 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_23])) == (((/* implicit */int) arr_36 [i_23]))));
                var_41 = ((/* implicit */unsigned short) (-(arr_33 [i_0 - 3] [i_23 - 3])));
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((-229883127048913263LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_18] [i_23])))))))));
            }
            var_43 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_41 [i_0 - 2] [i_18] [i_0 - 1]))));
            arr_82 [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
        }
        for (int i_24 = 1; i_24 < 17; i_24 += 2) 
        {
            var_44 = ((/* implicit */unsigned short) ((int) arr_62 [i_0] [i_0] [i_0]));
            arr_85 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
        }
    }
    /* vectorizable */
    for (short i_25 = 0; i_25 < 22; i_25 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_26 = 0; i_26 < 22; i_26 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_27 = 0; i_27 < 22; i_27 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
                    {
                        arr_98 [i_25] [i_25] [i_25] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_96 [i_26] [19] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 - 1])) ^ (arr_97 [i_27] [i_27] [i_28 - 1] [i_28] [i_28])));
                        var_45 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_2)))));
                        arr_99 [i_25] [i_25] [(short)7] [i_25] [i_25] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_96 [i_28] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_27])) + ((~(496557718U)))));
                    }
                    for (short i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
                    {
                        var_46 = ((((/* implicit */int) (!(arr_90 [i_25])))) & ((-(-1281677289))));
                        arr_103 [i_25] [i_26] = ((/* implicit */long long int) 4078842880U);
                    }
                    for (short i_31 = 0; i_31 < 22; i_31 += 4) /* same iter space */
                    {
                        arr_106 [i_25] [i_25] [i_26] [i_27] [i_28 - 1] [i_31] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                        arr_107 [i_31] [i_28] [7U] [11LL] [i_26] [11LL] [i_25] = ((/* implicit */_Bool) var_8);
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 1302482875))) ? (1538319224515716289ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_102 [i_27] [i_27] [i_27] [i_27] [i_28])))));
                    }
                    arr_108 [i_27] = (+(((/* implicit */int) arr_93 [i_25] [i_26])));
                    var_48 = ((/* implicit */short) ((arr_97 [i_26] [i_28 - 1] [i_28 - 1] [i_28] [17LL]) >> (((arr_97 [i_25] [i_28 - 1] [i_28] [i_28] [i_28]) - (1401962051U)))));
                    arr_109 [i_26] [i_26] [i_27] [(unsigned char)5] [i_28 - 1] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20346)) ? (1360448993527843465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_101 [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28] [i_28 - 1])))));
                }
                var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1441551049)) ? (229883127048913281LL) : (((/* implicit */long long int) 1441551057))));
            }
            arr_110 [i_26] [i_26] [i_26] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_10) >> (((((/* implicit */int) arr_93 [i_25] [i_25])) - (15372)))))) ? (((arr_102 [i_26] [i_26] [i_26] [(_Bool)1] [i_25]) ? (((/* implicit */unsigned long long int) 1441551050)) : (17086295080181708162ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_101 [(short)15] [i_25] [i_25] [i_25] [(short)15] [i_25] [i_26])) + (2147483647))) << (((/* implicit */int) (unsigned char)0)))))));
        }
        for (unsigned char i_32 = 0; i_32 < 22; i_32 += 4) /* same iter space */
        {
            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) -3696785487957796797LL)) ? (-6) : (((/* implicit */int) (unsigned short)57727))));
            arr_113 [i_25] [i_25] = ((/* implicit */signed char) ((short) (~(var_2))));
        }
        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3696785487957796799LL)) ? (((/* implicit */int) (short)10831)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 1610612736U)) ? (((/* implicit */unsigned long long int) 169574809U)) : (17086295080181708150ULL))) : (((unsigned long long int) arr_89 [i_25] [i_25] [i_25]))));
        var_52 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_102 [i_25] [i_25] [i_25] [i_25] [i_25])) - (((/* implicit */int) (unsigned short)65535))));
        var_53 = ((/* implicit */signed char) (-(arr_89 [i_25] [i_25] [i_25])));
        var_54 = ((((/* implicit */_Bool) arr_93 [i_25] [i_25])) ? (((/* implicit */int) (short)-3615)) : (((/* implicit */int) arr_93 [i_25] [i_25])));
    }
    for (int i_33 = 0; i_33 < 15; i_33 += 1) 
    {
        var_55 *= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)-31079))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= ((-(((/* implicit */int) arr_9 [(unsigned char)6] [(unsigned char)6]))))))) : (((/* implicit */int) arr_35 [i_33] [i_33] [i_33]))));
        arr_118 [(short)6] [(_Bool)1] = ((/* implicit */long long int) var_8);
        arr_119 [i_33] = ((/* implicit */int) -3696785487957796783LL);
    }
    var_56 = ((/* implicit */long long int) 1441551049);
}
