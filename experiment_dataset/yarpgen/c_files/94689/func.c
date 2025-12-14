/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94689
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (short)27847)) <= (var_11)))), ((unsigned short)502)))) + (min((((/* implicit */int) var_6)), (((((/* implicit */int) (unsigned char)248)) >> (((((/* implicit */int) (unsigned short)65535)) - (65523)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) < (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))));
        var_14 -= ((/* implicit */_Bool) ((((unsigned int) (unsigned char)0)) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_15 = ((/* implicit */unsigned long long int) (~((~(var_10)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((arr_1 [i_0 - 1] [i_0 + 1]) / (((/* implicit */long long int) 4294967295U))))));
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_16 = (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)8)) != (((/* implicit */int) arr_7 [i_2] [i_1])))))));
            var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) (unsigned char)248))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)7)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
            {
                var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [7] [i_3] [i_1 - 3]))))) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_1])) : (((/* implicit */int) ((arr_6 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 3] [i_1])))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_5] [i_1] [i_1] = ((/* implicit */long long int) var_8);
                            arr_18 [i_1] [i_4 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) -2118132318)) > (arr_15 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) arr_0 [i_2 - 1] [8]);
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
            {
                arr_23 [i_1 - 1] [i_1] [(_Bool)1] [i_6] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_21 [i_1 - 1] [i_2 + 1] [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) arr_5 [i_2])))))) : (((/* implicit */int) arr_8 [i_6] [i_2] [i_1])));
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    arr_26 [i_1 + 1] [i_2] [i_6] [0LL] &= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 5784408480143806232LL)))))));
                    var_21 &= ((/* implicit */long long int) min(((~(4294967291U))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned char)0)))))));
                    arr_27 [i_6] [i_6] [(short)9] [i_7 - 1] [i_1] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [13LL] [i_2 - 1] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (min((arr_21 [i_1] [i_1] [i_6] [i_7]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 2] [i_1])) && (((/* implicit */_Bool) (unsigned char)30)))))))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) == (((/* implicit */int) arr_11 [i_1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) == (1884437274U)))) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) || (((/* implicit */_Bool) (unsigned char)204)))))));
                        arr_31 [i_1] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [i_2])), (18446744073709551592ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -477711865)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1884437274U))))));
                        arr_32 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_19 [i_1] [i_2] [i_6] [i_8])) > (((/* implicit */int) var_5)))) ? (((/* implicit */int) ((short) arr_6 [i_1]))) : (((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */short) (_Bool)1)))))))), (max((((/* implicit */unsigned long long int) (unsigned char)248)), (max((1960598492350751480ULL), (((/* implicit */unsigned long long int) var_10))))))));
                        arr_33 [i_1] [i_2 - 1] [i_6] [i_1] [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_20 [i_6] [i_6]))))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) arr_11 [i_1]))))) : (var_11)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                    {
                        arr_37 [5U] [5U] [i_6] [i_7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1])) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */unsigned int) ((_Bool) arr_7 [i_1 + 1] [i_2 - 1]));
                        arr_38 [i_1] [i_1] [i_6] [i_7 + 1] [i_9] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]))) : (arr_21 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                    }
                }
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) -68960174844836327LL)) ? (((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_2 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 + 1] [i_2 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2305843009213693952LL)) ? (((/* implicit */int) arr_20 [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) var_5)))))));
                var_24 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [6LL])) ? (((/* implicit */int) arr_0 [0LL] [0LL])) : (((/* implicit */int) min((arr_5 [i_1]), ((short)-4))))))) && (((/* implicit */_Bool) ((arr_25 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_1] [i_2 - 1] [6U] [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_20 [8] [i_6]))))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 2] [i_1])) : (((/* implicit */int) (unsigned char)133))))) % (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) var_7))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (signed char i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-4))));
                            var_27 -= ((/* implicit */long long int) ((((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [(unsigned short)8] [i_1 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_10 - 1] [i_10 - 1])) / (var_11))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_11] [i_13 - 2]))) : (arr_47 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_14 = 1; i_14 < 15; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) (~(3348292737837679931ULL)));
                var_30 ^= ((/* implicit */long long int) -1055827573);
            }
            var_31 &= ((/* implicit */short) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_5)))) << (((3088675427595335392LL) - (3088675427595335379LL)))))) == (2005818253U)));
        }
        for (unsigned short i_16 = 1; i_16 < 15; i_16 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_55 [i_16 + 1] [(signed char)11] [i_16 + 1] [i_16]), (((/* implicit */long long int) ((int) (unsigned char)7)))))) ? (((/* implicit */int) (((~(-1091136589449195675LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) (_Bool)1)))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1 - 2] [i_1 - 2] [(signed char)2])) ? (((/* implicit */int) arr_22 [i_1 - 2] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 3])) < (((/* implicit */int) (unsigned char)204))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_1 + 1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_22 [i_1 - 2] [i_1 - 3] [i_1]))))));
            var_34 = ((/* implicit */int) (unsigned char)7);
        }
        arr_59 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_8 [i_1 - 1] [i_1] [i_1 - 3]), (arr_35 [i_1 - 3] [i_1] [i_1] [i_1 - 1] [(short)15] [i_1 - 3])))) != (((/* implicit */int) arr_35 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1] [i_1] [i_1]))));
    }
}
