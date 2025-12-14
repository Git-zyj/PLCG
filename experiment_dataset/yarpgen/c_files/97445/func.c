/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97445
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
    var_17 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62129)) ? (-922750224) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (270849614)))))) + (max((((long long int) arr_0 [i_0 + 2] [i_1])), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32081))))))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    var_19 = -1647725094;
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(arr_2 [(unsigned short)8] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18130)) / (-930228744))))))) ? ((-(max((((/* implicit */long long int) var_5)), (-8159260623896649992LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_4 [i_0 + 1] [i_0 - 2] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) == (arr_4 [i_0 - 1] [i_0] [i_0 + 1]))))) : (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_3] [i_2] [i_1]) : (var_3)))));
                    var_22 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) != (min((((/* implicit */long long int) var_14)), (-5821043787871330261LL)))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_14))));
                }
                for (int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 1] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1] [i_1 + 2]))))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1] [i_1 + 2])))) : (((/* implicit */int) min(((unsigned short)9581), (((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_0] [i_0 - 1] [i_1 + 2])))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_1] [i_5])) ? (min((((/* implicit */long long int) 41954595)), (-8159260623896649991LL))) : (((/* implicit */long long int) arr_17 [i_0] [i_1 - 2] [i_5]))));
                        var_25 = ((/* implicit */long long int) arr_11 [i_0 + 1] [i_0 - 2]);
                        var_26 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 + 1] [i_1 + 2])) || (((/* implicit */_Bool) var_7))))));
                        var_27 += ((/* implicit */unsigned short) 41954595);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_28 = (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_6] [i_4] [i_1] [i_0])) < (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                        var_29 &= ((/* implicit */short) var_10);
                        arr_23 [i_6] [i_4] [i_2] [i_2] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 1])) < (((/* implicit */int) (short)10639))));
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((long long int) ((short) arr_2 [i_7] [(short)8]))) << ((((-(((((/* implicit */_Bool) 8378768916640515645LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 3]))))) + (51LL)))));
                        var_31 = ((/* implicit */short) min((min((((/* implicit */int) (unsigned short)1023)), (((((/* implicit */int) (short)5097)) | (((/* implicit */int) arr_1 [i_4] [(short)0])))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7] [i_1] [i_1] [i_4] [i_1] [i_4])))))))));
                        var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_2])) ? (arr_0 [i_4] [i_0 - 2]) : (((-9171722203702617725LL) | (((/* implicit */long long int) arr_24 [i_0] [(short)10])))))), (((/* implicit */long long int) ((((long long int) -1851072020)) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_0 - 2] [i_1 + 1] [i_2] [i_4] [i_7]) < (((/* implicit */long long int) var_15)))))))))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) (short)2320))));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)12747)) : (((/* implicit */int) var_6))));
                }
                var_35 ^= ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) arr_11 [i_0] [i_0])))), ((+(((/* implicit */int) (unsigned short)65535)))))) | (((/* implicit */int) ((unsigned short) max((15LL), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) 831004631);
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    arr_36 [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_10]);
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        var_37 = arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_1 - 1];
                        arr_39 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */int) ((short) 41954595))) < (((/* implicit */int) ((((/* implicit */int) (short)32745)) >= (-360188254))))));
                        arr_40 [i_11] [3LL] [i_9] [i_1] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) (short)3))))));
                    }
                    var_38 ^= (unsigned short)26511;
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) (-((-(((/* implicit */int) arr_37 [i_0 + 2] [i_1] [i_12] [i_13]))))));
                            var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_1 + 2] [i_1] [i_9] [i_0 + 3] [i_13] [i_9]))));
                            var_41 = (-(arr_25 [i_13] [i_12] [i_9] [i_0] [i_0]));
                        }
                    } 
                } 
            }
            for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */long long int) ((-1605878545) >= (var_7)));
                var_43 = (~(1138803639));
                var_44 = ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_14] [i_0 + 3] [i_0 + 3] [i_0])) ? (((/* implicit */int) (unsigned short)13343)) : (((/* implicit */int) (short)-5098))))), (min((((/* implicit */long long int) (short)-885)), (-9171722203702617723LL))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_4 [i_14] [i_1] [i_0])))) ? (((/* implicit */int) var_13)) : (((int) -6631290483191722071LL)))))));
            }
            var_45 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) 1605878544)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_0 + 2] [i_1] [i_0] [i_1 + 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) -2585525704486809564LL))))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1]))))) ? ((~(var_3))) : (max((arr_9 [i_1] [i_1] [i_1] [i_0] [8] [8]), (((/* implicit */long long int) (short)255))))))));
        }
        for (short i_15 = 4; i_15 < 10; i_15 += 1) 
        {
            var_46 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) -41954596)) ? (((/* implicit */long long int) -1647725094)) : (-3539562115079546181LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)7776)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_15] [(unsigned short)10]))))))) >= (((/* implicit */long long int) ((/* implicit */int) min((var_9), (arr_44 [i_0 + 3] [i_15 + 3] [i_15])))))));
            arr_53 [i_15] [i_15] = ((/* implicit */unsigned short) var_9);
        }
        var_47 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_0 + 3] [i_0] [i_0])))) <= (min(((+(-619211874))), (((/* implicit */int) var_12))))));
        var_48 |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_0 - 2] [i_0 + 1] [i_0 + 1])) < (1125899906842623LL))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_16 = 2; i_16 < 10; i_16 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            var_49 ^= ((/* implicit */short) min((((((/* implicit */_Bool) 1061325505138497561LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11813))) : (5652901694366423070LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_16 + 2] [i_16] [i_17])) ? (arr_56 [i_16 - 1] [i_16] [i_16]) : (-1252242779))))));
            /* LoopSeq 3 */
            for (int i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    var_50 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)37908)) < ((+(arr_25 [i_16 - 2] [i_18] [i_18] [i_18] [i_18])))));
                    var_51 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_16] [i_16] [12] [i_16 + 1] [i_16 - 1] [i_16 - 2]))) < ((-(arr_62 [i_16] [i_17] [i_17] [i_17])))))) != (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)53722))))))));
                    var_52 = ((/* implicit */long long int) var_13);
                }
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((long long int) arr_38 [i_16] [i_21] [i_16] [i_16] [i_16 - 2] [i_16 - 2])))));
                        var_54 = ((/* implicit */int) ((arr_12 [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_16 + 2]) < (((/* implicit */long long int) ((/* implicit */int) (short)1752)))));
                        var_55 = ((/* implicit */unsigned short) (((-(-1))) < ((+(((/* implicit */int) (short)5020))))));
                        var_56 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)44655)) != (((/* implicit */int) (short)-32646))));
                    }
                    arr_69 [i_17] [i_17] [i_18] [i_20] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                }
                var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) ((((/* implicit */_Bool) (~(min((1250699136074575462LL), (-7018001259159545921LL)))))) ? (((var_3) / (((/* implicit */long long int) ((((/* implicit */_Bool) 284927135075314197LL)) ? (((/* implicit */int) arr_37 [i_18] [i_17] [i_17] [i_16])) : (((/* implicit */int) (short)7))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1252242779)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (short)255)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_17] [i_17]))))) : (((/* implicit */int) (unsigned short)51258))))))))));
                var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((((/* implicit */_Bool) max((-1496044742), (((/* implicit */int) ((unsigned short) (unsigned short)44655)))))) ? (((/* implicit */int) (((+(-4015104611099059085LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (1496044742) : (arr_68 [i_17] [i_16 + 2]))))))) : (((/* implicit */int) arr_48 [i_18] [i_18] [i_17] [i_16])))))));
            }
            for (int i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
            {
                var_59 = ((/* implicit */long long int) var_0);
                var_60 = 288230376151711743LL;
                var_61 = ((/* implicit */short) var_7);
            }
            for (long long int i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                var_62 = ((/* implicit */unsigned short) (+(((((3397623228518743165LL) - (((/* implicit */long long int) var_8)))) >> (((arr_34 [i_16 + 2]) - (5686827831126411698LL)))))));
                var_63 = ((/* implicit */int) max((((((/* implicit */_Bool) (+(-1)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)23420))))) : (arr_30 [i_16 + 1] [i_23] [(short)6] [i_23]))), (max((min((-8086392227667034887LL), (((/* implicit */long long int) (short)7936)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -288230376151711744LL)) ? (var_11) : (((/* implicit */int) (short)-1)))))))));
            }
            arr_76 [i_17] [i_17] = min((((((long long int) arr_16 [i_16] [i_16] [i_16] [8] [i_16] [0])) >> (min((0), (var_11))))), (var_4));
        }
        for (int i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) arr_13 [(short)10] [(short)10] [i_16] [i_24]))));
            var_65 |= ((/* implicit */int) (+(-6760193293905451475LL)));
            var_66 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) < (min((((/* implicit */long long int) var_7)), (var_4))))));
            arr_79 [i_16] [i_24] = 9171722203702617725LL;
            var_67 = ((((/* implicit */_Bool) (+(557385748)))) ? (((/* implicit */int) (unsigned short)18476)) : (((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) ((0) == (832700918)))) : (((/* implicit */int) (short)12)))));
        }
        var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_32 [i_16 + 1] [i_16 + 1] [i_16 - 1] [1])) ? (((/* implicit */int) (unsigned short)52850)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((short) 540401954))))))))));
        /* LoopSeq 1 */
        for (long long int i_25 = 0; i_25 < 12; i_25 += 3) 
        {
            var_69 = ((/* implicit */int) min((var_69), ((~(((/* implicit */int) ((short) arr_7 [i_16 + 2])))))));
            var_70 &= ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_21 [i_25] [i_25] [i_16] [i_16] [i_16] [i_16])) == (((/* implicit */int) arr_21 [i_16 + 2] [i_16 + 2] [i_16 + 2] [i_16] [i_16 + 2] [i_16])))));
        }
    }
}
