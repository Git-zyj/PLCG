/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62935
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((11066472911648880220ULL) > (7380271162060671380ULL))))) % (11483531095111426220ULL));
                var_20 += ((/* implicit */int) ((((var_4) >> (((arr_0 [i_1] [i_0]) + (5308542877476207541LL))))) < (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 ^= ((/* implicit */long long int) (_Bool)1);
                            var_22 -= arr_1 [i_1];
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((11514246723942091777ULL), (((/* implicit */unsigned long long int) (-(var_2)))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) ((var_16) > (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_3 + 1] [i_2] [i_2 - 1] [i_1] [(_Bool)1])))))))));
                            arr_16 [i_2] [2] [i_2 - 2] [i_2 - 1] [i_2] &= arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [8ULL] [i_5 + 1];
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [10ULL] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (signed char)17)), (7380271162060671380ULL)))));
                            var_25 += arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [2ULL];
                        }
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (signed char)24))));
                    }
                    for (int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_27 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (((((/* implicit */_Bool) 8796093022207ULL)) ? (7537838825516745563ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_1] [i_1] [(unsigned short)4] [2] [i_7 + 1] [i_8] &= arr_15 [i_0] [i_1] [i_2] [i_7] [i_8] [i_8] [i_0];
                            var_28 = 1952038540;
                            var_29 *= var_16;
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_30 &= ((/* implicit */_Bool) 11066472911648880220ULL);
                            var_31 -= ((/* implicit */_Bool) var_10);
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((var_4), (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))))))))));
                            var_33 += ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (_Bool)0))));
                        }
                        var_34 &= ((/* implicit */int) ((((/* implicit */_Bool) 7380271162060671395ULL)) ? (3ULL) : (9194666932452834412ULL)));
                        var_35 ^= (!(((((/* implicit */long long int) ((/* implicit */int) var_3))) == (arr_11 [i_2 - 2] [i_2] [i_2] [i_7 + 2] [i_7] [i_7]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((_Bool) arr_24 [i_11] [(_Bool)1] [(_Bool)1] [i_2 - 1])))));
                            arr_34 [i_0] [2ULL] &= ((/* implicit */unsigned long long int) (unsigned short)62410);
                        }
                        for (signed char i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            arr_38 [10] [i_1] [i_2] [i_2] [6] [i_10] [i_12] &= ((/* implicit */long long int) (+(var_7)));
                            var_37 *= ((/* implicit */_Bool) var_18);
                            var_38 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) / (((/* implicit */int) arr_10 [i_12] [i_12 - 1] [i_12 - 2] [2U] [i_12 + 1]))));
                        }
                        var_39 += ((/* implicit */unsigned long long int) (+(arr_0 [i_2 - 1] [i_2])));
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (var_5)));
                            var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_42 -= ((arr_6 [i_0] [i_1] [0] [i_10]) > (arr_6 [i_0] [i_1] [8LL] [i_10]));
                            var_43 = ((/* implicit */long long int) ((11359236251151244481ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [i_10] [i_2 + 1])))));
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((3ULL) >> (((/* implicit */int) (unsigned short)20)))) > (((/* implicit */unsigned long long int) 66584576U)))))));
                            arr_50 [(unsigned short)12] [(unsigned short)12] &= ((/* implicit */_Bool) arr_42 [i_0] [i_2 + 1] [i_15 - 1] [i_15] [(_Bool)0]);
                            arr_51 [i_0] [i_0] [12ULL] [i_0] [i_0] |= ((/* implicit */int) var_11);
                        }
                        var_45 -= (-(((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_2] [10LL] [i_2 - 1])));
                    }
                }
                for (long long int i_16 = 4; i_16 < 11; i_16 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        var_46 += ((min((var_16), (min((((/* implicit */unsigned long long int) (unsigned short)65490)), (var_4))))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_16] [6U] [8] [i_17])) == (((/* implicit */int) var_6))))), ((+(4611686018427387903ULL))))));
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) 1342640852))));
                            var_48 -= ((/* implicit */int) ((2452737125U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
                            var_49 -= ((/* implicit */_Bool) max((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) * (6194163573709113903ULL)))));
                            var_50 = ((/* implicit */unsigned long long int) max((var_50), (arr_35 [i_1] [i_17])));
                            var_51 -= ((/* implicit */int) (-(((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_17)), (2452737125U)))) & (4611686018427387904ULL)))));
                        }
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned long long int) max((var_52), (11066472911648880225ULL)));
                            var_53 ^= ((/* implicit */unsigned long long int) var_15);
                        }
                    }
                    var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned short) 2305807824841605120ULL))), (min((arr_33 [10LL]), (((/* implicit */unsigned long long int) arr_55 [(signed char)10] [i_16 - 4] [i_16] [i_16] [i_16 + 1] [8ULL])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        for (unsigned int i_21 = 3; i_21 < 12; i_21 += 3) 
                        {
                            {
                                var_55 += ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64168))));
                                var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (~(6U)))), ((+((-9223372036854775807LL - 1LL)))))))))));
                                var_57 = ((/* implicit */unsigned long long int) min((var_57), (min((4053340497374340123ULL), (((/* implicit */unsigned long long int) ((unsigned int) 13835058055282163711ULL)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_22 = 4; i_22 < 11; i_22 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 3) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) + ((+(2448253587277871122ULL))))))));
                                var_59 ^= ((/* implicit */unsigned long long int) var_15);
                                var_60 += ((/* implicit */long long int) ((((/* implicit */int) var_11)) << ((((~(((/* implicit */int) (unsigned short)65499)))) + (65524)))));
                            }
                        } 
                    } 
                    arr_78 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) 1656035627U);
                    var_61 = ((/* implicit */long long int) (-(var_16)));
                }
            }
        } 
    } 
    var_62 = ((/* implicit */_Bool) max((var_62), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)45340)))) && (((((((/* implicit */_Bool) 11229798140708495092ULL)) && (((/* implicit */_Bool) 2638931669U)))) && (((_Bool) (_Bool)0))))))));
    /* LoopNest 3 */
    for (int i_25 = 0; i_25 < 14; i_25 += 3) 
    {
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (unsigned long long int i_27 = 1; i_27 < 10; i_27 += 3) 
            {
                {
                    var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45329))) + (16053924515759281323ULL))) > (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) ^ (arr_82 [6ULL])))))))));
                    var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) > (min((((/* implicit */unsigned int) (unsigned short)58215)), (var_15))))))) : ((+(arr_85 [i_25] [i_26] [(_Bool)1] [6LL]))))))));
                }
            } 
        } 
    } 
    var_65 = ((/* implicit */long long int) var_18);
}
