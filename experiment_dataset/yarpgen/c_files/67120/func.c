/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67120
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */int) max((max((658393983U), (13U))), (((/* implicit */unsigned int) ((signed char) max((arr_9 [i_0] [i_1] [i_2] [(signed char)14] [(unsigned short)17] [i_2]), (3636573324U)))))));
                        var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4294967282U) : (658393983U)))) ? (max((arr_9 [i_0] [i_0] [5ULL] [9U] [i_0] [i_0]), (5U))) : (((unsigned int) 18446744073709551615ULL)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3636573312U) > (3669646288U)))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) var_7);
        var_14 -= max((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) -1051801609)))), (max((arr_0 [(_Bool)1] [i_0]), (arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_15 ^= ((arr_12 [i_4]) << (((((((/* implicit */_Bool) (~(arr_12 [0])))) ? (max((((/* implicit */unsigned int) var_10)), (3669646288U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) arr_13 [i_4])))))))) - (3669646274U))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */int) var_10)) - (((/* implicit */int) var_10)))), (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                var_17 = ((((/* implicit */_Bool) 6388032469267766179LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967295U)));
                arr_20 [i_5] = max((min((arr_15 [i_4]), (arr_15 [i_4]))), (((/* implicit */int) var_8)));
            }
            arr_21 [(short)9] [4ULL] [i_5] = ((/* implicit */long long int) (-(var_4)));
            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
        }
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (297400867) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) var_7)) | (9223372036854775807LL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    arr_30 [14U] [14U] [14U] |= ((/* implicit */long long int) arr_29 [i_7] [i_8] [i_7]);
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9])) ? (arr_28 [i_7] [i_7] [i_7] [i_7]) : (arr_3 [i_7] [i_8])))) ? ((+((~(arr_9 [i_9] [i_8] [i_9] [i_9] [i_8] [i_7]))))) : ((+(arr_8 [i_9] [i_8])))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((-8076885722592265427LL), (((/* implicit */long long int) 1417786017))));
                        var_22 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) (unsigned char)243)))));
                    }
                    for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_23 -= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_32 [i_7] [i_7] [i_7] [i_7]);
                            arr_40 [10] [13ULL] [i_9] [i_8] [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7] [(short)17])) ? (658393983U) : (1889088095U)));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12U)) && (((/* implicit */_Bool) ((unsigned int) 2147483647)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) 2147483647);
                            arr_44 [i_13] [i_13] [17ULL] [i_13] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_7] [i_7] [i_7] [i_7] [(_Bool)1])) ? (max((min((((/* implicit */unsigned int) var_1)), (var_4))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -145460718))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (1954483706) : (var_7))), ((-(((/* implicit */int) (unsigned short)7536)))))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            var_26 = (+(((/* implicit */int) (_Bool)1)));
                            arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_31 [i_9]);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_7] [(unsigned short)2] [i_7] [0] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_6))))))))));
                            var_27 = ((/* implicit */unsigned long long int) arr_34 [i_15] [i_11] [0LL] [i_8] [(unsigned char)14]);
                            arr_54 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) 2147483647);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) ((long long int) (unsigned short)58000));
                            arr_57 [i_7] [i_8] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) var_8)) - (114)))))) ? (((((/* implicit */_Bool) min((2864717422U), (((/* implicit */unsigned int) (short)32767))))) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32767))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((arr_9 [9U] [i_9] [i_9] [15U] [17U] [i_9]), (((/* implicit */unsigned int) arr_24 [i_7] [i_8])))))))));
                            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((-189660746758476LL), (min((((/* implicit */long long int) (_Bool)1)), (-189660746758460LL)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)208))));
                            arr_58 [i_7] [i_7] [i_9] [i_11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) -749173958))));
                        }
                        var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (min((((/* implicit */unsigned long long int) arr_3 [i_8] [i_8])), (((var_10) ? (11847004211197946047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_7] [i_7] [i_8] [i_7] [i_9] [i_11]))))))) : (((/* implicit */unsigned long long int) 3750294530U))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 19; i_18 += 3) 
                        {
                            arr_63 [5ULL] [i_17] [i_9] [i_8] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_17] [i_7]), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : ((+(arr_0 [i_7] [i_8])))));
                            arr_64 [12LL] [7U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_17] [i_9] [i_8] [i_7]))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_67 [i_7] [i_8] [i_9] [i_9] [i_19] = ((/* implicit */unsigned int) min((((/* implicit */int) max((((((/* implicit */int) (short)-32752)) > (((/* implicit */int) (signed char)127)))), ((!(((/* implicit */_Bool) arr_55 [i_9] [i_9] [i_9] [i_9] [i_9]))))))), ((+(((/* implicit */int) (_Bool)1))))));
                            arr_68 [i_8] [i_8] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (short)32767)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_13 [i_17]))))));
                        }
                        arr_69 [i_17] [8ULL] [i_8] = ((/* implicit */_Bool) min((((((/* implicit */int) var_9)) << (((arr_25 [i_7]) + (1743091983))))), (max((((/* implicit */int) arr_46 [i_17] [i_8] [i_17] [i_17] [i_8] [i_17])), (arr_25 [i_7])))));
                        arr_70 [(unsigned short)17] [i_17] = ((long long int) (~(max((arr_62 [i_7] [i_7] [i_8] [i_8] [i_9] [i_9] [i_9]), (arr_15 [i_7])))));
                    }
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(-1701208926)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3523342153880648690LL)) ? (707763788) : (2147483647))))))) : (2147483647)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_20 = 1; i_20 < 21; i_20 += 2) 
    {
        var_32 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-32759)), (((((/* implicit */_Bool) (signed char)127)) ? (2419140423782574427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130)))))))) ? (max((var_0), (((/* implicit */unsigned long long int) arr_73 [i_20 - 1])))) : (((/* implicit */unsigned long long int) 242487596)));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            for (short i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                {
                    arr_81 [i_22] [i_20] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(var_0)))))) ? ((+(min((((/* implicit */long long int) 2147483647)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    var_33 += ((/* implicit */unsigned char) (~((+(min((((/* implicit */long long int) arr_80 [i_20] [13ULL] [i_22] [i_20])), (-189660746758460LL)))))));
                    arr_82 [i_20] [i_20 - 1] [2LL] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14767)) ? (max((((/* implicit */unsigned long long int) ((arr_73 [i_21]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)8))))), (((((/* implicit */_Bool) 375032714)) ? (0ULL) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_74 [i_20])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1]))))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 2) 
    {
        var_34 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_83 [i_23] [i_23]))))));
        var_35 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) var_6))))) ? (min((arr_45 [i_23] [i_23] [i_23] [i_23] [i_23]), (((/* implicit */unsigned int) arr_38 [i_23])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL)))))))));
    }
    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            for (int i_26 = 4; i_26 < 10; i_26 += 2) 
            {
                {
                    var_36 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_12 [i_26 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_6))))) : (max((26U), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_97 [i_25] [7LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 1554881899))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9638))) : (((unsigned int) arr_28 [i_24] [i_24] [i_24] [i_24])))))));
                    var_37 ^= ((/* implicit */int) var_0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 12; i_27 += 1) 
        {
            for (unsigned int i_28 = 0; i_28 < 12; i_28 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_29 = 0; i_29 < 12; i_29 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) arr_72 [i_28] [i_24]);
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (unsigned short)51201))));
                    }
                    var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20014))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 2) 
                    {
                        for (unsigned short i_31 = 0; i_31 < 12; i_31 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 4294967295U)) ? (max((((/* implicit */long long int) 4294967295U)), (6700351935774646998LL))) : (((/* implicit */long long int) 2715252756U)))), (((/* implicit */long long int) ((unsigned short) arr_77 [i_31] [i_31])))));
                                arr_110 [1U] [1U] [(unsigned char)7] [i_30] [i_30] [i_28] = ((/* implicit */int) arr_12 [i_27]);
                                arr_111 [i_24] [i_24] [i_24] [i_24] [i_28] = max((max((((/* implicit */unsigned int) var_2)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_28] [(_Bool)1]))) : (var_5))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_98 [i_27])), (arr_28 [i_24] [i_27] [i_28] [i_24])))) == ((-(4294967270U)))))));
                            }
                        } 
                    } 
                    arr_112 [i_28] [i_27] [i_24] [i_28] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(_Bool)1] [i_27] [10LL] [i_27] [i_27] [i_27])) ? (arr_29 [i_24] [12LL] [16LL]) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [19LL])), (var_5)))) && (((/* implicit */_Bool) (signed char)55))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_24])), (arr_61 [(unsigned char)8] [i_24] [i_27] [i_28])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_32 = 1; i_32 < 8; i_32 += 2) 
                    {
                        var_42 = (+(((((/* implicit */_Bool) (signed char)31)) ? (1703899701) : (((/* implicit */int) (short)-32767)))));
                        arr_117 [i_28] [(_Bool)1] [i_28] [i_28] [(unsigned char)1] [i_28] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)23228))))), (min((((((/* implicit */_Bool) 375032714)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_27 [i_24] [i_24] [(unsigned short)1] [i_32])))), (((/* implicit */int) var_6))))));
                    }
                }
            } 
        } 
    }
}
