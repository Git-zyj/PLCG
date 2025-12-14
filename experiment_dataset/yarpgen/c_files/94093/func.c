/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94093
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_9);
        var_10 = ((/* implicit */long long int) (-(((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((427276507U) - (427276507U))))) % (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (-1961034338) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), ((~(((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [6U]))) : (var_8)))))));
            var_12 |= ((/* implicit */int) (+(((((/* implicit */_Bool) min((arr_4 [i_1] [(signed char)4] [(signed char)4]), (arr_3 [i_0] [i_0])))) ? (-6143080527457069598LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
            var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) != (arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 2])))), (((((/* implicit */_Bool) 9223372036854775805LL)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-52)))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_2] [i_1] [i_1] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)33)))) - ((+(((((/* implicit */_Bool) var_0)) ? (6804712784086758344LL) : (var_2))))));
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
                    arr_12 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (arr_7 [i_2] [i_2] [i_2])))) ? (-952924080) : (((/* implicit */int) (signed char)24))))), (((((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [17U] [(unsigned short)18]), (((/* implicit */long long int) var_5))))) ? (arr_6 [i_0] [i_1] [i_2] [(signed char)8]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))))));
                    arr_13 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) 1961034338);
                    var_14 = ((/* implicit */int) ((signed char) (-(-6828206226868632877LL))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_0])) ? (arr_16 [i_0] [i_0] [i_0] [(signed char)16]) : (((/* implicit */long long int) 1961034337)))))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)33))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_4 [(unsigned char)17] [i_0 - 1] [i_0])) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1] [i_2])) ? (arr_7 [i_2] [i_0 - 1] [i_2]) : (((/* implicit */long long int) 1766860691U))))));
                    var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1])), (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))))))));
                }
                for (unsigned int i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    arr_19 [i_1] [(signed char)1] [i_2] [i_1] = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_5]);
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_23 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-57)), ((unsigned short)33763)))) ? (((/* implicit */int) arr_21 [6] [i_2] [i_5 - 2])) : ((+(((/* implicit */int) arr_1 [i_1]))))))));
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) -1961034338)) != (6143080527457069594LL))) ? (((/* implicit */long long int) 4064)) : (((((arr_5 [i_0] [(unsigned short)3] [i_6]) + (9223372036854775807LL))) << (((((/* implicit */int) ((signed char) arr_18 [i_1] [i_2]))) - (78)))))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        arr_27 [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_3) + (var_5))), (((/* implicit */unsigned int) (signed char)-88))))) ? (((((((/* implicit */int) arr_21 [i_1] [i_5] [i_1])) == (((/* implicit */int) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [i_5] [8]))) > (arr_18 [i_0] [i_0]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_2] [i_1] [i_0]))) : (3406218436956764691LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_26 [i_2] [i_2] [i_7 - 2] [11] [i_7 - 2]))))));
                        arr_28 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_1] [i_2] [i_2]))) & (var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25)))))) ? (max((((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_0] [i_5 + 2] [i_2] [i_5])), (arr_20 [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_2] [(unsigned short)10] [i_7 + 1])))), (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) min((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_5 + 1])), (-1961034355))))));
                        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) ^ (-5226252685639087571LL)));
                        arr_29 [i_5] [i_2] [i_7] [i_5] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (_Bool)1)), (702373098471972635LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5 - 3] [i_5 + 2] [i_5])) || (((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5 - 2] [i_5])))))));
                    }
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [11U] [i_2] [i_5 - 1]) : (arr_5 [i_2] [i_2] [i_2]))))));
                    arr_30 [i_2] = ((/* implicit */int) var_4);
                }
            }
            for (signed char i_8 = 2; i_8 < 17; i_8 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((arr_21 [i_0] [i_1] [i_8]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 127)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_1] [i_8] [i_8 - 2]))))) : (min((arr_14 [i_0 - 1] [i_8] [i_0] [i_8] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0])))))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_9) : (10LL)))))));
                arr_34 [i_0] [i_8] [(short)2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0 - 2] [i_8 + 1]))))), (((97551084U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                /* LoopNest 2 */
                for (signed char i_9 = 4; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), (arr_39 [i_9])))) && (((/* implicit */_Bool) (short)-32244)))))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_5)))) & (var_2)))) ? (((((/* implicit */_Bool) arr_26 [i_8] [i_0] [i_9 - 1] [i_0 - 2] [i_8])) ? (((/* implicit */int) (unsigned short)2058)) : (((/* implicit */int) arr_26 [i_0] [i_9] [i_9 + 4] [i_0 - 2] [i_8])))) : ((+(((/* implicit */int) arr_35 [i_0] [i_8] [i_0 - 2] [i_9 - 4])))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) (-(1606845777)))) ? (((/* implicit */int) arr_35 [i_0 + 1] [i_0] [i_0] [1LL])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_35 [i_0 - 2] [i_1] [i_0 - 2] [i_0]))))))));
        }
        for (short i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
        {
            var_25 *= ((/* implicit */long long int) max(((~(((/* implicit */int) arr_21 [i_0 - 2] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) >> (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0] [i_0 - 1]))))));
            arr_42 [i_11] [i_11] = arr_22 [i_0 + 1] [i_0 + 1] [(unsigned short)8] [(unsigned short)8];
            arr_43 [i_11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-19225)) ? (((int) 1961034338)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0]))))));
            /* LoopSeq 4 */
            for (unsigned short i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) (~((+(arr_5 [i_0 - 1] [i_0 - 1] [i_0])))));
                var_27 = ((/* implicit */unsigned char) -2130589453);
            }
            for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(9223372036854775805LL)))), (max((var_8), (((/* implicit */unsigned long long int) arr_36 [i_0 + 1] [i_0] [i_0] [i_0 - 2])))))))));
                var_29 = (-(min((arr_15 [i_0] [i_11] [i_11] [(_Bool)1] [i_13] [i_13]), (arr_15 [10LL] [10LL] [10LL] [i_11] [10LL] [10LL]))));
                var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_45 [i_11] [i_0]), (arr_45 [i_11] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) : (max((((/* implicit */long long int) 2124598175U)), (-881300849011711304LL)))));
                arr_51 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) (-(((arr_50 [i_0 - 2] [i_0 - 2] [i_11] [i_13]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [i_11])))))));
            }
            for (int i_14 = 4; i_14 < 16; i_14 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_15 = 2; i_15 < 18; i_15 += 2) 
                {
                    var_31 = ((/* implicit */int) 0LL);
                    /* LoopSeq 4 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_10 [i_11] [i_11] [16U] [16U]))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */short) max(((~(((/* implicit */int) arr_47 [i_11] [i_11] [i_17])))), (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_53 [i_0] [i_11] [i_11] [i_17]))))), (arr_60 [i_15 + 1] [i_0] [i_11] [i_0] [i_11] [i_0] [i_0]))))));
                        var_35 = arr_50 [i_0] [i_0] [i_0] [i_17];
                        var_36 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -7369435661020872240LL)))))))) : ((+(max((arr_16 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_4 [(signed char)1] [(signed char)1] [8U])))))));
                    }
                    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        arr_66 [i_11] [i_14] [(signed char)17] = ((/* implicit */unsigned short) var_7);
                        arr_67 [i_0] [i_15] [i_14] [i_11] [i_0] |= ((/* implicit */signed char) max(((+(arr_46 [i_14 - 4] [i_14] [i_15] [i_0]))), (((/* implicit */unsigned long long int) (((+(-8432022439653336640LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_61 [i_14] [i_14])))))))));
                        arr_68 [i_11] = min(((~(max((var_8), (((/* implicit */unsigned long long int) arr_38 [i_11])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_18] [i_18] [i_11]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_0] [(signed char)9] [i_14] [i_11] [i_18]))) : (arr_24 [i_11] [i_11] [i_11] [i_14] [i_11] [15LL]))) : ((+(arr_58 [(short)10] [(short)10] [(short)10] [i_0 - 1] [(short)10] [i_18])))))));
                        var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_45 [i_0 - 2] [i_11]), (arr_45 [i_0 - 2] [i_11]))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        var_38 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52340)) ? (-1780471385) : (((/* implicit */int) arr_25 [i_11] [i_11] [(signed char)2] [i_15]))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_14 [i_15] [i_15] [i_15 - 2] [i_15] [i_11] [i_15])) : (5294368047300931870LL))))) * ((+(min((((/* implicit */long long int) (signed char)79)), (4609434218613702656LL))))));
                        var_39 = ((/* implicit */int) arr_36 [i_11] [i_14] [i_11] [5]);
                        var_40 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 2] [i_14 - 1] [i_14 + 1] [i_11] [i_15 - 2])) || (((/* implicit */_Bool) var_6))))), (max((max((((/* implicit */long long int) var_4)), (var_2))), (((/* implicit */long long int) (signed char)-124))))));
                        arr_72 [i_0] [i_0] [i_0] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_19 + 1] [i_15 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_19 + 1] [i_15 - 2]))) : (var_5)))) ? (((var_5) & (((/* implicit */unsigned int) ((int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_15 + 1] [i_15 + 1]))))))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_20 = 2; i_20 < 18; i_20 += 1) 
                {
                    for (unsigned short i_21 = 4; i_21 < 17; i_21 += 3) 
                    {
                        {
                            arr_79 [10U] [i_11] [i_0] [i_11] [i_0] = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_41 [i_11])) ? (arr_39 [(_Bool)1]) : (((/* implicit */unsigned long long int) -11)))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_1 [i_11])))), (((((/* implicit */_Bool) (unsigned short)52329)) ? (-54244028) : (((/* implicit */int) arr_59 [i_14 + 1] [i_20] [i_11] [i_11] [i_11] [i_0] [i_0])))))))));
                            var_41 = ((/* implicit */int) (~(((var_2) - ((~(4609434218613702656LL)))))));
                        }
                    } 
                } 
            }
            for (signed char i_22 = 0; i_22 < 19; i_22 += 3) 
            {
                arr_83 [i_0] [(signed char)2] [i_11] [(unsigned short)4] = min((arr_24 [i_11] [(unsigned char)17] [(unsigned char)17] [5] [(unsigned char)17] [(unsigned char)17]), (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (min((((/* implicit */int) (short)-17470)), (65532)))))));
                var_42 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)117)), ((-(3442081675U)))));
            }
            var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-64))));
        }
    }
    var_44 = ((/* implicit */long long int) (+((((+(var_5))) * (var_5)))));
    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((signed char) ((((((/* implicit */int) (signed char)112)) / (((/* implicit */int) var_6)))) > (((/* implicit */int) var_4))))))));
    var_46 = ((/* implicit */int) var_1);
}
