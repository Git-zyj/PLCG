/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61302
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
    var_13 += ((/* implicit */long long int) ((int) 6394785178776342559LL));
    var_14 = ((/* implicit */int) ((short) (unsigned char)248));
    var_15 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((_Bool) 34355544064ULL))) : (((/* implicit */int) ((_Bool) (-(var_1)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -6331100143724323139LL)))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            arr_13 [(short)16] [i_4] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((_Bool) var_5))))));
                            arr_14 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6394785178776342560LL)) ? (-6394785178776342560LL) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (-734221371852237010LL)))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_18 = ((unsigned short) (+(((/* implicit */int) (short)19269))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_0)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)896))))) : (var_9)));
                            var_20 = ((/* implicit */long long int) 6597069766656ULL);
                            var_21 ^= ((/* implicit */unsigned char) 4294967275U);
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_20 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)124)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (4539628424389459968ULL))) : ((-(var_10)))));
                            arr_21 [i_0] [i_0] [i_1 + 2] [i_2] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (-6768441802053603645LL)));
                        }
                        var_22 *= ((/* implicit */unsigned short) ((unsigned int) (~(-1))));
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = var_3;
        var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6768441802053603644LL)) ? (var_3) : (34355544064ULL))))));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_24 |= ((/* implicit */unsigned short) (-(((var_12) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        arr_35 [i_7] [i_7] [i_8] [i_8] [i_10] |= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                        /* LoopSeq 2 */
                        for (short i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            arr_39 [i_7] [i_7] [i_7] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */int) ((unsigned int) var_9));
                            arr_40 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                            arr_41 [i_7] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) var_0);
                            var_26 = var_3;
                            arr_45 [i_7] [i_8] [i_7] [i_10] [i_12] [i_12] [i_10] = ((/* implicit */_Bool) (+(-6768441802053603644LL)));
                            var_27 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)16629))))));
                            arr_46 [i_7] [i_7] [i_8] [i_7] [i_10] [i_12] = ((/* implicit */unsigned char) 16432384157038615972ULL);
                        }
                        /* LoopSeq 4 */
                        for (int i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12))));
                            arr_50 [i_7] [i_8] [i_8] [i_9] [i_10] [i_10] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)19261))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (2460959084U)));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            arr_53 [i_7] [i_7] [i_9] [i_10] [i_7] = ((/* implicit */unsigned long long int) var_4);
                            var_30 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)158))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)48883)))))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                            var_33 = ((/* implicit */int) var_6);
                        }
                        for (unsigned int i_16 = 2; i_16 < 14; i_16 += 4) 
                        {
                            arr_60 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (6768441802053603648LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_34 -= ((/* implicit */unsigned short) var_12);
                        }
                        arr_61 [i_7] [i_8] [i_8] [i_10] [i_8] [i_8] |= ((/* implicit */signed char) var_3);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                for (unsigned char i_18 = 3; i_18 < 14; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                            var_36 |= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)30))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 34355544064ULL)) ? (((/* implicit */unsigned long long int) 3101807368U)) : (var_3)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)2048))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6331100143724323139LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-112)))))));
            var_39 = ((/* implicit */long long int) (-(2548437458U)));
            /* LoopSeq 3 */
            for (long long int i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                arr_76 [i_7] [i_20] [i_20] [i_7] = ((/* implicit */long long int) ((_Bool) (+(34355544056ULL))));
                arr_77 [i_7] [i_20] [i_7] &= ((/* implicit */unsigned char) (-(var_5)));
                arr_78 [i_20] [i_7] = ((/* implicit */unsigned int) -4313263927166944416LL);
                var_40 |= (+(((/* implicit */int) (signed char)-42)));
            }
            for (unsigned long long int i_22 = 3; i_22 < 13; i_22 += 1) 
            {
                arr_81 [i_7] [i_20] [i_7] = ((/* implicit */signed char) (+(2147483647)));
                /* LoopSeq 2 */
                for (unsigned int i_23 = 0; i_23 < 15; i_23 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_24 = 1; i_24 < 13; i_24 += 3) 
                    {
                        arr_86 [i_24] [i_24] [i_7] [i_23] [i_24] [i_7] [i_7] = (~((~(268435455ULL))));
                        arr_87 [i_7] [i_20] [i_22] [i_24] [i_24] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        arr_88 [i_7] [i_7] [i_20] [i_7] [i_7] [i_23] [i_24] = ((/* implicit */unsigned int) (short)2048);
                        var_41 += (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((+(var_2))));
                        arr_89 [i_7] [i_23] [i_22 - 2] [i_20] [i_7] = var_12;
                    }
                    for (signed char i_25 = 0; i_25 < 15; i_25 += 3) 
                    {
                        arr_92 [i_7] [i_20] [i_23] [i_7] [i_25] [i_7] [i_7] &= ((/* implicit */unsigned short) 5355146863294553358ULL);
                        arr_93 [i_7] [i_20] [i_22] [i_7] [i_25] [i_7] = ((/* implicit */unsigned int) 34355544064ULL);
                    }
                    for (unsigned int i_26 = 2; i_26 < 11; i_26 += 1) 
                    {
                        arr_98 [i_7] [i_20] [i_22] [i_23] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16662)) ? (((/* implicit */int) var_7)) : (2147483647))))));
                        var_42 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1152921504606846464LL)) : (4323455642275676160ULL))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_27 = 2; i_27 < 13; i_27 += 2) /* same iter space */
                    {
                        arr_102 [i_7] [i_22] [i_22] [i_22 + 2] [i_27] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) 14ULL)))));
                        var_43 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (13091597210414998258ULL) : (((/* implicit */unsigned long long int) (~(4072713210U))))));
                        arr_103 [i_7] [i_7] [i_20] [i_22] [i_22] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-9906))));
                        var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)896))));
                    }
                    for (unsigned int i_28 = 2; i_28 < 13; i_28 += 2) /* same iter space */
                    {
                        arr_107 [i_28] |= ((/* implicit */short) var_5);
                        arr_108 [i_7] [i_23] [i_20] [i_20] [i_7] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) var_1)));
                    }
                    var_45 = ((/* implicit */unsigned long long int) (short)-14863);
                }
                for (short i_29 = 0; i_29 < 15; i_29 += 2) 
                {
                    var_46 |= (-(((/* implicit */int) var_12)));
                    arr_111 [i_7] [i_20] [i_22] [i_29] [i_29] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3494837287170623003LL))));
                    var_47 = ((/* implicit */unsigned short) var_4);
                    var_48 *= ((/* implicit */_Bool) (~(-1)));
                }
                arr_112 [i_20] [i_20] [i_20] |= ((/* implicit */_Bool) (+(2013265920)));
            }
            for (unsigned int i_30 = 0; i_30 < 15; i_30 += 4) 
            {
                var_49 = ((/* implicit */unsigned int) (short)-2070);
                /* LoopSeq 1 */
                for (int i_31 = 0; i_31 < 15; i_31 += 1) 
                {
                    arr_117 [i_7] [i_20] = ((/* implicit */unsigned int) var_2);
                    arr_118 [i_7] [i_30] |= ((/* implicit */long long int) (-(var_9)));
                }
                var_50 *= ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                arr_119 [i_7] [i_20] [i_30] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
            }
        }
        for (unsigned char i_32 = 0; i_32 < 15; i_32 += 2) /* same iter space */
        {
            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) var_8))));
            arr_123 [i_7] [i_7] [i_32] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)10)) ? (-1164762019) : (((/* implicit */int) (short)2055)))));
        }
    }
    var_52 = ((/* implicit */unsigned short) min((var_52), ((unsigned short)3072)));
}
