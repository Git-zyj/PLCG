/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84335
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
    var_19 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (1700227185)));
                var_21 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3]))) : (-168331829734847898LL))));
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 17610196758435077027ULL)))) ? (17610196758435077004ULL) : (836547315274474575ULL))))));
        arr_7 [i_2] = ((unsigned long long int) 17610196758435077051ULL);
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((long long int) arr_16 [i_2] [i_6] [16] [16] [i_3] [i_2]));
                            var_25 = ((/* implicit */_Bool) arr_15 [i_2] [i_3 - 3] [i_4] [i_2]);
                            arr_20 [i_2] [i_3] [1U] [i_2] = arr_10 [i_2] [8ULL] [i_2];
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [11ULL] [i_3 - 1] [i_4] [i_3 - 1] [i_2])) || (((/* implicit */_Bool) arr_18 [i_5] [i_2] [i_4] [i_2] [i_6] [i_2] [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_5])) ? (((/* implicit */int) arr_6 [i_3] [(unsigned short)8])) : (((/* implicit */int) arr_14 [i_2] [i_3 - 3] [i_4 - 2] [13LL] [i_2]))))))))));
                            var_27 &= ((var_13) ? (((836547315274474564ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_19 [5ULL] [5ULL] [i_4] [i_4] [i_6]))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [i_2]) ? (((/* implicit */int) arr_12 [18U] [i_3] [i_4])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) arr_14 [i_4] [i_4] [(signed char)20] [(unsigned short)5] [i_4])) : (((/* implicit */int) var_9))))));
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    arr_24 [i_2] = ((/* implicit */unsigned char) ((int) (((_Bool)1) ? (836547315274474589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [(unsigned short)7] [i_2] [i_4] [i_2]))))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1])) ? (18426544826662988884ULL) : (((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [i_3 - 3])))))));
                    var_30 *= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * ((((_Bool)1) ? (((/* implicit */int) arr_19 [8LL] [8LL] [i_4] [i_7] [i_2])) : (((/* implicit */int) arr_17 [19ULL] [i_3] [i_4] [i_7] [i_7]))))));
                    arr_25 [i_2] [i_2] [i_4 + 1] [i_7] = ((/* implicit */unsigned long long int) arr_21 [i_2] [10]);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) arr_12 [i_8] [i_3] [(unsigned short)18]);
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_4] [i_8])) ? (((unsigned long long int) 18426544826662988888ULL)) : (((/* implicit */unsigned long long int) var_4))));
                        arr_31 [i_2] = ((/* implicit */unsigned long long int) arr_12 [5LL] [i_3] [i_4]);
                        var_33 -= ((/* implicit */int) ((short) ((_Bool) var_18)));
                        arr_32 [i_2] [(short)10] [i_4] [i_8] [i_4] |= ((/* implicit */unsigned char) (_Bool)0);
                    }
                    arr_33 [i_2] [12LL] [i_2] [i_2] |= ((/* implicit */_Bool) (short)-15267);
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        arr_41 [i_11] [i_2] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_3 + 1])) : (arr_37 [(_Bool)1] [i_3 - 2] [i_4 - 2] [i_10] [i_2])));
                        var_34 = ((/* implicit */unsigned long long int) ((_Bool) 836547315274474583ULL));
                    }
                    for (signed char i_12 = 3; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        arr_44 [6ULL] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_4 - 2] [i_4 + 2] [i_4 - 3] [i_2]))));
                        var_35 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) arr_11 [i_12])))) + (((/* implicit */int) arr_16 [i_2] [(unsigned char)14] [(unsigned char)14] [i_3 - 3] [(unsigned char)14] [i_2]))));
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) arr_26 [i_2] [i_4] [i_4] [i_10] [i_12] [i_4]))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_10])) ? (3883829831388885469LL) : (964304163968713910LL)))) ? (((/* implicit */int) arr_11 [(short)11])) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (signed char i_13 = 3; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        arr_48 [i_2] [i_3] [i_3] [i_10] [i_13 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)51264)) ? ((-(arr_37 [i_2] [14LL] [i_4] [(unsigned char)2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_3] [i_2] [15]))) ^ (2029204467U))))));
                        arr_49 [(_Bool)1] [i_2] [i_4] = ((/* implicit */unsigned int) arr_12 [i_10] [i_10] [i_3 - 3]);
                    }
                    var_38 += ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                }
                var_39 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
            }
            var_40 = ((/* implicit */signed char) ((_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [10] [i_2] [i_2])) : (((/* implicit */int) arr_6 [12U] [i_3 - 3])))))));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 20; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                {
                    var_41 = ((/* implicit */signed char) max((((long long int) 10141051519110976839ULL)), (((/* implicit */long long int) arr_35 [i_14] [i_15] [i_14] [i_15]))));
                    /* LoopSeq 3 */
                    for (int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        arr_62 [i_15 + 1] [i_14] = ((/* implicit */unsigned int) ((20199247046562731ULL) & (((/* implicit */unsigned long long int) -3883829831388885474LL))));
                        arr_63 [i_14] = ((/* implicit */_Bool) -3883829831388885458LL);
                        var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3883829831388885475LL)) ? (587645964033926279ULL) : (((unsigned long long int) (_Bool)1)))) >= (((/* implicit */unsigned long long int) ((-3883829831388885481LL) * (((/* implicit */long long int) ((/* implicit */int) ((arr_37 [i_14] [i_15] [i_16] [i_16] [i_14]) == (18399638666528485750ULL))))))))));
                        arr_64 [i_15] [i_16] [i_15] &= (+(((((/* implicit */_Bool) arr_27 [i_14] [i_17] [i_16] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17] [i_16] [i_16] [i_14]))) : (273180156U))));
                        var_43 = ((/* implicit */_Bool) ((short) ((arr_16 [i_14] [i_16] [(unsigned char)19] [i_15 - 1] [i_15 - 1] [i_14]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_35 [i_15] [i_15] [i_14] [i_15 + 1])))));
                    }
                    for (short i_18 = 3; i_18 < 20; i_18 += 3) 
                    {
                        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (unsigned short)1748)) : (((/* implicit */int) (unsigned short)21812))))) < (3083943450U))))));
                        var_45 = ((/* implicit */int) ((((/* implicit */int) arr_59 [i_15] [4U])) > (((int) arr_66 [i_15 + 1] [i_18 - 3] [i_18] [i_18 + 1]))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        var_46 = ((((/* implicit */int) ((unsigned short) ((10141051519110976824ULL) >= (((/* implicit */unsigned long long int) -952433289)))))) <= (((/* implicit */int) (!(((_Bool) var_15))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 2; i_20 < 20; i_20 += 2) 
                        {
                            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 12470124058403077895ULL))))))), (((((/* implicit */int) arr_18 [i_15] [(_Bool)1] [i_15] [i_15] [(_Bool)1] [i_15 + 1] [i_15])) / (((/* implicit */int) (short)-26909)))))))));
                            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((unsigned short) ((min((((/* implicit */int) (_Bool)1)), (arr_69 [(_Bool)1] [(_Bool)1]))) >= (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) arr_12 [i_16] [2LL] [i_14])) : (arr_13 [i_14] [i_15] [i_16] [i_16])))))))));
                            var_49 = ((/* implicit */unsigned int) arr_26 [i_20] [i_19] [i_16] [i_15] [i_15] [i_14]);
                            var_50 = ((/* implicit */_Bool) var_1);
                        }
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 21; i_21 += 4) 
                        {
                            arr_77 [(unsigned short)10] [i_15] [i_16] [i_14] [i_19] [i_21] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)182)) & (-234795041)));
                            var_51 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 8305692554598574791ULL)))) & (arr_52 [i_21])));
                        }
                    }
                    arr_78 [i_14] [i_14] [15LL] [i_14] = ((/* implicit */unsigned short) ((273180155U) << (((1963041972) - (1963041950)))));
                    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_69 [i_14] [i_15 + 1]) << (((((/* implicit */int) arr_19 [i_14] [i_16] [16ULL] [i_15] [i_14])) - (34476)))))) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1328570788344726149ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [(unsigned char)8] [i_14] [i_16])) ? (arr_69 [i_15 + 1] [i_15 + 1]) : (((/* implicit */int) (_Bool)1))))) : ((((-(18426544826662988877ULL))) << (((((((/* implicit */_Bool) arr_69 [i_14] [i_14])) ? (4248394434U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (4248394404U)))))));
                    var_53 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_38 [i_14] [i_14] [i_14] [i_14] [i_14])) % (((unsigned long long int) arr_38 [i_14] [(short)5] [i_16] [i_15] [i_15 + 1]))));
                }
            } 
        } 
        var_54 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4555))) != (arr_71 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))), (min((arr_22 [6U] [(unsigned char)4] [(unsigned char)12] [(unsigned char)4]), (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((long long int) 47105407181065866ULL))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_14] [i_14] [i_14]))))) : (((/* implicit */long long int) arr_5 [i_14] [i_14]))));
        arr_79 [i_14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)44))));
        /* LoopSeq 2 */
        for (int i_22 = 0; i_22 < 21; i_22 += 2) /* same iter space */
        {
            var_55 = ((((max((((/* implicit */long long int) arr_70 [i_14] [i_14] [i_14] [8LL])), (-5366244062992807979LL))) < (var_3))) ? (max((((/* implicit */unsigned long long int) ((arr_68 [i_14] [i_22] [i_14] [1U]) & (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))), (min((20199247046562731ULL), (((/* implicit */unsigned long long int) arr_6 [i_22] [(unsigned short)8])))))) : ((-(((unsigned long long int) (unsigned short)48126)))));
            arr_83 [i_14] [i_14] [i_22] = ((/* implicit */_Bool) ((arr_12 [i_14] [i_14] [i_22]) ? (((arr_69 [i_14] [i_22]) >> (((arr_69 [i_22] [i_14]) - (697719430))))) : (min((((/* implicit */int) arr_10 [i_14] [(short)10] [i_14])), (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))));
        }
        for (int i_23 = 0; i_23 < 21; i_23 += 2) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned char) 8305692554598574780ULL);
            arr_86 [i_23] [(unsigned char)20] |= ((/* implicit */unsigned int) ((((arr_5 [i_14] [i_23]) % (arr_5 [i_14] [i_23]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (signed char)71)) : (arr_80 [i_14] [i_14] [i_14]))))));
            var_57 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) max(((_Bool)1), ((_Bool)1))))) & (max((((((/* implicit */unsigned long long int) 1803975313)) | (arr_36 [i_14] [i_23] [i_23]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_45 [4LL] [i_14] [(short)3])))))))));
        }
        var_58 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_14] [i_14] [i_14] [i_14]))) == (((((/* implicit */_Bool) (~(arr_52 [(short)6])))) ? (((-4258222107118781737LL) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_14] [i_14] [(unsigned char)2]))))) : (((long long int) 8305692554598574792ULL))))));
    }
    var_59 = ((/* implicit */unsigned short) max(((unsigned char)54), ((unsigned char)208)));
}
