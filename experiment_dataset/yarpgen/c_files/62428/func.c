/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62428
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_6 [i_0] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_2 + 1] = ((((/* implicit */_Bool) (-((~(-10)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 17770819982936773458ULL)) || (((/* implicit */_Bool) ((short) (short)32767)))))) : (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))) == (((((-9223372036854775799LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)8))))))));
                        arr_11 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */int) (signed char)-106)), (((((/* implicit */int) (short)32752)) * (((/* implicit */int) var_3)))))));
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)114)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) ? (((arr_1 [i_2 + 1]) << (((((/* implicit */int) (signed char)80)) - (52))))) : (((unsigned int) arr_4 [i_0]))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */signed char) ((min((((6767695847049492606ULL) >> (((-4680321625960437747LL) + (4680321625960437767LL))))), (((/* implicit */unsigned long long int) 1660751525)))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_0] [i_2 - 1])))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((arr_2 [i_0] [i_4]) - (1818570162)))))) * (min((((/* implicit */long long int) arr_13 [i_5] [i_2] [i_1] [i_0])), (2803533425554087378LL))))))));
                            var_15 &= ((/* implicit */short) ((((arr_0 [i_2 + 1]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))) ? (-243446681827548569LL) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)12)), (arr_15 [i_1] [i_2 - 1]))))));
                            arr_19 [i_1] [(short)10] [i_4] [i_5] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [i_1] [i_1]) : (var_4)))) ? ((~(-9223372036854775799LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-8)) : (var_4)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (-1660751545)))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (unsigned char)248))));
                            var_17 = ((/* implicit */unsigned int) arr_17 [i_0] [i_2 + 1] [i_1] [i_0] [i_0]);
                            var_18 ^= ((/* implicit */int) (signed char)8);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_7] [i_4] [i_2 - 1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (signed char)-8)) : (min((max((-536458531), (arr_3 [i_0] [i_0]))), ((~(0)))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] &= min(((-2147483647 - 1)), (min((((((/* implicit */_Bool) 4043206801U)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) (signed char)29)))));
                            arr_26 [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) 2277082558U);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-127)) - (max((((((/* implicit */int) (short)32752)) / (arr_2 [i_7] [i_0]))), (((arr_15 [i_0] [i_1]) / (((/* implicit */int) (signed char)-102))))))));
                            arr_27 [i_7] [5] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [4])))) + (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32752)))))) - (((arr_2 [i_0] [i_2]) | (((/* implicit */int) var_3))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [6] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -43354683)) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) var_3)) ? (-10) : (((/* implicit */int) (_Bool)1))))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520)))));
                        }
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) arr_28 [(_Bool)1] [i_0]);
    }
    for (long long int i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 13; i_10 += 1) 
        {
            for (int i_11 = 2; i_11 < 12; i_11 += 3) 
            {
                {
                    arr_40 [i_11 - 2] [i_9] [14LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((0), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 43354683))))) : (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(9U)))) ? (((/* implicit */int) min((arr_32 [i_9 - 1]), (((/* implicit */short) arr_37 [i_9 - 1] [i_9 - 1] [i_11 + 2] [i_10 - 2]))))) : (min((-4), (2147483647)))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) max((var_22), (min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680))) : ((~(16LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_32 [i_9])))) & (((/* implicit */int) arr_38 [i_9 - 1])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            var_23 ^= ((/* implicit */_Bool) var_7);
            var_24 = ((/* implicit */int) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            arr_43 [i_9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) ^ (((/* implicit */int) (signed char)-102))));
            var_25 = ((/* implicit */unsigned int) 0LL);
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                for (signed char i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    {
                        arr_50 [i_9] [i_9] [i_13] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-29021)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_41 [i_13 + 1]))));
                        var_26 = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        }
        for (int i_15 = 4; i_15 < 13; i_15 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                var_27 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)4095)), (917504)));
                var_28 = ((((/* implicit */_Bool) (short)-32378)) ? (((/* implicit */int) (short)19178)) : (((((/* implicit */_Bool) 4086308908U)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (short)4621)))));
                var_29 = ((/* implicit */long long int) var_10);
            }
            /* vectorizable */
            for (int i_17 = 1; i_17 < 14; i_17 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-30)) / (-1457230011))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_44 [i_9] [i_15 - 1] [i_9]) - (((/* implicit */unsigned int) arr_45 [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1]))))) ? (((/* implicit */long long int) 4294967295U)) : (((-3625482360873708979LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -398375392)) > (((((/* implicit */_Bool) (unsigned char)106)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32755)))))));
            }
            var_33 = ((/* implicit */long long int) ((((long long int) arr_58 [i_15 - 1] [i_9 - 1])) >= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_58 [i_15 - 3] [i_9 + 1])) : (((/* implicit */int) arr_58 [i_15 + 1] [i_9 + 1])))))));
        }
    }
    /* vectorizable */
    for (long long int i_18 = 1; i_18 < 14; i_18 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (signed char)89))));
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((var_4) <= (((/* implicit */int) arr_62 [i_18]))))) : (((/* implicit */int) arr_58 [i_18] [i_18 - 1]))));
        /* LoopSeq 3 */
        for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            var_36 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2889863026U))));
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_18 - 1] [i_18 - 1] [i_19]))) + ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)29)) > (((/* implicit */int) (short)32759)))))))))));
            var_38 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_46 [12] [i_19] [i_19])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (short)(-32767 - 1))))));
        }
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 87988400U)) ? (((/* implicit */long long int) arr_33 [i_18])) : (129461548130742740LL)))) ? (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) : (-945787465968548511LL))) : (((-5471522951584370294LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-102)))))));
            var_40 = ((/* implicit */_Bool) (~(((5471522951584370284LL) & (-1350871400641052556LL)))));
        }
        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 4) /* same iter space */
        {
            var_41 *= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (short)32759)) ? (-398375392) : (((/* implicit */int) arr_61 [i_21])))));
            /* LoopSeq 1 */
            for (unsigned int i_22 = 0; i_22 < 15; i_22 += 3) 
            {
                var_42 = ((/* implicit */long long int) (((((_Bool)1) || (((/* implicit */_Bool) 87988400U)))) ? (-398375392) : (((/* implicit */int) arr_62 [i_18]))));
                var_43 = ((/* implicit */unsigned long long int) ((unsigned char) ((36028788429029376LL) & (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_21]))))));
            }
        }
        var_44 = ((/* implicit */long long int) min((var_44), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40918))) | ((~(var_8)))))));
    }
    var_45 = ((/* implicit */signed char) 17163049542676912276ULL);
    /* LoopNest 2 */
    for (unsigned short i_23 = 3; i_23 < 16; i_23 += 3) 
    {
        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
        {
            {
                var_46 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_75 [i_23 - 1])), (398375387)))) ? (((((/* implicit */_Bool) (short)-32727)) ? (((/* implicit */int) (short)32726)) : (((/* implicit */int) arr_79 [i_23 - 1])))) : (((/* implicit */int) ((((/* implicit */long long int) 3U)) != (-2372495750189812761LL)))));
                var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (((~(398375382))) | ((~(((((/* implicit */int) (_Bool)1)) | (1359165759))))))))));
            }
        } 
    } 
    var_48 = ((((/* implicit */_Bool) (short)-32727)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-36028788429029379LL) : (var_11)))) ? (((((/* implicit */_Bool) (unsigned short)2370)) ? (((/* implicit */int) (unsigned short)510)) : (((/* implicit */int) (unsigned short)2047)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)54764)) : (958026293)))))));
    var_49 = min(((short)32767), ((short)-1));
}
