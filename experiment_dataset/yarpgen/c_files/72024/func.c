/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72024
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
    var_14 |= var_12;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 *= ((unsigned long long int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = min((201354197396472588ULL), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_8 [i_1] = var_1;
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_16 = ((unsigned long long int) var_4);
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) && (arr_7 [i_2]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((_Bool) 18245389876313079028ULL));
                    var_19 = ((/* implicit */short) ((unsigned long long int) 201354197396472588ULL));
                    arr_16 [i_4] [i_3] [i_3] [i_3] [i_1] [i_1] = ((short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 201354197396472587ULL))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 201354197396472577ULL)))) && (((/* implicit */_Bool) (short)-30945)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-14952))));
                        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1] [i_1] [i_1] [(short)10] [i_1]) : (((((/* implicit */_Bool) var_10)) ? (201354197396472588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    }
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_23 = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_1]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_3] [i_7] [i_3] [(short)2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) arr_6 [i_3] [i_3]);
                        var_24 ^= ((/* implicit */_Bool) var_2);
                        arr_29 [i_3] = ((/* implicit */_Bool) (~(0ULL)));
                        var_25 = var_10;
                    }
                }
                var_26 *= ((/* implicit */_Bool) 201354197396472587ULL);
            }
            for (short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                arr_33 [i_1] = 10068968523415259169ULL;
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    arr_37 [i_1] [i_1] [i_1] [i_1] [(short)11] = ((((/* implicit */_Bool) 15464781041361125208ULL)) && ((_Bool)0));
                    arr_38 [i_1] [i_1] [i_2] [i_2] [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (arr_27 [(_Bool)1] [i_2] [i_8] [i_2] [i_2] [i_1] [i_8])));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), ((-(201354197396472587ULL)))));
                }
                for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    var_28 ^= 18245389876313079042ULL;
                    var_29 = ((/* implicit */_Bool) ((arr_32 [(short)13] [(short)13] [i_8]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_13)))) : (((/* implicit */int) (short)30944))));
                }
                for (short i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                {
                    arr_44 [i_1] [i_2] [i_1] [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_30 ^= ((/* implicit */unsigned long long int) ((_Bool) 2730965127676370789ULL));
                }
                var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(201354197396472577ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9957150201061602171ULL))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-28089)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(13364293103411708495ULL))))))));
                var_33 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) & (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_1])) ? (4162464438675756408ULL) : (201354197396472588ULL))));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) arr_26 [i_2] [i_2])) ? (((unsigned long long int) var_4)) : (var_0)))));
            }
            arr_48 [i_1] [i_2] &= ((((/* implicit */_Bool) (short)-30944)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (201354197396472588ULL));
        }
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            arr_51 [11ULL] [i_1] [i_1] = ((((/* implicit */_Bool) (short)-10665)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((/* implicit */_Bool) (short)31526)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5805))) : (11810212167560606633ULL)))));
            var_36 *= (_Bool)1;
            arr_52 [i_13] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_1] [i_13] [i_1] [i_1] [i_1] [i_1]))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_10)))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_37 = ((/* implicit */_Bool) (short)-1024);
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (18245389876313079025ULL)));
            var_39 &= ((/* implicit */short) (-(((/* implicit */int) arr_50 [i_14] [i_1] [i_1]))));
            arr_55 [i_14] [i_1] = ((/* implicit */short) 10671030035521457411ULL);
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        {
                            arr_64 [i_15] [i_17] |= ((((/* implicit */_Bool) 13864445904542571881ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((6951628008329841998ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)60))))))) : (999839019374738242ULL));
                            var_40 -= ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_1] [i_1] [i_1] [i_1] [i_14] [i_1]) || (((/* implicit */_Bool) arr_6 [i_16] [i_14])))))) : (((((/* implicit */_Bool) arr_63 [i_17] [i_16] [i_16] [i_15] [i_14] [(_Bool)1])) ? (5082450970297843121ULL) : (3628317689057127115ULL))));
                        }
                    } 
                } 
                var_41 -= ((((/* implicit */_Bool) arr_53 [i_14] [i_1])) ? (14889695191414337008ULL) : (var_1));
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (short)26394))));
                    arr_68 [15ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18001749456941509554ULL)) ? (11124781041477477947ULL) : (13179397941162893745ULL)));
                    /* LoopSeq 2 */
                    for (short i_19 = 0; i_19 < 16; i_19 += 3) /* same iter space */
                    {
                        var_43 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_1] [i_14] [i_1] [i_18] [i_18] [i_19])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (18245389876313079025ULL)))) : (((/* implicit */int) var_9))));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19453)) ? (5267346132546657878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
                    }
                    for (short i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
                    {
                        var_45 -= ((/* implicit */short) (!((_Bool)1)));
                        arr_76 [i_1] [i_1] [i_18] &= ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 13364293103411708494ULL)));
                    }
                    var_46 *= 8550010007018779088ULL;
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_47 *= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (11810212167560606626ULL))))));
                    var_48 &= ((/* implicit */short) (_Bool)1);
                    arr_80 [(short)2] [(short)2] [i_15] [i_21] = ((/* implicit */_Bool) var_1);
                }
                var_49 |= ((/* implicit */short) 11510198280523628031ULL);
            }
            for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                arr_83 [i_1] [i_1] |= ((/* implicit */short) ((((unsigned long long int) var_11)) & (16430644560948384199ULL)));
                var_50 = ((short) (_Bool)1);
                arr_84 [i_1] [i_1] [i_1] = ((unsigned long long int) arr_22 [i_14] [i_1]);
                var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((/* implicit */int) arr_22 [i_1] [i_1])) != (((/* implicit */int) ((((/* implicit */_Bool) (short)-3942)) || (((/* implicit */_Bool) (short)-15466))))))))));
                arr_85 [i_22] [4ULL] [i_1] = ((/* implicit */short) ((5082450970297843121ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_22] [i_22] [i_22] [i_1] [i_22] [i_1] [i_1])) && (((/* implicit */_Bool) var_10))))))));
            }
            for (short i_23 = 0; i_23 < 16; i_23 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    arr_92 [i_23] [i_14] [i_1] [i_24] [i_24] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_23] [i_14] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)2119))))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        arr_96 [i_1] [i_14] [i_1] [5ULL] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)29679))));
                        var_52 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (6167903207643842429ULL))));
                        var_53 = ((_Bool) 12139488625369661060ULL);
                    }
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                {
                    arr_101 [i_23] [i_23] [i_23] [i_14] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((9302749589230763099ULL) & (14120354653674596376ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [1ULL] [i_23] [i_23] [i_23] [i_14] [i_1])))));
                    var_54 = ((/* implicit */unsigned long long int) ((((12278840866065709185ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17187))))) == (arr_86 [i_1] [i_14] [i_23] [i_14])));
                }
                var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 7667278330167966510ULL)) && (((/* implicit */_Bool) (short)-15922))))) != (((/* implicit */int) (short)-15466)))))));
                var_56 = ((var_0) & (var_10));
            }
        }
        arr_102 [i_1] = ((((/* implicit */_Bool) arr_72 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_72 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_72 [i_1] [i_1] [i_1] [i_1] [i_1]));
        var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((((2016099512761167417ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29655))))) ? (((15913308575313681326ULL) / (11568450825904960119ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [12ULL]))) + (7667278330167966510ULL))))))));
        arr_103 [i_1] |= ((/* implicit */_Bool) ((short) arr_7 [i_1]));
        var_58 = ((/* implicit */unsigned long long int) min((var_58), (17744116418654325661ULL)));
    }
    var_59 = ((/* implicit */short) var_1);
    var_60 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (17576960049718309980ULL) : (10600572323446607043ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15913308575313681326ULL)))))) : (18014398475927552ULL))));
}
