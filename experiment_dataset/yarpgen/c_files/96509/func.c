/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96509
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_19 *= ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_5 [i_1 - 2]))), (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 1])))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 -= (_Bool)1;
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_9))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((long long int) (_Bool)1));
                            arr_22 [i_7] [i_7] [i_6] [i_4] [i_5] [i_7] [i_0] = ((/* implicit */unsigned char) var_18);
                            arr_23 [i_7] [i_7] [i_5] [i_6] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((-6453562719366837529LL) / (((/* implicit */long long int) ((/* implicit */int) min(((short)-6230), (((/* implicit */short) (_Bool)1)))))))) + (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (short)6246)), (arr_21 [i_0]))))))));
                            arr_24 [i_0] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((short) min((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) arr_9 [i_0] [i_6] [i_0] [i_0])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)-6237))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-6232)) * (((/* implicit */int) (short)32767)))) / (((/* implicit */int) var_3)))) / (((/* implicit */int) ((short) 9223372036854775807LL)))));
            arr_25 [i_0] [(short)3] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_3 [i_4 - 2] [i_4 - 2]), (arr_3 [i_4 + 2] [i_4 - 1])))), (((((/* implicit */int) arr_3 [i_4 + 2] [i_4 - 2])) | (((/* implicit */int) arr_3 [i_4 + 1] [i_4 - 2]))))));
        }
        arr_26 [i_0] = ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (short)32767)), (9223372036854775807LL)))))) ? (max((var_7), (min((var_13), (var_14))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_21 [i_0])))));
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 7LL))));
        var_24 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            arr_30 [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_0])) || (((/* implicit */_Bool) arr_17 [i_0] [i_8])))));
            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_8] [i_8] [i_0])), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_8))), (((/* implicit */unsigned long long int) ((short) var_16)))))));
            arr_31 [i_0] = ((/* implicit */unsigned int) max((min((min((var_5), (var_12))), (((((/* implicit */_Bool) (unsigned char)134)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) min((arr_7 [i_8]), (((/* implicit */short) ((var_2) && (((/* implicit */_Bool) var_1))))))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_8])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57601)) || (((/* implicit */_Bool) max((1LL), (((/* implicit */long long int) var_4))))))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */long long int) arr_28 [i_9] [i_0]);
            var_28 = ((/* implicit */unsigned short) arr_12 [i_0] [i_9] [i_9] [i_0]);
            var_29 = ((/* implicit */short) min((var_29), (arr_12 [i_9] [12LL] [i_0] [i_0])));
        }
        for (short i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    {
                        var_30 = ((/* implicit */short) (unsigned char)69);
                        arr_41 [i_12] [i_10] [i_10] [i_0] = (~(max((((/* implicit */long long int) ((unsigned char) (_Bool)1))), (((long long int) (short)-6243)))));
                        arr_42 [i_0] [i_10] [i_0] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_11 [i_10] [i_11] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_10 [i_11])))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_10]))) - (-3919187547715594024LL)))));
                        var_31 -= ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_10] [i_0]))), (((unsigned long long int) 13536925849981143465ULL))));
            arr_43 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((short) var_18));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) arr_33 [i_0]);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0] [i_10] [i_13])), (-3919187547715594028LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-6241))))) : (((2089341570694711471LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_15 = 1; i_15 < 10; i_15 += 3) 
    {
        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_16)))));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                {
                    arr_58 [i_15] [i_15] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_17])) || (((/* implicit */_Bool) arr_29 [i_17])))));
                    var_36 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
    {
        arr_63 [i_18] [i_18] = ((/* implicit */_Bool) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
        var_37 = 6449204761798094416LL;
        /* LoopSeq 2 */
        for (short i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            arr_67 [i_18] [i_19] = ((/* implicit */long long int) (unsigned short)0);
            arr_68 [i_19] = ((/* implicit */short) var_15);
        }
        for (short i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            var_38 = ((/* implicit */short) (!(var_4)));
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */int) arr_59 [i_18])) <= (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                arr_74 [i_18] [i_20] = ((/* implicit */short) max((9223372036854775807LL), (((/* implicit */long long int) (-(((arr_69 [i_18]) >> (((arr_70 [i_18] [i_20]) - (6557179728547144780LL))))))))));
                var_40 = ((/* implicit */long long int) arr_45 [i_18] [i_20] [i_18] [i_18]);
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 18; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */short) min((var_5), ((-9223372036854775807LL - 1LL))));
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
                            var_43 -= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) : (((/* implicit */int) ((short) (unsigned char)134)))));
                            var_44 = min((-8447957648203204611LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_20] [i_21])) && (((((/* implicit */_Bool) arr_6 [i_18] [i_20])) || (((/* implicit */_Bool) arr_64 [i_18]))))))));
                        }
                    } 
                } 
                arr_82 [i_18] [i_21] = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) arr_48 [i_20] [i_20])))))), ((~(((/* implicit */int) (unsigned short)6))))));
            }
            var_45 = ((/* implicit */short) ((((/* implicit */long long int) arr_69 [i_18])) & (max((min((3919187547715594023LL), (((/* implicit */long long int) (unsigned char)134)))), (var_12)))));
            var_46 = ((/* implicit */unsigned char) min((((arr_73 [i_20] [(unsigned short)15] [(unsigned short)15]) / (((/* implicit */long long int) arr_45 [i_18] [i_20] [i_18] [8ULL])))), (((/* implicit */long long int) ((short) (short)-10976)))));
        }
    }
    for (unsigned short i_24 = 0; i_24 < 18; i_24 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [i_24])))) && (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 3919187547715594038LL)), (14235579689274957886ULL))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) arr_46 [i_24] [i_24])))))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_25 = 0; i_25 < 18; i_25 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_26 = 0; i_26 < 18; i_26 += 1) 
            {
                for (unsigned short i_27 = 0; i_27 < 18; i_27 += 1) 
                {
                    {
                        arr_93 [i_24] [i_24] [i_24] [i_25] [(unsigned char)9] [i_27] = ((long long int) var_5);
                        arr_94 [(unsigned char)14] [i_25] [(unsigned char)9] [i_25] [i_24] [i_24] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_79 [i_24] [i_25] [i_25] [i_25]))));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) arr_80 [i_25] [i_25] [i_25] [i_25] [i_24] [i_24] [i_24]))));
            var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_25] [i_24]))));
            /* LoopNest 2 */
            for (long long int i_28 = 0; i_28 < 18; i_28 += 2) 
            {
                for (long long int i_29 = 0; i_29 < 18; i_29 += 2) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_60 [i_25] [i_25]))));
                        var_51 = arr_77 [i_24] [i_24] [i_28] [i_29] [i_24];
                        var_52 += ((/* implicit */_Bool) ((var_1) / (arr_90 [i_24] [i_25] [i_25] [i_29] [i_29] [i_29])));
                        var_53 = var_10;
                    }
                } 
            } 
        }
        for (unsigned char i_30 = 0; i_30 < 18; i_30 += 2) 
        {
            var_54 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) -7418072183079017021LL)) || (((/* implicit */_Bool) 18446744073709551609ULL)))));
            var_55 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [i_30] [i_30] [i_24] [i_30]))))), (max((arr_15 [i_24] [i_30] [i_30]), (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (var_14))))))));
            arr_104 [i_30] [i_24] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_2)), (max((var_6), (((/* implicit */long long int) var_0))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_31 = 0; i_31 < 18; i_31 += 4) 
            {
                arr_109 [i_24] [i_24] [i_24] [17U] = (~(var_12));
                var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) << (((9223372036854775806LL) - (9223372036854775806LL))))))));
                /* LoopNest 2 */
                for (short i_32 = 0; i_32 < 18; i_32 += 2) 
                {
                    for (unsigned short i_33 = 0; i_33 < 18; i_33 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((arr_90 [i_33] [i_33] [i_24] [i_31] [i_30] [i_24]) + (5580102505638363690LL)))));
                            var_58 = ((/* implicit */short) ((((/* implicit */int) (short)-27220)) ^ (((/* implicit */int) ((short) 6135472668426307699LL)))));
                            arr_116 [(unsigned char)17] [i_30] [i_31] [i_32] [i_33] = ((/* implicit */short) (~(22LL)));
                        }
                    } 
                } 
                var_59 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2339895814415360072LL) <= (-2339895814415360047LL))))) / (14235579689274957886ULL)));
            }
            for (unsigned char i_34 = 0; i_34 < 18; i_34 += 4) 
            {
                var_60 -= ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) var_12)) - (var_8)))))) && (((/* implicit */_Bool) ((unsigned char) var_18))));
                arr_119 [i_30] [i_34] = ((/* implicit */unsigned char) var_12);
                var_61 = ((/* implicit */long long int) max((var_61), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((9ULL) != (var_8))))) == (((-7418072183079017010LL) ^ (4713550710632144336LL)))))) > (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)25594)))))))))));
                arr_120 [i_24] [i_24] [i_34] [i_34] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)240)) > (((/* implicit */int) (short)6556)))))) != (((/* implicit */int) (unsigned short)152))));
                var_62 -= var_2;
            }
        }
        /* vectorizable */
        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
        {
            var_63 &= ((/* implicit */long long int) (short)30462);
            /* LoopSeq 1 */
            for (short i_36 = 0; i_36 < 18; i_36 += 3) 
            {
                arr_128 [i_36] [i_35] = ((/* implicit */long long int) ((short) var_1));
                var_64 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_80 [10U] [(short)10] [4U] [i_35] [i_36] [i_36] [i_36])) | (((17696570213565734345ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_97 [i_36] [16ULL] [i_35] [i_35] [i_24] [i_24])))))));
                /* LoopNest 2 */
                for (long long int i_37 = 2; i_37 < 15; i_37 += 2) 
                {
                    for (long long int i_38 = 0; i_38 < 18; i_38 += 1) 
                    {
                        {
                            arr_135 [i_35] [i_38] [i_36] [i_35] [i_38] [i_24] = ((/* implicit */unsigned char) (short)-30073);
                            var_65 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */unsigned long long int) arr_76 [i_37 - 1] [i_37 + 1])) : (arr_84 [i_37 + 3])));
                        }
                    } 
                } 
                var_66 = ((/* implicit */long long int) (-(((/* implicit */int) arr_86 [i_24] [i_35] [i_36]))));
                var_67 = ((/* implicit */short) 18446744073709551615ULL);
            }
            var_68 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1146143723205628526LL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)137))));
        }
        var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_95 [i_24] [i_24]))) << (((((unsigned int) arr_17 [i_24] [i_24])) - (3273003601U)))));
    }
    var_70 += var_1;
}
