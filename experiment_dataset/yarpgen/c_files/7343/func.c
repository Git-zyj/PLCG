/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7343
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35430)) ? (((/* implicit */int) (unsigned short)35427)) : (((/* implicit */int) (unsigned char)20))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? ((-(((/* implicit */int) (unsigned short)35425)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)35432))) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_0))))))), ((+((~(898932737U)))))));
                        arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17401))) - (144115188075855871LL)))) ? ((~(((/* implicit */int) (short)-947)))) : (min((((/* implicit */int) (unsigned char)16)), (arr_1 [i_0] [i_3])))));
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) min((arr_10 [(short)5] [i_1] [i_2] [(short)5]), (((/* implicit */short) arr_2 [(unsigned short)2] [i_1] [i_3]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)54729))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (arr_18 [i_4] [i_4]))))))), (((((/* implicit */int) arr_20 [i_0])) & (((/* implicit */int) arr_20 [i_0]))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((1495759635U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_4] [i_5] [i_6] [i_6])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0] [i_4] [i_5 - 1]))) - ((~(((/* implicit */int) ((unsigned short) (unsigned short)64533)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_5 + 2]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1] [i_5 + 2]))) : (arr_3 [i_7] [3ULL]))))));
                        arr_26 [i_0] [i_1] [i_4] [i_0] [i_7] [i_1] = ((/* implicit */signed char) 1934985280U);
                        var_27 = ((/* implicit */short) ((signed char) (short)-947));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [(unsigned short)8] [i_4] [i_5 + 2] [i_8]);
                        var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)0)), (((unsigned short) ((((/* implicit */int) (unsigned short)65525)) % (((/* implicit */int) arr_6 [i_8] [i_1] [i_1])))))));
                    }
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [(short)3] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_9]))));
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4]))) + (((unsigned long long int) arr_8 [i_5 + 1]))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 885037149U)) ? (((/* implicit */int) arr_24 [7ULL] [7ULL] [i_4] [7ULL] [7ULL])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_30 [i_0])) + (((/* implicit */int) (short)-4478))))))));
                        var_31 -= ((/* implicit */unsigned long long int) 2359982016U);
                        arr_33 [i_0] [i_0] [4ULL] [i_4] [i_5] [(unsigned short)4] [i_9] |= ((/* implicit */int) ((long long int) (~(((/* implicit */int) (unsigned short)22277)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_1] [i_10] [i_0] [i_10] = ((/* implicit */unsigned char) ((long long int) arr_6 [8ULL] [i_5 + 2] [i_10]));
                        arr_37 [i_0] [i_0] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_5] [i_5] [i_10])) : ((~(((/* implicit */int) (unsigned char)11))))));
                        var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_5 - 1] [(short)6] [i_5] [i_5 + 1] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_9 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) (unsigned short)33355)))) : (((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5] [i_5] [i_5 + 2] [i_5 + 1])) ? (((/* implicit */int) arr_9 [i_5 - 1] [i_5] [9ULL] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_24 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 2]))))));
                        var_33 = (+(((((/* implicit */_Bool) ((unsigned int) (signed char)-39))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_4])))))));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-21)), (((unsigned char) arr_2 [i_5 + 1] [i_5 - 1] [i_5 - 1])))))));
                    }
                    arr_38 [(signed char)7] [(signed char)7] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_4] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])))) < (((((/* implicit */int) min(((unsigned short)25904), (((/* implicit */unsigned short) (signed char)11))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))))));
                    arr_39 [(unsigned short)5] [0ULL] [i_4] [0ULL] [0ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2359981999U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54729))) : (7777610914104730057LL)))) ? ((-(((/* implicit */int) var_15)))) : (((((/* implicit */int) arr_0 [i_5])) - (((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)5])))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) -2147483632)) ? (1469144403U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_4] [i_11] [i_12]))))), (((/* implicit */unsigned int) ((unsigned short) (signed char)-1))))))));
                            var_36 *= ((/* implicit */unsigned long long int) (unsigned char)128);
                        }
                    } 
                } 
                arr_46 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (14097176118577644609ULL)))) <= (((var_13) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) arr_30 [i_0])))))))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3622)))))))) ? (min((14153704586663498292ULL), (((/* implicit */unsigned long long int) (unsigned char)235)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)55))))));
            }
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 3; i_14 < 9; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 1; i_15 < 7; i_15 += 1) 
                        {
                            arr_55 [i_14] [i_13] [i_1] |= ((/* implicit */signed char) (unsigned short)54719);
                            var_38 |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-112)))))))));
                            arr_56 [i_0] [i_0] [i_1] [i_13] [i_14] [i_15 - 1] = ((/* implicit */unsigned char) max(((short)15218), (((/* implicit */short) (_Bool)1))));
                            var_39 = ((/* implicit */_Bool) max((var_39), ((!(((/* implicit */_Bool) arr_54 [i_14 - 1] [9LL] [i_15 - 1] [i_14 - 2]))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            arr_59 [i_0] [i_0] [i_13] [i_13] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) 382975143987867654LL)))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40795)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36015)) / (((((/* implicit */_Bool) -7777610914104730043LL)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (short)-24095))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (unsigned char)244)) : (1571739241)))) ? (arr_16 [i_0] [2LL] [i_0] [i_16]) : (((/* implicit */unsigned long long int) max((7777610914104730036LL), (((/* implicit */long long int) 2359981999U))))))))))));
                        }
                        for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
                        {
                            arr_64 [i_17] [i_1] [i_13] [i_14 + 1] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2359982005U)) % (2940839307784128688ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((2146833676036601890ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))))))))) : (((((/* implicit */_Bool) min((arr_34 [i_0] [i_14 + 1]), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_13] [i_17]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_28 [i_17] [i_17] [i_17]))))));
                            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)24094)) <= (((/* implicit */int) (unsigned short)46931)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_14 - 3] [i_17] [i_14 - 3] [i_17])) != (((/* implicit */int) arr_25 [i_14] [i_14 - 1] [i_14] [9U] [i_14 - 3])))))) : (((((/* implicit */_Bool) max((1934985281U), (((/* implicit */unsigned int) (signed char)26))))) ? (5145263214646817659ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_1]))))))))))));
                            var_42 = ((/* implicit */unsigned long long int) max((min((arr_1 [i_14 - 1] [i_17 - 1]), (arr_1 [i_14 - 3] [i_17 - 1]))), ((~(((/* implicit */int) ((1179436035U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                        }
                        arr_65 [i_0] [i_1] [i_1] [i_13] [i_14 - 3] [i_14] = ((/* implicit */long long int) arr_31 [i_0] [(unsigned char)4] [i_0] [i_1] [(signed char)1] [i_13] [i_14 - 2]);
                        var_43 = ((/* implicit */signed char) 10630629317797514215ULL);
                    }
                } 
            } 
        }
        arr_66 [i_0] = ((/* implicit */unsigned short) (+(max((((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [3LL] [i_0]))))))));
        arr_67 [i_0] [3ULL] = ((/* implicit */signed char) arr_47 [7U] [7U] [7U]);
        var_44 += ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [8U] [i_0] [i_0])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
        arr_68 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) min((arr_30 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)24514))))))))));
    }
    var_45 = ((/* implicit */_Bool) var_7);
    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) 2359982005U))));
    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10957854397137004854ULL)) ? (var_16) : (((((/* implicit */_Bool) (short)24514)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53435))) : (var_16)))))) ? (((/* implicit */unsigned long long int) ((int) 5145263214646817679ULL))) : (11547447515925997114ULL)));
}
