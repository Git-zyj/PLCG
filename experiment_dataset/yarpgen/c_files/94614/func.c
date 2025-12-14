/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94614
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
    var_17 ^= (unsigned short)8192;
    var_18 = ((/* implicit */unsigned short) ((unsigned int) var_8));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min(((short)32762), ((short)32762))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 ^= ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) arr_6 [i_2])));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) ((arr_11 [i_2] [i_1] [i_2] [i_1]) ? (arr_0 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762)))))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) (!(((((((/* implicit */int) arr_14 [i_0] [i_2] [i_4] [i_4] [i_0])) >= (((/* implicit */int) var_13)))) || (((/* implicit */_Bool) (unsigned short)32256))))));
                        var_23 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4 - 1] [i_4 + 1] [i_2])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_4 - 1] [i_4] [i_0])) : (((/* implicit */int) arr_11 [i_2] [i_4] [i_4 - 1] [i_4 + 2])))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_4 - 1] [i_2] [i_1] [i_4]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_24 *= min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)7))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-32763)))) & (((((/* implicit */_Bool) arr_13 [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(signed char)10]))) : (var_0))))));
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */int) min((min((max((((/* implicit */unsigned int) var_12)), (462574148U))), (((/* implicit */unsigned int) arr_17 [(unsigned char)6] [i_1] [i_2])))), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_0] [(signed char)9] [i_6]))));
                            arr_23 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_16 [(short)10] [i_1] [i_2] [i_2] [i_5] [i_0])) : (((/* implicit */int) (short)-9652))))), (((((/* implicit */_Bool) var_3)) ? (-7660052172175690624LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_5] [i_2])) == (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_5] [6]))))), ((-(2050128181)))));
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1592554004U)) ? (((((/* implicit */int) max((arr_1 [i_2]), (var_7)))) + ((+(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_5])))))) : (((/* implicit */int) ((short) arr_13 [i_0] [i_0])))));
                            var_26 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4310884616982951281LL))))), (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_3))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_7] [i_1])))), (((/* implicit */int) (unsigned char)134)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_1] [i_2] [i_5]))) ^ (var_3))), (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_5 [(signed char)2] [(signed char)2])) : (((/* implicit */int) var_10))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2702413291U)))))))));
                            arr_31 [i_0] [i_1] [i_0] [i_1] [i_8] = ((((((/* implicit */_Bool) -2050128185)) ? (((/* implicit */int) min((var_15), (((/* implicit */short) arr_19 [i_0] [i_1] [i_2] [i_5] [(_Bool)1] [i_0] [i_0]))))) : ((+(63886266))))) ^ ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-13676)))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_34 [i_0] [i_2] [i_1] [i_5] [i_9] [i_0] [i_1] |= ((/* implicit */unsigned char) var_2);
                            arr_35 [i_0] [i_1] [i_1] [i_0] [i_9] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) var_6)), (arr_8 [i_0]))))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] = ((signed char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_10] [(signed char)9]);
                            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(473032526476761408LL)))) || (((/* implicit */_Bool) 2050128184))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */unsigned short) -1825329309);
                            var_30 ^= ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) ((short) var_16))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (539088931004792248ULL))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) arr_28 [i_0] [i_1] [i_2] [i_11] [i_11]))), (max((1592554004U), (((/* implicit */unsigned int) arr_42 [i_0] [i_11] [i_2] [i_2] [i_11]))))))) ? (max((((/* implicit */unsigned long long int) (short)-29455)), (3753175776859377318ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [10U] [i_0] [i_1] [(short)0] [i_1] [i_11])))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_5] [i_0] [i_5] [i_5] [i_12] = ((/* implicit */signed char) ((short) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_16))))))));
                            var_32 ^= ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) (signed char)60)), (2050128184)))) < (var_2)));
                            var_33 *= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) ((1335361920U) <= (285708182U)))) + (((/* implicit */int) min((var_15), (((/* implicit */short) arr_43 [i_2] [i_1] [i_2] [i_5] [i_12] [i_5] [i_5]))))))));
                            arr_46 [i_12] [i_1] [i_12] [i_0] [i_12] = (signed char)60;
                            arr_47 [i_0] [i_12] [i_12] [(unsigned char)12] [i_12] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_2] [i_5]))) != (min((((/* implicit */int) arr_4 [i_0])), (-2050128184)))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
                        {
                            arr_50 [i_2] [i_5] |= ((/* implicit */unsigned char) arr_12 [1ULL] [i_1] [i_5] [i_5] [i_13]);
                            arr_51 [i_2] [i_2] [i_2] [i_5] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_13] [i_13])), (((arr_19 [i_0] [i_0] [i_2] [i_5] [i_13] [i_13] [i_13]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_38 [i_0] [i_1] [i_5] [(short)6] [(signed char)4] [i_0] [i_2]))))))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_1] [i_13] [i_13]))) != (1888394034960520011LL)))) << (((/* implicit */int) ((_Bool) arr_13 [i_5] [i_5]))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            var_34 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_32 [i_0] [i_0])) == (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1])))))) >= (((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_13] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_44 [i_0] [i_1] [i_0] [i_13] [i_13]))) : (((/* implicit */int) ((signed char) arr_37 [i_0] [(_Bool)1] [i_1] [i_5] [i_13] [(_Bool)1] [i_5])))))));
                        }
                        var_35 = ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [(unsigned char)13] [i_5] [i_0] [i_1]);
                        arr_52 [i_0] [i_1] [i_2] [i_0] [(short)10] [i_2] |= ((/* implicit */signed char) max(((~(((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_16 [i_0] [i_1] [i_5] [i_5] [i_0] [i_2]))))))), (min((((((/* implicit */int) arr_10 [i_0] [8] [12] [i_2] [8] [i_2])) ^ (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) ((unsigned char) var_1)))))));
                    }
                    var_36 = ((/* implicit */_Bool) min((var_36), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_2] [i_1] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1] [i_2]))))) ? (((((/* implicit */int) arr_9 [i_2])) ^ (((/* implicit */int) (unsigned short)4296)))) : (((/* implicit */int) min((var_9), (arr_16 [i_0] [10] [i_2] [i_2] [(signed char)2] [i_2]))))))) == (((((unsigned int) (_Bool)1)) << (((((((/* implicit */_Bool) (short)5050)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_0 [i_2] [i_2]))) - (2883179598ULL)))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((((((/* implicit */int) var_1)) <= (((/* implicit */int) var_16)))) ? (((((/* implicit */_Bool) 14761094978619252445ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_32 [(signed char)2] [(unsigned char)2])))) : (((int) var_0)))) ^ ((((-(((/* implicit */int) var_6)))) * (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0])))))))))));
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    {
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_33 [i_15] [i_0] [i_15] [6ULL] [12]))));
                        arr_59 [i_0] [i_14] [i_15] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_36 [i_0] [10LL] [i_0] [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (short)31878))))))));
                    }
                } 
            } 
        } 
        var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_24 [(short)2] [i_0] [i_0] [6U] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(short)12] [(short)12] [i_0]))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))) : (3685649095090299171ULL)))))) ? (((((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0]))) >> (((((((/* implicit */_Bool) 2702413291U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) - (30394))))) : (max((((/* implicit */int) var_16)), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_5))))))));
        var_40 = ((/* implicit */int) min((var_40), ((((~(((/* implicit */int) arr_4 [8])))) ^ ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_9 [(unsigned short)0])) : (((/* implicit */int) var_5))))))))));
    }
    var_41 = ((/* implicit */int) (signed char)46);
    var_42 |= ((/* implicit */unsigned long long int) var_4);
}
