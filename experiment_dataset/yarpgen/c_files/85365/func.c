/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85365
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
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-1)))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))) + (arr_2 [i_0 - 1])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */int) arr_9 [i_1 + 4])) - (((/* implicit */int) var_1)))) != ((-(((/* implicit */int) var_12)))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] [i_4 + 2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0))));
                            var_20 = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
                arr_16 [(short)11] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_0 - 1] [i_0]) * (arr_12 [17ULL] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)7455)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_12 [i_2] [i_0]))) : (arr_12 [i_0 + 1] [i_0])));
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                arr_20 [(unsigned short)21] [i_0] [i_0] [i_0] = var_0;
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) 3084568307U)))));
                            var_22 = arr_5 [i_0] [i_5] [i_0];
                        }
                    } 
                } 
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
            {
                arr_28 [i_0] [i_8] = ((/* implicit */long long int) 1254703211U);
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (7106868829172837056LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_8])))))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [(unsigned short)19])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_8] [i_8])))) >> (((((((/* implicit */_Bool) var_5)) ? (min((arr_11 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))) - (3532452386349761983ULL)))));
            }
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 4) 
            {
                arr_33 [i_0 - 1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) 1210398988U);
                arr_34 [i_0] = ((/* implicit */int) ((long long int) arr_11 [i_0] [i_0] [i_0] [i_0]));
                /* LoopSeq 2 */
                for (unsigned short i_10 = 2; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((arr_2 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), ((~(min((arr_11 [i_0] [(signed char)11] [i_9 - 1] [i_10]), (arr_7 [i_0] [i_1] [i_0])))))));
                    /* LoopSeq 3 */
                    for (int i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        arr_40 [i_0 + 1] [i_1 + 3] [i_0 + 1] [i_0 + 1] [(_Bool)1] [(signed char)2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 2] [i_0]), (((/* implicit */long long int) arr_1 [i_10] [(unsigned short)16]))))) ? (((/* implicit */unsigned long long int) arr_13 [i_10] [3] [i_10] [i_10 + 3] [i_10 + 1] [i_10] [i_10 + 1])) : (((((/* implicit */_Bool) arr_29 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11]))) : (arr_11 [i_10] [i_10] [i_10] [i_10 + 3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [(_Bool)1]))) == (((((/* implicit */_Bool) arr_22 [i_0] [7] [i_9 - 1] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [(_Bool)1] [(_Bool)1]))) : (0LL))))))) : ((-(arr_39 [i_0 + 1] [i_10 + 1] [(unsigned char)22] [i_11] [i_11] [i_11] [i_11 - 3])))));
                        arr_41 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(arr_12 [i_1 - 3] [i_0])));
                        var_25 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) (unsigned char)0)), (9942019916067735602ULL))) < (((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)16])))) ? (((((/* implicit */_Bool) ((14823199687193663784ULL) | (arr_11 [i_11] [i_10] [i_1 + 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */long long int) arr_12 [i_0] [i_0])) | (arr_0 [i_1] [i_10]))))) : (arr_10 [i_0 - 1] [i_0] [i_9 - 1])));
                        var_26 = ((/* implicit */_Bool) var_3);
                        var_27 = ((/* implicit */signed char) (+(min((5727872812948998908ULL), (((/* implicit */unsigned long long int) ((var_10) > (-7106868829172837056LL))))))));
                    }
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (~((~(5748375416777162424LL)))));
                        var_29 *= 1575790860U;
                        var_30 = var_3;
                    }
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) (-(((arr_42 [i_1] [i_9 - 1] [i_13]) - (((/* implicit */unsigned long long int) arr_0 [(unsigned char)5] [i_1]))))));
                        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned char)255), (arr_18 [(short)18] [i_0] [i_0]))))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [4U]))))) ? (((arr_39 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [(unsigned char)4]) >> (((-1595722486236835933LL) + (1595722486236835963LL))))) : (var_14)))) ? (((/* implicit */long long int) (+(1517423456U)))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)11363)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_10] [i_0 + 1]))) : (((long long int) var_0)))))))));
                        var_34 = ((/* implicit */short) max((var_8), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (-5748375416777162414LL) : (((/* implicit */long long int) var_17))))))));
                    }
                }
                for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        var_35 |= ((/* implicit */unsigned short) 6003965952501492624ULL);
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_14 - 2] [i_0] [i_0 + 1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54592)))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_14 - 1] [i_0])) ? (((/* implicit */int) arr_43 [i_0 + 1] [i_1 - 1] [i_9 - 1] [i_9 - 1] [i_14 - 2] [i_14 + 1] [i_14 + 3])) : (((/* implicit */int) ((((/* implicit */_Bool) -7106868829172837057LL)) || (((/* implicit */_Bool) -7106868829172837065LL))))))) : (((/* implicit */int) (!(arr_48 [i_15]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_57 [i_14] [i_9] [i_14 + 2] [i_9] |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_37 [i_0] [i_9] [i_0]))))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_0] [i_0 + 1] [i_9 + 1] [i_14] [i_14] [i_14])) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */long long int) (!(arr_1 [(unsigned short)5] [(short)21])));
                        arr_61 [i_17] [i_0] [(unsigned short)5] [i_0] [i_0 - 1] = ((/* implicit */int) ((_Bool) (unsigned short)41460));
                    }
                    var_39 = ((/* implicit */unsigned char) arr_54 [i_0] [i_0]);
                    var_40 = ((/* implicit */_Bool) ((((arr_9 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1]))) : (-7106868829172837077LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1])))));
                }
            }
            /* LoopSeq 2 */
            for (int i_18 = 2; i_18 < 22; i_18 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_14 [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2])))));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((arr_38 [i_18] [i_1] [(_Bool)1]), (arr_12 [11U] [i_0])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) (unsigned short)18891)))));
            }
            /* vectorizable */
            for (int i_19 = 2; i_19 < 22; i_19 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)4032)) & (((/* implicit */int) ((808306209) == (((/* implicit */int) arr_55 [i_19] [i_1] [i_1 - 3] [i_0] [(_Bool)1] [i_0]))))))))));
                var_44 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0 + 1] [i_1 - 1] [i_0]);
                var_45 = ((/* implicit */short) ((((/* implicit */int) arr_53 [i_0] [i_0 + 1] [i_0 + 1])) == (((/* implicit */int) var_1))));
            }
            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_25 [i_0 + 1] [i_1 - 1]), (arr_25 [i_0 - 1] [i_1 + 2]))))));
            arr_69 [10U] |= ((/* implicit */int) var_7);
            var_47 = ((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((~((+(((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_0 + 1] [i_1]))))))));
        }
        for (unsigned short i_20 = 3; i_20 < 20; i_20 += 4) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((int) (unsigned short)22710)), (((/* implicit */int) arr_63 [i_0] [i_0 + 1] [i_0 + 1] [i_20 - 3])))))));
            arr_72 [(unsigned short)20] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((arr_65 [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */long long int) var_15))))) - (((arr_44 [20U] [(_Bool)1] [19U] [i_0]) / (((/* implicit */unsigned long long int) var_8)))))) < (((((/* implicit */_Bool) (unsigned short)22710)) ? (max((arr_11 [i_0 + 1] [(short)9] [(signed char)17] [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [3U] [i_0] [i_20])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125)))))));
            arr_73 [i_0] = arr_60 [i_0 - 1] [12U] [i_0] [18U] [i_20];
        }
    }
    for (unsigned char i_21 = 1; i_21 < 21; i_21 += 4) 
    {
        arr_76 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24084)) << (((-8288620869696644977LL) + (8288620869696644981LL)))));
        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63042)) / (1015277707)))) ? (((/* implicit */int) (unsigned short)17085)) : (((/* implicit */int) ((((/* implicit */int) (signed char)125)) >= (((/* implicit */int) (unsigned short)63042)))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 11; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    arr_84 [12] [i_23] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned int) var_17);
                    var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((arr_68 [i_23 + 2]), (arr_68 [i_23 + 4]))) : (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48452))) / (arr_82 [i_24] [i_24] [i_23]))), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (unsigned char)245))));
    }
    /* vectorizable */
    for (short i_25 = 1; i_25 < 22; i_25 += 4) /* same iter space */
    {
        var_52 *= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) arr_23 [i_25] [i_25] [i_25] [19U] [19U])));
        /* LoopSeq 1 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_90 [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_25] [i_25]))));
            /* LoopNest 3 */
            for (unsigned int i_27 = 0; i_27 < 24; i_27 += 4) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_53 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3858048598U)) ? (14278327801207078275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24054)) ? (4168416272502473340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))));
                            var_55 = ((((/* implicit */_Bool) arr_36 [i_25] [i_25 - 1] [i_26])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_89 [8LL] [i_26]))) * (var_3))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (arr_32 [i_25] [i_27] [i_26] [i_29])))));
                            arr_98 [i_26] [i_26] [i_26] [i_27] [i_28] [i_29] = ((/* implicit */_Bool) arr_65 [i_25 + 2] [(unsigned char)13] [i_29 - 1]);
                        }
                    } 
                } 
            } 
            var_56 = ((/* implicit */signed char) ((arr_97 [15] [i_25 + 1] [i_25 + 1]) | (arr_97 [i_25 + 1] [i_25 + 1] [i_25 + 1])));
        }
    }
    for (short i_30 = 1; i_30 < 22; i_30 += 4) /* same iter space */
    {
        var_57 = ((/* implicit */long long int) (_Bool)1);
        var_58 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
    }
}
