/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64323
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
    var_17 = ((/* implicit */short) (signed char)38);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) max((var_18), (var_7)));
        arr_2 [i_0] = ((/* implicit */int) var_9);
        var_19 -= ((/* implicit */short) (signed char)-39);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_5 [8] = ((/* implicit */int) 695906184723528768LL);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] [i_2] &= var_11;
            var_20 &= ((/* implicit */short) 4294967295U);
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_11))));
        }
        for (short i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            var_22 = ((/* implicit */signed char) var_7);
            var_23 = ((/* implicit */unsigned short) 0);
            arr_13 [11] [(unsigned short)12] = ((/* implicit */unsigned int) ((var_12) / (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) var_15)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_1))));
            var_25 -= ((/* implicit */int) (short)0);
        }
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_26 = 1445420288U;
        arr_19 [i_5] = ((/* implicit */unsigned long long int) (signed char)-116);
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_4))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
            {
                var_28 = var_0;
                var_29 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-36)) < (((/* implicit */int) (unsigned short)65535))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_26 [i_5] [i_5] [(signed char)8] [(signed char)8] [10ULL] = ((/* implicit */int) var_0);
                    var_30 = ((/* implicit */int) min((var_30), (((int) var_10))));
                }
            }
            /* vectorizable */
            for (signed char i_9 = 1; i_9 < 19; i_9 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_32 [i_5] [i_6] [i_6] [i_10] [i_10] = -661688857;
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) var_10);
                        var_32 *= ((/* implicit */short) var_12);
                    }
                    var_33 += ((4294967287U) - (((/* implicit */unsigned int) var_10)));
                }
                for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 2; i_13 < 21; i_13 += 2) 
                    {
                        var_34 = var_10;
                        var_35 ^= (signed char)-38;
                    }
                    arr_41 [5ULL] [3] = ((/* implicit */signed char) var_16);
                    arr_42 [(signed char)11] [i_9] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-39))));
                }
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) (unsigned short)7070);
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_37 = var_9;
                        arr_49 [i_5] [i_6] [10] [i_5] [i_6] [(short)0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)13946))));
                    }
                    for (unsigned int i_16 = 3; i_16 < 20; i_16 += 2) 
                    {
                        arr_52 [i_5] [i_16] = ((/* implicit */long long int) var_9);
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) > ((+(-695906184723528769LL)))));
                        var_39 = ((/* implicit */short) 2005052786903115211LL);
                    }
                    for (unsigned char i_17 = 1; i_17 < 21; i_17 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((short) -4328676331275021164LL)))));
                        arr_55 [8] [i_17] [18ULL] [i_6] [i_6] [5] [i_5] = ((/* implicit */unsigned short) var_0);
                        arr_56 [i_17] [i_14] [12] [i_6] [10] = ((/* implicit */unsigned char) (unsigned short)51567);
                    }
                    arr_57 [i_5] [(unsigned char)14] [i_5] [i_5] = var_16;
                    arr_58 [i_5] [i_6] [(unsigned char)6] [(unsigned char)20] [i_6] [i_14] = var_12;
                }
                for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    arr_63 [i_5] [i_5] [(unsigned char)19] [i_5] = ((/* implicit */signed char) var_13);
                    var_41 = ((short) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) (short)-12002))));
                }
                var_42 |= ((/* implicit */signed char) var_2);
                arr_64 [i_5] [15] [i_9 - 1] [12U] = ((/* implicit */int) 2602548954U);
                arr_65 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) (unsigned short)13976);
            }
            for (unsigned char i_19 = 1; i_19 < 21; i_19 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */short) ((175606011631483454ULL) < (((/* implicit */unsigned long long int) 4294967287U))));
                arr_70 [i_5] [21] [(short)3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27260))) & (((unsigned long long int) 536805376)))));
            }
            /* vectorizable */
            for (unsigned char i_20 = 1; i_20 < 21; i_20 += 4) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (unsigned short)10))));
                var_45 = ((/* implicit */unsigned short) var_7);
                /* LoopSeq 4 */
                for (unsigned short i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    arr_76 [i_5] [i_5] [i_20 + 1] [i_21] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 4 */
                    for (int i_22 = 2; i_22 < 18; i_22 += 4) /* same iter space */
                    {
                        arr_80 [(unsigned short)16] [2U] [i_20] [(unsigned char)1] [i_22 - 1] [(unsigned short)16] = ((/* implicit */signed char) 4193792);
                        var_46 = ((/* implicit */long long int) min((var_46), (((long long int) var_9))));
                        var_47 = (unsigned short)0;
                        arr_81 [i_20] [i_21] [i_22] = ((/* implicit */signed char) var_15);
                    }
                    for (int i_23 = 2; i_23 < 18; i_23 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) var_8))));
                        arr_84 [12] [11] [i_20 + 1] [i_21] [11] = ((/* implicit */short) var_2);
                    }
                    for (signed char i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        var_49 = (short)0;
                        var_50 = (+(((/* implicit */int) (unsigned short)28593)));
                        arr_87 [i_5] [i_5] [i_5] [3ULL] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_2);
                    }
                    for (unsigned short i_25 = 2; i_25 < 20; i_25 += 2) 
                    {
                        var_51 = ((/* implicit */signed char) (+(var_0)));
                        var_52 *= ((/* implicit */unsigned int) (+(var_13)));
                        var_53 ^= ((/* implicit */unsigned short) (signed char)9);
                        var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) var_9))));
                        arr_90 [5ULL] [2U] [i_20] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5))));
                    }
                }
                for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) 
                {
                    arr_93 [i_5] [(short)13] [i_20 - 1] [i_20] [i_20 + 1] [i_26] = var_8;
                    arr_94 [i_5] [i_5] = ((/* implicit */unsigned char) var_1);
                    var_55 *= (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_12)))));
                    var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) 3638970717U)))))) >= (((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                }
                for (int i_27 = 0; i_27 < 22; i_27 += 4) 
                {
                    arr_99 [2LL] [2LL] [(short)0] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 536805370)) % (((long long int) var_9))));
                    var_57 = ((/* implicit */unsigned char) var_6);
                    arr_100 [i_27] [i_6] [(short)15] = ((/* implicit */unsigned long long int) 9U);
                    arr_101 [15U] = ((/* implicit */signed char) var_12);
                    var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) (short)-27254))));
                }
                for (unsigned char i_28 = 1; i_28 < 19; i_28 += 2) 
                {
                    var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) (unsigned short)20436))));
                    arr_104 [i_28] [i_5] [2ULL] [i_5] = ((/* implicit */int) ((short) var_15));
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_29 = 0; i_29 < 22; i_29 += 2) 
        {
            arr_109 [i_5] [(unsigned short)0] = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 1 */
            for (unsigned short i_30 = 2; i_30 < 20; i_30 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_31 = 0; i_31 < 22; i_31 += 2) 
                {
                    var_60 -= (unsigned short)50852;
                    var_61 = ((/* implicit */short) ((-6829320342170773402LL) & (((/* implicit */long long int) ((int) var_4)))));
                }
                for (short i_32 = 1; i_32 < 19; i_32 += 2) 
                {
                    var_62 = ((/* implicit */long long int) 14789235597966851815ULL);
                    var_63 = ((/* implicit */long long int) -2147483641);
                    arr_118 [(unsigned char)9] [i_32] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
                }
                for (int i_33 = 2; i_33 < 21; i_33 += 2) 
                {
                    var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
                    var_65 += ((/* implicit */unsigned short) var_15);
                    var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) var_15))))) > (8))))));
                    var_67 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)46466));
                    var_68 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(6741593490166537840ULL))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_34 = 3; i_34 < 21; i_34 += 2) 
                {
                    var_69 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_16))));
                    var_70 = ((/* implicit */short) min((var_70), (((/* implicit */short) 68685922304ULL))));
                }
                /* LoopSeq 3 */
                for (int i_35 = 3; i_35 < 20; i_35 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 2; i_36 < 19; i_36 += 4) 
                    {
                        var_71 = ((unsigned short) (unsigned char)1);
                        arr_131 [i_5] [(signed char)19] [(signed char)19] [i_35] = (signed char)82;
                    }
                    var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))) > (((/* implicit */int) (short)0)))))));
                    var_73 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (signed char)-88)) / (((/* implicit */int) (unsigned short)34235)))));
                    var_74 ^= ((/* implicit */long long int) (unsigned short)20436);
                    arr_132 [i_29] [i_29] [(unsigned short)20] [(short)1] = ((/* implicit */signed char) (unsigned short)65535);
                }
                for (unsigned char i_37 = 0; i_37 < 22; i_37 += 4) 
                {
                    var_75 = ((/* implicit */unsigned long long int) var_4);
                    var_76 -= var_7;
                    var_77 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)18))));
                    var_78 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) + (var_16)));
                }
                for (unsigned int i_38 = 1; i_38 < 19; i_38 += 4) 
                {
                    var_79 = ((/* implicit */int) ((long long int) (unsigned short)45099));
                    var_80 = -2110356194;
                    var_81 = ((signed char) var_13);
                }
            }
            var_82 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
        }
        var_83 += ((/* implicit */unsigned char) var_8);
    }
    var_84 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    for (unsigned int i_39 = 0; i_39 < 17; i_39 += 4) 
    {
        var_85 = ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (unsigned long long int i_40 = 1; i_40 < 14; i_40 += 4) 
        {
            for (int i_41 = 2; i_41 < 14; i_41 += 2) 
            {
                {
                    var_86 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)34363)) >= (((/* implicit */int) (unsigned char)15))));
                    var_87 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483640))));
                    var_88 = ((/* implicit */unsigned short) max((var_88), (((/* implicit */unsigned short) 2147483638))));
                    /* LoopNest 2 */
                    for (unsigned char i_42 = 3; i_42 < 14; i_42 += 4) 
                    {
                        for (unsigned int i_43 = 1; i_43 < 14; i_43 += 4) 
                        {
                            {
                                var_89 = ((/* implicit */int) max((var_89), (((/* implicit */int) var_1))));
                                var_90 = ((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned char) (unsigned short)12))))) >= (((/* implicit */int) (short)-25816))));
                                var_91 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_44 = 0; i_44 < 20; i_44 += 4) 
    {
        var_92 ^= ((/* implicit */unsigned short) 783432444);
        var_93 -= ((/* implicit */short) -483527960780867878LL);
        arr_151 [i_44] [i_44] = ((/* implicit */signed char) 3396335771137415601LL);
    }
}
