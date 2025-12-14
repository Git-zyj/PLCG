/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99494
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
    var_16 = ((/* implicit */short) var_13);
    var_17 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) -472033348027635262LL)) ? (3206236155U) : (3206236155U))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] |= ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]);
            arr_6 [i_0] [i_0] [i_0] = ((long long int) var_15);
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */signed char) max((((arr_1 [i_0]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_7 [3U])) : (((/* implicit */int) (unsigned short)47053))))))), (((/* implicit */unsigned int) ((int) (unsigned short)41658)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_18 |= ((/* implicit */unsigned char) var_9);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3])) >> (((var_12) - (1297302467000571341LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) : (var_12)));
            }
            var_20 = ((/* implicit */long long int) 13185754399548378763ULL);
            arr_14 [i_0] [7LL] [i_2] |= ((/* implicit */short) max((min((((((/* implicit */_Bool) 5260989674161172852ULL)) ? (-2543512374996737037LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 101405544U)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) (((-(3875010311956122937LL))) >= (((/* implicit */long long int) arr_3 [i_0] [i_2] [i_0])))))));
        }
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_21 |= ((/* implicit */unsigned int) ((12568115877247481250ULL) >> (((((/* implicit */int) (short)-19991)) + (19998)))));
                arr_26 [i_0] [i_0] [i_0] [i_6] |= ((((/* implicit */_Bool) arr_13 [i_5])) ? (min((var_14), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [10LL]))));
                arr_27 [i_0] [i_5] [i_6] [i_6] = ((((((/* implicit */_Bool) 1851825543U)) ? (((/* implicit */unsigned long long int) -2676809327152458343LL)) : (5260989674161172852ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5878628196462070356ULL), (5878628196462070365ULL)))) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) var_5))))));
            }
            var_22 = ((/* implicit */unsigned int) (~((((-(2676809327152458342LL))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_5] [i_0]), (((/* implicit */short) arr_7 [i_0]))))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [0LL])))) ? (((/* implicit */int) min((arr_16 [i_7] [i_0]), (arr_16 [i_0] [i_7])))) : ((+(((/* implicit */int) (unsigned char)63)))))))));
            /* LoopSeq 3 */
            for (int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                arr_33 [i_0] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) (~(((arr_1 [i_0]) >> (((arr_1 [i_8]) - (2674881466U)))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4956))) * ((+(((0ULL) / (2822486758822325139ULL)))))));
                arr_34 [i_0] [(unsigned short)10] [i_7] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_8]);
                arr_35 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_7] [i_8])) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) var_5))))) * (((((/* implicit */unsigned long long int) 613939422)) / (9205357638345293824ULL)))));
                arr_36 [i_7] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3206236155U)) : (15ULL)));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_25 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35373))) / (arr_40 [i_0] [i_7] [i_7] [i_0]))));
                    var_26 = ((/* implicit */unsigned char) arr_22 [i_0]);
                    var_27 = ((/* implicit */long long int) var_6);
                }
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    arr_45 [i_0] [i_7] [i_11] [i_11] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_7])) ? (max((((/* implicit */unsigned long long int) arr_42 [i_7])), (5260989674161172852ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_42 [i_7]), (arr_17 [i_9] [i_9])))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_28 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-70)), ((unsigned char)54)))), (((((/* implicit */_Bool) arr_13 [i_0])) ? (arr_24 [i_0] [i_11] [i_11] [i_11]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (1088731141U))))))));
                        arr_49 [i_11] [i_7] [i_9] [i_11] [i_12] = ((/* implicit */short) (((-(0ULL))) * (((/* implicit */unsigned long long int) ((long long int) arr_44 [i_7] [i_9] [(short)1])))));
                        arr_50 [i_0] [i_7] [i_7] [i_11] [i_7] = ((/* implicit */signed char) arr_7 [i_0]);
                    }
                }
                for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        arr_57 [i_0] [i_7] [i_9] [4ULL] [i_14] [i_9] |= ((/* implicit */short) arr_43 [i_14] [i_14] [i_14] [i_14] [i_14]);
                        var_29 = ((/* implicit */signed char) ((18446744073709551605ULL) - (4398046511103ULL)));
                        arr_58 [i_0] [i_9] |= ((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_12))), (((((/* implicit */int) max((var_4), (((/* implicit */short) var_15))))) * (((/* implicit */int) var_15))))));
                        var_30 = ((/* implicit */int) ((long long int) arr_53 [i_7] [i_7]));
                    }
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        arr_61 [4] [i_7] [4] [i_7] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)4947)) ? (524287) : (((/* implicit */int) (signed char)-21))))))), (min((((/* implicit */unsigned long long int) (unsigned char)201)), (3703788835692327908ULL)))));
                        arr_62 [i_7] = ((/* implicit */signed char) min((((int) ((((/* implicit */_Bool) (unsigned short)30720)) ? (341684277) : (((/* implicit */int) (unsigned short)37366))))), (((/* implicit */int) arr_16 [i_0] [i_0]))));
                    }
                    var_31 = var_2;
                }
                var_32 = ((/* implicit */int) min(((!(((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) var_3))))))), (((((((/* implicit */_Bool) 101405548U)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_3)))) >= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_9])) == (var_2))))))));
                arr_63 [i_0] [i_9] [i_7] = ((/* implicit */unsigned short) min((arr_41 [i_0] [i_0] [i_7] [i_0]), (((/* implicit */signed char) ((min((-2122597121), (((/* implicit */int) arr_46 [i_0] [i_7] [i_9] [i_7])))) >= (((/* implicit */int) arr_54 [i_0] [7LL] [i_0] [i_7] [i_0] [i_0] [i_0])))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                arr_66 [i_0] |= ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_32 [i_0])) : (((((/* implicit */_Bool) arr_53 [i_0] [(unsigned char)4])) ? (((/* implicit */int) (signed char)33)) : ((-(((/* implicit */int) arr_0 [i_16])))))));
                var_33 |= ((/* implicit */long long int) ((unsigned long long int) var_4));
            }
            arr_67 [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)251)))) - (((((/* implicit */int) (short)20466)) + (((/* implicit */int) (unsigned short)64512))))));
        }
    }
    for (short i_17 = 0; i_17 < 14; i_17 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */int) ((short) (~(var_0))));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_53 [i_18] [i_18])) ? (((/* implicit */int) ((unsigned char) 15ULL))) : (((/* implicit */int) arr_10 [i_17] [i_17] [i_18])))) > (((((/* implicit */int) arr_37 [i_17] [i_17] [i_18])) * (((/* implicit */int) arr_37 [i_17] [i_18] [i_18]))))));
            arr_73 [i_18] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_17] [i_17]))) > (var_1)))) + (((/* implicit */int) arr_37 [i_17] [i_17] [i_18]))))) ? (1ULL) : (((/* implicit */unsigned long long int) var_10))));
            var_36 = ((signed char) (unsigned char)37);
            arr_74 [i_17] [i_18] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned short)4957)))))))), (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (unsigned short)3568)) : (((/* implicit */int) (unsigned short)0))))));
            arr_75 [i_17] [i_17] = ((/* implicit */long long int) ((unsigned char) (unsigned short)28879));
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)16380)) != (((/* implicit */int) arr_10 [i_17] [i_19] [i_17])))) ? ((-(var_12))) : (arr_70 [i_17] [i_17] [i_19])));
            /* LoopSeq 2 */
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    var_38 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) >= (0LL)))) * (((/* implicit */int) ((signed char) var_7)))));
                    arr_85 [i_20] [i_19] [i_20] [i_21] = (-((-(16634633978176879076ULL))));
                }
                arr_86 [i_17] [i_19] [i_20] [i_20] = ((/* implicit */signed char) var_3);
                arr_87 [i_17] = ((/* implicit */unsigned short) ((long long int) arr_12 [i_19]));
            }
            for (signed char i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                arr_91 [i_22] [i_19] [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_17] [i_17] [i_22])) & (((/* implicit */int) arr_37 [i_17] [i_17] [i_22]))));
                arr_92 [i_22] [i_22] = ((/* implicit */int) arr_79 [i_17] [i_17]);
                arr_93 [i_22] [i_22] = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
            }
        }
    }
    for (short i_23 = 0; i_23 < 14; i_23 += 4) /* same iter space */
    {
        var_39 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_17 [i_23] [8LL])))) >> (((max((0LL), (((/* implicit */long long int) (unsigned short)60579)))) - (60567LL)))))) : (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)60583))))));
        arr_96 [i_23] |= (unsigned short)60580;
        /* LoopSeq 1 */
        for (signed char i_24 = 0; i_24 < 14; i_24 += 1) 
        {
            arr_100 [i_24] [i_23] [i_23] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned long long int) arr_70 [i_24] [i_23] [i_23]))));
            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_41 [i_23] [i_24] [i_23] [i_23])) : (var_9)))))))));
            arr_101 [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) arr_54 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_24]);
            var_41 = ((var_8) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 840220954))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60580))))) : (((/* implicit */int) arr_32 [i_23]))))) : (((var_0) + (((/* implicit */unsigned long long int) min((var_14), (var_10)))))));
        }
        arr_102 [i_23] [i_23] |= ((/* implicit */unsigned char) ((((arr_47 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]) - (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_23] [i_23] [2ULL] [i_23]))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_23] [i_23] [i_23] [i_23]))) + (var_11)))));
        var_42 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_23] [i_23] [i_23])) ? (((((/* implicit */_Bool) var_4)) ? (arr_9 [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15932))))) : (((/* implicit */unsigned long long int) var_9))))) ? (min((var_9), (((/* implicit */int) (short)-21672)))) : (((((((/* implicit */_Bool) (unsigned short)4956)) ? (((/* implicit */int) arr_53 [i_23] [i_23])) : (((/* implicit */int) arr_13 [i_23])))) * ((+(((/* implicit */int) (unsigned short)60584)))))));
    }
}
