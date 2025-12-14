/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79230
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((signed char) arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) -25);
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((unsigned long long int) arr_3 [i_0])))))));
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_14 ^= ((/* implicit */long long int) (!(((_Bool) arr_3 [i_0]))));
            var_15 *= ((/* implicit */short) ((unsigned long long int) arr_8 [i_0] [i_0] [i_0]));
        }
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */int) (short)27190);
        arr_9 [i_0] [(_Bool)1] &= ((/* implicit */unsigned short) (~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 14LL)))) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3])))));
        arr_14 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)10))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            {
                arr_19 [i_4] [i_5] [i_4] |= (!(((/* implicit */_Bool) (unsigned short)65005)));
                var_18 ^= ((/* implicit */unsigned short) (_Bool)1);
                arr_20 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned long long int) min(((short)-11294), (max(((short)-11271), (((/* implicit */short) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_19 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_31 [i_7] [i_6] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)11294)))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)(-127 - 1)))))))) : (max((((/* implicit */unsigned long long int) min(((unsigned short)65516), (((/* implicit */unsigned short) arr_27 [i_6] [i_7]))))), (((arr_21 [i_6]) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [(unsigned short)3] [i_6]))))))));
                        var_20 = (unsigned short)19;
                    }
                } 
            } 
        } 
        var_21 = (!(((/* implicit */_Bool) (unsigned short)33757)));
        /* LoopSeq 3 */
        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_22 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (~(-6751477820526292283LL)))), ((~(arr_22 [i_6] [i_6])))))));
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(6751477820526292283LL)))) ? ((+(arr_25 [i_10]))) : (((/* implicit */unsigned long long int) (-(-1590313111468081954LL))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_33 [i_6] [i_10])), (arr_26 [i_6] [i_6])))) ? (((unsigned long long int) (_Bool)1)) : (4676714649012171769ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (arr_26 [i_6] [i_10]) : (((/* implicit */int) arr_28 [i_6] [7ULL] [i_6] [19LL]))))) ? (((/* implicit */int) arr_28 [i_6] [i_6] [i_10] [i_10])) : (((/* implicit */int) ((short) (signed char)-125)))))));
            /* LoopSeq 4 */
            for (short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_24 = (!(((/* implicit */_Bool) ((unsigned long long int) arr_38 [(unsigned char)1] [i_11] [i_10] [i_10] [i_6]))));
                    arr_39 [i_12] [i_11] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((long long int) 3956039779426079453LL));
                }
                arr_40 [i_6] = ((/* implicit */unsigned long long int) min((((int) (signed char)-124)), (min((((/* implicit */int) arr_23 [i_6] [i_10])), ((~(((/* implicit */int) (_Bool)1))))))));
                var_25 &= ((/* implicit */short) -1869010543);
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 19; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) arr_44 [i_6] [i_10] [i_14] [(_Bool)0]);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54776))));
                            arr_49 [i_13] [i_13] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((_Bool) -1264084108885699869LL)))) ? (((/* implicit */int) min(((_Bool)1), (arr_36 [i_14 - 1] [i_14 + 1] [i_14 + 1])))) : ((-((+(((/* implicit */int) arr_27 [i_6] [i_15]))))))));
                        }
                    } 
                } 
                arr_50 [i_6] [i_10] [i_10] = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)54078)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2128910634145568830LL))))), (((/* implicit */long long int) (!(arr_21 [i_6]))))));
                arr_51 [i_13] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)57805))));
                /* LoopSeq 3 */
                for (int i_16 = 2; i_16 < 18; i_16 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */short) min((min((1746318888), (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) ((unsigned short) min((arr_28 [i_6] [i_6] [i_6] [i_16]), (((/* implicit */short) (signed char)-1))))))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 166387758080233760LL)))))))));
                    arr_55 [(unsigned short)16] [i_6] = ((/* implicit */short) -116227512);
                    /* LoopSeq 1 */
                    for (int i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) ((signed char) max((((arr_41 [i_6] [12] [i_13] [i_17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_16 - 1] [i_16]))) : (288230376151646208ULL))), (((/* implicit */unsigned long long int) arr_21 [i_16 + 1])))));
                        arr_59 [i_6] [i_13] [i_6] [i_16] [i_17 + 3] [i_16 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-124))));
                    }
                }
                for (int i_18 = 2; i_18 < 18; i_18 += 2) /* same iter space */
                {
                    var_32 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 4193792ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_18 - 1] [i_18 - 1] [i_13] [i_18] [i_13])))));
                    arr_63 [8LL] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_21 [i_6]) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_28 [i_6] [i_10] [i_13] [i_18 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_10] [i_18] [i_18 - 2]))) : (min((-5644731923289924244LL), (((/* implicit */long long int) arr_21 [i_10]))))));
                    arr_64 [i_18] [i_6] [i_6] [i_6] [(_Bool)1] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551604ULL))));
                }
                for (int i_19 = 2; i_19 < 18; i_19 += 2) /* same iter space */
                {
                    var_33 &= ((/* implicit */_Bool) ((long long int) (~(((((/* implicit */_Bool) (short)28104)) ? (arr_25 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6] [i_6]))))))));
                    arr_69 [(_Bool)0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_72 [i_6] [i_10] [i_6] = ((/* implicit */unsigned long long int) arr_30 [i_6] [(_Bool)1] [i_6] [i_20] [i_6]);
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 20; i_21 += 4) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_79 [i_6] [i_6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_65 [i_22 - 1] [i_22] [i_22 - 1] [i_22 - 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_65 [i_22 - 1] [i_22] [i_22 - 1] [i_22 - 1])))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) 12ULL))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (-(((((_Bool) arr_34 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)992)))))) : (min((18446744073709551595ULL), (((/* implicit */unsigned long long int) (signed char)-21)))))))))));
                            var_36 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)22)) ? (((((/* implicit */_Bool) 6370748024604139941LL)) ? (4460493221632839154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_6] [i_10] [(short)14] [(short)14]))))) : (6ULL))), (((/* implicit */unsigned long long int) arr_37 [i_6] [i_6] [i_20] [i_20] [i_21]))));
                        }
                    } 
                } 
                arr_80 [i_6] [i_10] [14ULL] [14ULL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (_Bool)1)))))) ? (arr_77 [i_10] [i_10] [i_6] [(_Bool)1] [i_6]) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_66 [i_10])))))))));
                /* LoopSeq 1 */
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_74 [i_23 - 1] [i_23] [(unsigned char)16] [i_23 - 1] [11LL] [i_23 - 1]), (arr_74 [i_23 - 1] [i_23] [(unsigned short)19] [i_23 - 1] [(_Bool)1] [i_23])))), (min((((/* implicit */unsigned long long int) (unsigned short)56001)), (3216919054013453871ULL)))));
                    var_38 -= ((/* implicit */long long int) ((unsigned char) arr_57 [i_23] [i_10] [i_10] [i_23 - 1] [3ULL] [i_6]));
                }
            }
            for (unsigned long long int i_24 = 3; i_24 < 19; i_24 += 4) 
            {
                arr_86 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)52702), (arr_73 [i_6] [i_6]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 7727274478391581502ULL)))), (((_Bool) -169719021)))))) : ((+(((((/* implicit */_Bool) arr_22 [i_6] [i_24 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39619))) : (10719469595317970110ULL)))))));
                var_39 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-13365)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)53932))))) : (((((/* implicit */_Bool) (signed char)-5)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [0ULL] [i_10] [i_24 - 2] [i_24] [i_24 - 2] [i_24]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) (unsigned short)2044))))) ? (((arr_29 [i_6] [i_10] [i_10] [(_Bool)1] [i_24]) ? (((/* implicit */long long int) -765430438)) : (-1270367877373267931LL))) : (min((-4934878714020119667LL), (((/* implicit */long long int) (signed char)-1)))))))));
            }
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2048)) ? (-1349697992569963870LL) : (-9LL)))), (max((7ULL), (((/* implicit */unsigned long long int) (unsigned short)24775)))))))))));
            arr_90 [i_6] [i_6] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (+(((/* implicit */int) arr_54 [i_6] [(_Bool)1] [(signed char)0]))))), (((((/* implicit */_Bool) arr_28 [19ULL] [i_25] [i_25] [19ULL])) ? (arr_38 [(short)7] [(signed char)7] [i_25] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [(unsigned char)16] [i_25] [i_25] [i_25]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_77 [i_6] [i_6] [i_25] [i_25] [i_25])) ? (((/* implicit */int) arr_65 [i_6] [i_25] [i_25] [i_25])) : (((/* implicit */int) arr_28 [i_6] [i_25] [(short)3] [i_25])))))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            arr_93 [(unsigned short)12] |= ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)225))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4270643834843066748LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (max((arr_91 [i_26] [i_26]), (((/* implicit */unsigned long long int) (short)-32762)))));
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)973)), (-16LL))))));
            var_42 = ((/* implicit */long long int) ((signed char) 3ULL));
        }
        arr_94 [i_6] = ((/* implicit */_Bool) min(((signed char)-86), ((signed char)-94)));
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_99 [i_27] [(signed char)6] |= min((((/* implicit */short) (signed char)78)), (max((((/* implicit */short) (_Bool)1)), (((short) 3036113054237297910ULL)))));
            var_43 += ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44749))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_74 [(unsigned short)19] [i_27] [i_28] [i_27] [i_27] [i_27]))))) : ((-(7727274478391581502ULL))));
            arr_100 [i_28] = ((/* implicit */_Bool) (~(min((11163280186255714164ULL), (18446744073709551614ULL)))));
            var_44 = ((_Bool) arr_45 [i_27] [(unsigned char)17] [i_27] [i_27] [i_27]);
        }
        /* vectorizable */
        for (short i_29 = 0; i_29 < 19; i_29 += 4) 
        {
            arr_104 [i_29] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_29] [i_27])) ? (7283463887453837452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_29] [i_27])))));
            arr_105 [i_27] [i_29] [i_27] = ((/* implicit */unsigned short) ((int) arr_83 [i_27] [i_27] [i_29] [i_29]));
            arr_106 [i_29] [i_27] [0] = ((/* implicit */short) arr_33 [i_27] [i_29]);
        }
        for (short i_30 = 2; i_30 < 18; i_30 += 4) 
        {
            var_45 ^= ((/* implicit */_Bool) ((signed char) max((9LL), (((/* implicit */long long int) arr_61 [i_27] [i_27] [i_27] [i_27] [i_27] [i_30 + 1])))));
            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) min((min((10719469595317970124ULL), (((/* implicit */unsigned long long int) (signed char)78)))), (((/* implicit */unsigned long long int) max((arr_46 [i_27] [i_30 + 1]), (arr_46 [i_27] [i_30 + 1])))))))));
        }
        for (int i_31 = 0; i_31 < 19; i_31 += 1) 
        {
            arr_111 [(_Bool)1] [i_27] [i_27] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-94)), (arr_56 [i_27] [i_27] [i_27] [i_27] [i_27])))))))));
            arr_112 [i_27] [i_27] [i_27] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_113 [(_Bool)1] [i_27] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_27]))) : (624236677511267962ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [9ULL] [i_31] [i_27])))))))));
        }
        var_47 += ((/* implicit */_Bool) (+(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_70 [i_27] [i_27] [i_27]))))));
        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (unsigned char)233))));
        var_49 += ((/* implicit */unsigned long long int) (unsigned char)6);
        arr_114 [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (11163280186255714163ULL)))) ? (((((/* implicit */_Bool) (unsigned short)31179)) ? (7283463887453837453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)7] [i_27]))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (10719469595317970125ULL)))));
    }
}
