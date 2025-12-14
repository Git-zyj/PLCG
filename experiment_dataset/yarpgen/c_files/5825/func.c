/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5825
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
    var_10 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -25LL)) ? (((/* implicit */int) (unsigned short)127)) : (2147483647))))))), ((((!(((/* implicit */_Bool) var_2)))) ? (min((var_2), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 140737219919872LL)) ? (((/* implicit */unsigned long long int) -1691949299)) : (var_2)))) ? (((((/* implicit */_Bool) 9976459852134817847ULL)) ? (14864528176625261618ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (140737219919881LL) : (arr_1 [i_0])))))) >> (((var_3) - (3377693574U)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            arr_5 [i_0] [i_1 + 1] [i_0] = var_4;
            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))) != (var_2)));
        }
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) var_6))))));
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (1103648257) : (((/* implicit */int) (signed char)-4))))) != ((((_Bool)1) ? (((/* implicit */unsigned long long int) 0)) : (5450819040427299785ULL)))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8064ULL))) : (((/* implicit */unsigned long long int) -6690166002589903800LL))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)31809)) : (((/* implicit */int) (unsigned char)43)))), ((+(var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((2147483647) >= (var_4))))))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_15 ^= ((/* implicit */long long int) ((140737219919902LL) != (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)212)))) || (((/* implicit */_Bool) 17ULL))))))));
                    var_16 = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_4) ^ (var_8)))))))));
                    arr_23 [i_4] [i_6] = ((/* implicit */int) min((max((((/* implicit */long long int) (_Bool)1)), (1099511627775LL))), (((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)-12)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 140737219919902LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (unsigned short)59478)) ? (3582215897084290007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */signed char) 2147483635);
                        arr_26 [i_7] [i_6] [i_6] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) var_7))))));
                    }
                    arr_27 [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (unsigned short)60789);
                }
                arr_28 [i_5] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(2927827325364287335LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))) ? (((/* implicit */int) (unsigned short)11176)) : (((/* implicit */int) (!(((-140737219919881LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((3442240298268191950ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)102)))))))))))));
                arr_29 [i_3] [i_4] [i_5] [i_5] = ((int) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_5]))));
            }
            for (signed char i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_4] [i_8 + 1] [i_8 + 3] [i_8 + 1]))) ? (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_10 [i_8 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (6735727554563245735ULL))) : (((/* implicit */unsigned long long int) 1006632960))));
                arr_32 [i_3] [i_8] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_8 + 2] [i_4])), ((unsigned short)59323)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11711016519146305881ULL)))))));
                var_21 = ((/* implicit */signed char) ((((var_8) / (arr_14 [i_8 + 4] [i_8 + 4]))) != ((-(var_7)))));
                arr_33 [i_3] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (max((18128770775186173813ULL), (((/* implicit */unsigned long long int) (short)24518))))));
            }
            for (long long int i_9 = 3; i_9 < 11; i_9 += 4) 
            {
                var_22 = ((/* implicit */_Bool) var_9);
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)29593))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || ((_Bool)1))))))))));
            }
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_35 [i_3] [i_10]))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_10 [i_10]))));
        }
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)29593))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (-1761331824592494792LL)))) <= (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -1)) : (var_1))) | (var_1))))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_27 = ((/* implicit */long long int) var_6);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_8)))))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(12787662423482755582ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (arr_48 [i_11] [i_12] [i_13] [i_14]) : (13256470890366310523ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ^ (var_2)));
        }
        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            arr_52 [i_11] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24523)) ? (min((((/* implicit */unsigned long long int) 480U)), (((var_1) >> (((((/* implicit */int) var_0)) + (137))))))) : ((~(1ULL)))));
            var_31 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11]))) : (arr_38 [i_11] [i_15])))));
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) arr_43 [i_17]);
                        var_33 = ((/* implicit */int) ((unsigned short) 5190273183343241097ULL));
                        var_34 = ((/* implicit */signed char) max(((((((_Bool)1) ? (11711016519146305872ULL) : (((/* implicit */unsigned long long int) arr_51 [i_15] [i_16])))) ^ ((+(var_9))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3667075256252207159LL) > (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_11]))))))) : ((~(9441724085475263952ULL)))))));
                        var_35 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_11] [i_15] [i_16] [i_17])) / (((/* implicit */int) (unsigned char)15))))) : (arr_38 [i_15] [i_16]))));
                    }
                } 
            } 
            arr_59 [i_11] [i_15] &= ((((/* implicit */_Bool) min((min((var_2), (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))) ? (max((8704982137853887797ULL), (((/* implicit */unsigned long long int) arr_55 [i_11])))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_42 [i_11] [i_15] [i_15])), (-1641092617)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_11] [i_11] [i_15] [i_15])))))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) -1)))))));
            var_36 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_11] [i_11] [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15] [i_15] [i_11]))) | (var_3)))))));
        }
        arr_60 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)24530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_11] [i_11] [i_11]))) : (12531578973830166428ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -429418922)) < (4095LL))))) : ((+(min((5382917268356120763LL), (((/* implicit */long long int) var_0))))))));
        /* LoopSeq 4 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_65 [i_11] [i_18] = ((4922986041598790583LL) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_18] [i_18] [i_18] [i_11] [i_11] [i_11])))))));
            var_37 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : ((+(var_2))))))));
        }
        for (signed char i_19 = 4; i_19 < 18; i_19 += 3) 
        {
            var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_5)))))))));
            arr_69 [0] |= (((!(((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_11] [i_11] [i_19 + 4]))) < (-4096LL))))) ? ((~(((/* implicit */int) (signed char)57)))) : (((((/* implicit */_Bool) 1069547520)) ? (((/* implicit */int) (short)-24519)) : (666388451))));
            var_39 = ((/* implicit */int) max((var_39), ((-(((/* implicit */int) ((((/* implicit */int) arr_62 [i_19 + 2] [i_19 + 1])) < (((/* implicit */int) arr_62 [i_19 + 2] [i_19 + 2])))))))));
        }
        /* vectorizable */
        for (signed char i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((((/* implicit */int) (short)-24519)) + (2147483647))) << (((((unsigned long long int) (_Bool)1)) - (1ULL))))))));
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_42 [i_11] [i_11] [i_20]))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_74 [i_21] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (arr_51 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_21])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_44 [i_11] [i_21])) : (((/* implicit */int) (_Bool)1))))) ? (136339441844224LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18370)))))));
            var_42 += ((/* implicit */signed char) min((max(((_Bool)1), (arr_57 [i_11] [i_21] [i_11] [i_11]))), (((_Bool) var_9))));
        }
    }
    var_43 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6274920245335952761LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)13))) : (9223372036854775807LL)))) : ((~(var_1))))), (((/* implicit */unsigned long long int) var_8))));
    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_6)) ? (min((var_9), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(67108608)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) <= (((((/* implicit */_Bool) 911693813)) ? (var_9) : (var_9)))))))))));
}
