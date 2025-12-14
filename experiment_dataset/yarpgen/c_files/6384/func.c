/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6384
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)66)) == (((/* implicit */int) var_0)))))) != (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2135))) : (var_8))))))) != (((-5822882860771000335LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0 - 2] [i_0 - 2])))));
                                var_13 += ((((/* implicit */_Bool) -1065282597)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (2221450507U));
                                arr_16 [(signed char)0] [i_3] = ((/* implicit */signed char) (-(max((-3757528960155679904LL), (((/* implicit */long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_14 = (-(((arr_11 [i_5]) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [(short)4] [(signed char)17] [i_5] [i_6])) : (((/* implicit */int) arr_4 [i_6 + 1] [i_5 - 1] [i_0 + 1])))));
                                var_15 = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((3154396906U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) (short)240)) ? (arr_18 [7LL] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [(short)0] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_5 [i_0 + 1] [i_0 - 1]) > (arr_5 [i_0 - 4] [i_0 - 3]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) ((_Bool) var_2)))), (((((/* implicit */_Bool) 7605288248420782520LL)) ? ((+(1226010885994146406LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2])))))));
    }
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */short) arr_23 [i_7]);
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (unsigned char i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    {
                        arr_35 [i_10] = ((/* implicit */unsigned short) min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) arr_27 [i_7] [i_7]))), (((arr_34 [i_7] [i_7] [i_7] [i_9] [(unsigned short)11] [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [i_8] [i_9]))))))))));
                        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)149))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (unsigned char)243)), (4294967295U))) >> (((max((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((var_4) - (12061104))))), (min((1657828974), (var_6))))) - (2147483511)))));
    }
    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
    {
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_11] [(unsigned short)4] [i_11]))));
        arr_38 [i_11] = ((/* implicit */signed char) (+((((_Bool)1) ? (0) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            arr_43 [i_12] [i_12] [(unsigned short)3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5935412502024236265LL)) ? (4304773949546512343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (arr_15 [i_13] [i_13 - 1] [12LL] [i_13] [i_13] [i_13] [i_13 - 2])));
            var_21 = ((/* implicit */unsigned long long int) (((-(var_8))) > (var_8)));
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_12] [i_13] [i_14] [i_14] [i_14] [(signed char)10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(signed char)18]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 13; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) (+(-1657828975)));
                            arr_50 [(unsigned char)9] [(signed char)10] [i_12] [(unsigned char)9] [i_15] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                            arr_51 [i_12] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_12] [i_13] [i_14] [i_15] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_13] [17]))) : (-8158527280085896314LL))))));
                        }
                    } 
                } 
                arr_52 [i_14] [i_14] [4LL] [i_12] = ((/* implicit */int) arr_23 [1ULL]);
                arr_53 [10ULL] [i_13] [i_13] [i_12] = ((arr_27 [i_13 + 1] [i_14]) >> (((arr_27 [i_13 + 2] [i_13]) - (3615188115013299231LL))));
            }
        }
        for (short i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
        {
            arr_57 [i_12] [i_12] = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)58702)) : (-1511589935));
            var_24 &= (+(((/* implicit */int) arr_42 [i_12] [i_17])));
        }
        for (short i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)244))))) && (((/* implicit */_Bool) ((signed char) (unsigned char)251))));
            arr_61 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (+((+(18301463425600451204ULL)))));
        }
        var_26 *= ((/* implicit */signed char) arr_9 [i_12] [i_12] [(signed char)10]);
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_20 = 1; i_20 < 13; i_20 += 2) 
            {
                var_27 = ((((((((/* implicit */int) arr_33 [i_12] [(unsigned short)8] [i_12] [i_12] [(signed char)10] [(unsigned short)6])) + (2147483647))) << (((((/* implicit */int) var_9)) - (1))))) < (((/* implicit */int) ((signed char) 3584U))));
                arr_66 [i_12] [i_12] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 2290564752473174094LL))));
                var_28 = ((/* implicit */unsigned int) ((short) arr_41 [i_20 + 2] [i_20 + 2] [i_20 + 1]));
                arr_67 [i_12] [i_19] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)216)) - (188)))));
            }
            var_29 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_25 [i_12])) & (((/* implicit */int) var_1)))));
        }
    }
}
