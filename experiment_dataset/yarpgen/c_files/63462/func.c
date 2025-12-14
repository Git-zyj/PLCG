/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63462
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) 35869452)), (var_9))))) ? (((/* implicit */long long int) 35869434)) : (((long long int) (short)3847))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [(signed char)6] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((-35869452) <= (((/* implicit */int) var_10)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_12 [(short)3] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) | (((/* implicit */int) (short)(-32767 - 1)))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) ((_Bool) (unsigned char)192)))) : (((/* implicit */int) arr_7 [4U] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_4] [i_0] [(signed char)6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 - 1]))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17235)) >> (((((/* implicit */int) arr_11 [i_4 - 2] [i_4] [i_4 + 1] [i_4] [i_1])) - (31784)))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((signed char) var_0));
                            arr_20 [i_2] [i_4] [(unsigned short)7] [i_4] [i_5] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_12)))));
                            var_18 += ((/* implicit */unsigned int) (signed char)24);
                        }
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            arr_24 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)55)) << (((((/* implicit */int) (unsigned short)64877)) - (64877)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (unsigned short)5165)))) : (((((((/* implicit */int) (short)-32752)) + (2147483647))) << (((((-1770661110486598003LL) + (1770661110486598021LL))) - (18LL)))))));
                            arr_25 [i_2] [i_4] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) 1770661110486598003LL)))));
                            arr_26 [i_4] [i_1] [i_2] [i_4 - 1] [i_6] = ((/* implicit */unsigned short) (-(var_0)));
                        }
                        arr_27 [i_0] [i_1 + 1] [i_4] [i_4 - 2] = ((/* implicit */unsigned int) var_12);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_30 [i_2] [(short)8] [i_2] [i_4] [i_7] = ((/* implicit */int) -7525010311900751558LL);
                            var_19 = ((/* implicit */unsigned char) var_9);
                        }
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((var_7) ? ((-(((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (var_9))))));
                        arr_33 [(unsigned short)2] [i_1] [6ULL] [i_1 - 1] = ((long long int) var_10);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((_Bool)0) ? (((374405221U) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32743))))))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (var_7))))) & (var_0))))));
                        var_23 = ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((4050029449U) - (4050029418U)))))) & (2267220290U));
                    }
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */long long int) min(((unsigned char)208), (((/* implicit */unsigned char) (signed char)-6))))), (var_0))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_25 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)36547)) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((-(13ULL))) >> (((((/* implicit */int) arr_6 [i_1 + 2] [i_10 - 1] [i_10 + 1])) >> (((var_14) + (4199354574839542900LL))))))))));
                            arr_43 [i_0] [i_0] [(unsigned short)5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_14 [i_0] [4LL] [i_2] [i_11]);
                            var_27 |= ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)187)), ((-(((/* implicit */int) (unsigned char)201))))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (unsigned char)93))))))));
                        }
                        var_29 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) - (1520909522U))))), (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32757))) / (2602257536U)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
                    {
                        var_30 += ((/* implicit */signed char) (+(((/* implicit */int) (!(var_7))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)659))) | (-1770661110486597986LL))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 1; i_13 < 8; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) 7769401293218058246ULL)))));
                            var_33 = ((/* implicit */_Bool) (((-(2367972553U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)122))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_53 [(unsigned short)9] [(unsigned short)1] [i_1] [i_14] [(unsigned short)9] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7769401293218058245ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12] [7] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]))) : (3189532450U)));
                            arr_54 [i_1] [i_14] = var_4;
                        }
                    }
                }
                for (unsigned char i_15 = 3; i_15 < 9; i_15 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)248))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747))) > (9207392551963944499ULL)))))));
                    arr_57 [(unsigned char)2] [(unsigned short)4] = ((/* implicit */unsigned short) var_3);
                    var_35 = ((/* implicit */short) min((1291670308U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32719))) > (3787930841U))))));
                }
                for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 1) 
                {
                    var_36 += ((unsigned char) 9239351521745607117ULL);
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (signed char i_18 = 1; i_18 < 8; i_18 += 4) 
                        {
                            {
                                arr_64 [i_16] [i_17] [i_16 - 1] [i_1] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) (_Bool)1)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))));
                                arr_65 [i_16] = ((/* implicit */short) ((((507036455U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_37 = ((/* implicit */short) ((764134260U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44647)))));
                        arr_68 [i_16] [3ULL] [i_1] [i_16] [(signed char)3] = ((/* implicit */short) ((max((-1969218278793214954LL), (1005472293668049937LL))) & (-5952289783763762403LL)));
                    }
                }
            }
        } 
    } 
    var_38 = var_11;
    /* LoopSeq 1 */
    for (short i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        var_39 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)-65)), ((unsigned short)11375)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            arr_74 [i_20] [i_21] = ((unsigned long long int) (unsigned short)11368);
            arr_75 [i_21] = ((/* implicit */short) (!(((((/* implicit */int) arr_72 [i_20] [i_20] [i_20])) > (((/* implicit */int) (unsigned char)128))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            arr_79 [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)41237)) <= (((/* implicit */int) (unsigned short)799))));
            var_40 = ((/* implicit */long long int) ((short) (unsigned short)54161));
            /* LoopSeq 4 */
            for (unsigned short i_23 = 1; i_23 < 9; i_23 += 2) 
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)54163))));
                arr_84 [(_Bool)1] [i_22] [i_20] [(_Bool)1] = ((/* implicit */unsigned char) arr_83 [10ULL] [i_23] [10ULL] [i_20]);
            }
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                arr_89 [i_20] [i_22] [i_24] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11368))) / (2251524935778304LL))) / (((/* implicit */long long int) ((3373518109U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64711))))))));
                /* LoopSeq 1 */
                for (long long int i_25 = 2; i_25 < 10; i_25 += 1) 
                {
                    arr_92 [(_Bool)0] [i_22] [i_22] [i_25] [i_22] = ((/* implicit */short) (+(arr_91 [i_20] [i_25 + 1] [i_25 - 1] [i_25 - 2])));
                    arr_93 [i_24] [10U] [i_24] [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_76 [i_25 + 1] [i_25 - 2] [i_25 - 1])) ? (((/* implicit */int) (unsigned short)54161)) : (((/* implicit */int) (_Bool)1))));
                    var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)54161)))))));
                }
            }
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 1) 
            {
                arr_97 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_22] [i_22] [(unsigned char)4] [i_26])) ? (((/* implicit */int) arr_83 [i_26] [i_26] [i_22] [i_20])) : (((/* implicit */int) var_5))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_81 [(_Bool)1] [i_20] [i_20])) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5151))) != (3466795321044522480LL)))))));
                arr_98 [(unsigned short)4] [i_20] [i_20] |= ((/* implicit */signed char) (unsigned short)37279);
            }
            for (int i_27 = 0; i_27 < 11; i_27 += 1) 
            {
                arr_102 [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)36547)) >> (((((/* implicit */int) (unsigned short)65534)) - (65533)))));
                var_44 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_0)) <= (arr_90 [i_20] [i_22] [i_27])));
                arr_103 [i_20] [i_22] = ((/* implicit */int) ((unsigned short) arr_80 [i_20] [i_20] [i_22] [i_27]));
            }
        }
        arr_104 [i_20] [i_20] = ((/* implicit */unsigned short) min((((unsigned int) 1362657942U)), (min((480642500U), (((/* implicit */unsigned int) (signed char)-30))))));
        arr_105 [i_20] &= ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)27))))), (max((2932309346U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)66)))))))));
    }
    var_45 = ((/* implicit */unsigned char) var_2);
}
