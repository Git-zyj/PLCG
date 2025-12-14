/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9645
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
    var_12 = ((/* implicit */long long int) (-(var_10)));
    var_13 = ((/* implicit */unsigned int) max((var_13), (var_10)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 1] &= ((/* implicit */unsigned char) var_11);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2] [i_2] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [i_4]))) : (max((var_9), (7123418674031117550LL)))))) ? (((((/* implicit */_Bool) ((arr_4 [i_3]) ? (3337271278586386765ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))))) ? (min((var_11), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */long long int) var_8)) : (arr_3 [i_4] [i_4] [i_2 + 1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_6 [i_1] [i_2 - 1] [i_2 - 1] [i_1]) < (arr_6 [i_0] [i_2 + 1] [i_0] [i_0])))) >= (((/* implicit */int) ((arr_6 [i_1] [i_2 + 2] [i_1] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1])))))))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(3337271278586386765ULL)));
            var_16 &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? ((((_Bool)0) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1]))))) : ((~(var_10))))));
        }
    }
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (min((((long long int) arr_4 [i_5])), (((/* implicit */long long int) arr_0 [i_5]))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1182996856863343493LL))));
                        var_19 &= ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5 - 1])) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_7 [i_5 - 1] [i_8 - 1])), (arr_21 [i_6] [i_6])))), (arr_22 [i_8]))) : (((/* implicit */unsigned long long int) min((arr_14 [i_7]), (((/* implicit */long long int) arr_0 [i_5 - 1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_25 [i_9]))));
            var_21 = ((/* implicit */unsigned int) (_Bool)1);
        }
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_33 [i_9] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((signed char) (((!(arr_28 [i_9]))) ? (max((((/* implicit */unsigned long long int) (unsigned char)168)), (15109472795123164850ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1069007080U)) ? (arr_23 [i_9]) : (var_0))), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */int) arr_32 [i_9] [i_9] [i_12])) : (((/* implicit */int) (unsigned char)100))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_12]))))), (((((/* implicit */_Bool) 7123418674031117550LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9]))) : (118583075U))))))));
                var_24 = var_0;
                var_25 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_11] [i_9])))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13]))) & (var_6)));
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        var_27 += ((/* implicit */unsigned int) ((arr_41 [i_9] [i_9] [i_13] [i_13] [i_9] [i_9] [i_9]) - (arr_41 [i_9] [i_11] [i_9] [i_9] [i_14] [i_14] [i_15])));
                        var_28 = ((/* implicit */signed char) (((-(var_11))) / (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_14] [i_15]))))))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_13] [i_13] [i_11] [i_9])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_9] [i_9]))) : (arr_23 [i_13])))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
                    {
                        var_30 |= var_3;
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned int) arr_39 [i_11])))));
                        arr_46 [i_9] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_11]))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_14])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_26 [i_11] [i_13]))) : (((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6474299833969640343ULL))))))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_2)) : (arr_26 [i_11] [i_11]))) & (((((/* implicit */_Bool) 7054778369528520297ULL)) ? (1182996856863343494LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46124))))))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_42 [i_17] [i_14] [i_13] [i_11] [i_9])))))));
                        arr_49 [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned long long int i_18 = 3; i_18 < 23; i_18 += 2) 
                    {
                        arr_53 [i_13] &= ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_9] [i_11] [i_11] [i_11])) ? (4294967282U) : (var_10)))) : (arr_51 [i_14] [i_18 + 1] [i_18 - 1] [i_14] [i_14] [i_14]));
                        var_35 = ((/* implicit */unsigned long long int) (unsigned char)65);
                        arr_54 [i_14] [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_18] [i_18] [i_18 - 2]))));
                    }
                }
                for (unsigned char i_19 = 2; i_19 < 24; i_19 += 1) 
                {
                    var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_9] [i_19] [i_9] [i_11] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_19]))) : (arr_58 [i_13])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9]))) | (arr_43 [i_9] [i_13] [i_11] [i_11] [i_19 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        arr_61 [i_9] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_13]))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_20] [i_9] [i_9] [i_9] [i_9]))) & (arr_42 [i_9] [i_19] [i_13] [i_9] [i_9])))));
                        arr_62 [i_20] [i_19] [i_9] [i_13] [i_11] [i_19] [i_9] = (unsigned char)65;
                        arr_63 [i_9] [i_9] [i_9] [i_9] [i_19] = ((/* implicit */_Bool) ((arr_34 [i_9] [i_19 - 2]) << ((((((_Bool)1) ? (var_9) : (var_0))) - (8563033041176324396LL)))));
                        var_37 |= ((/* implicit */unsigned short) (((+(var_7))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_4)) % (arr_47 [i_13] [i_19 - 2] [i_19 - 1] [i_13])));
                    }
                    for (unsigned char i_21 = 2; i_21 < 23; i_21 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_64 [i_21] [i_9] [i_9]) ? (var_3) : (arr_26 [i_13] [i_13])))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)9))))))))));
                        var_40 = ((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_13] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) arr_38 [i_9] [i_11] [i_19] [i_9] [i_21])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_50 [i_11] [i_9] [i_9] [i_9] [i_11] [i_11] [i_9]))));
                        arr_66 [i_19] [i_11] [i_19] [i_11] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18084962842940881358ULL)) ? (var_1) : (var_8)))) - (arr_42 [i_9] [i_9] [i_13] [i_19] [i_21 - 1])));
                    }
                    var_41 += ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    arr_67 [i_19 - 1] [i_19] [i_19] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_19 + 1] [i_19 - 1])) ? (((/* implicit */long long int) arr_58 [i_19])) : (arr_26 [i_19 - 2] [i_19 + 1])));
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_36 [i_9] [i_9] [i_13] [i_19])))))))));
                }
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    var_43 *= ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        arr_72 [i_9] [i_9] [i_13] [i_11] [i_9] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))) : (var_3)))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_22])))))));
                        var_45 = arr_43 [i_9] [i_13] [i_13] [i_13] [i_13];
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) (!(arr_64 [i_9] [i_11] [i_22]))))));
                        var_47 ^= ((/* implicit */_Bool) (-(arr_50 [i_23] [i_9] [i_13] [i_13] [i_9] [i_9] [i_9])));
                    }
                    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) arr_57 [i_22] [i_11] [i_11] [i_9]))));
                    arr_73 [i_11] [i_11] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) arr_70 [i_9] [i_11] [i_9] [i_13] [i_22])) : (((/* implicit */int) (!((_Bool)1))))));
                }
                arr_74 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11]))) : (((var_8) & (var_2)))));
                var_49 = arr_68 [i_9] [i_9];
                arr_75 [i_9] [i_13] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_39 [i_13]);
                arr_76 [i_13] [i_9] [i_13] &= ((/* implicit */unsigned char) ((unsigned int) arr_35 [i_9] [i_9] [i_11] [i_13]));
            }
            /* vectorizable */
            for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
            {
                var_50 &= ((/* implicit */unsigned int) ((_Bool) arr_70 [i_24] [i_9] [i_9] [i_9] [i_9]));
                arr_79 [i_9] [i_9] [i_11] [i_9] = var_1;
            }
            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_40 [i_9] [i_9] [i_11] [i_9] [i_11] [i_9])))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (arr_51 [i_11] [i_11] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11] [i_11] [i_11]))) ^ (arr_38 [i_11] [i_11] [i_9] [i_9] [i_9])))) : (((((/* implicit */_Bool) arr_39 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (var_0))))))))));
        }
        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) | (arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) ? ((~(arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (var_2) : (arr_71 [i_9] [i_9] [i_9])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_25 = 0; i_25 < 25; i_25 += 4) /* same iter space */
        {
            var_53 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15109472795123164850ULL)))))) * ((((_Bool)1) ? (arr_40 [i_9] [i_9] [i_25] [i_25] [i_25] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_9] [i_9] [i_9] [i_25] [i_9])))))));
            var_54 ^= ((/* implicit */unsigned short) 7123418674031117532LL);
        }
        for (long long int i_26 = 0; i_26 < 25; i_26 += 4) /* same iter space */
        {
            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) arr_32 [i_26] [i_26] [i_9]))));
            arr_84 [i_26] = (-(((arr_40 [i_9] [i_26] [i_26] [i_26] [i_9] [i_9]) & (arr_40 [i_9] [i_26] [i_26] [i_9] [i_26] [i_26]))));
            var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_44 [i_26] [i_9] [i_26] [i_9] [i_26] [i_26]), (((/* implicit */signed char) (_Bool)1))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (arr_37 [i_9] [i_9] [i_9] [i_9]) : (((((/* implicit */_Bool) arr_52 [i_26] [i_26] [i_9] [i_9] [i_9])) ? (arr_52 [i_9] [i_26] [i_9] [i_9] [i_9]) : (arr_52 [i_9] [i_9] [i_26] [i_9] [i_9]))))))));
        }
    }
}
