/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66446
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((var_10), ((~(1927422036U))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 3; i_2 < 19; i_2 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (unsigned short)23842))));
                arr_8 [i_0] [i_1] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1089963462)) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16528)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 2367545259U)) ? (1927422036U) : (4294967279U)))))) >= (max((((((/* implicit */_Bool) arr_4 [i_2])) ? (7ULL) : (((/* implicit */unsigned long long int) 3384570874U)))), (((/* implicit */unsigned long long int) ((84249936U) * (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0 - 2] [i_2]))))))));
            }
            for (long long int i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
            {
                arr_11 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) (-(7023632063817400185LL)));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 5842931775721188411LL))));
            }
            for (long long int i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
            {
                arr_16 [i_0 - 1] [12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)))) ? (max((((/* implicit */long long int) 0U)), (-573772014811174772LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44838)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)44838)) / (var_3))), (((/* implicit */int) ((357039578) <= (-459337723))))))) : ((~(4275598176632217121ULL)))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((arr_0 [i_0] [(short)10]) == (((/* implicit */unsigned int) var_6)))))));
                arr_17 [i_4] [i_1] [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (12629844497430003905ULL)))))));
                arr_18 [i_0 - 3] [i_0] [i_0 - 3] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((var_12) ? (-1169671533538007967LL) : (2088211266399198173LL))) >> (((((((/* implicit */_Bool) 12629844497430003905ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2966813201U))) - (14606U))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_12)), (arr_7 [i_4 - 2] [i_0])))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max(((short)-32760), (((/* implicit */short) (!(((/* implicit */_Bool) var_0))))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                arr_22 [i_0] = ((/* implicit */long long int) (unsigned char)69);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) 3691052115339992557LL);
                    var_19 += ((/* implicit */unsigned long long int) 8191);
                    arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0 - 2] [i_1])) ? (((unsigned int) (_Bool)1)) : (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                }
            }
            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_0] [(signed char)18])), ((unsigned short)20697)))) ? ((~(((/* implicit */int) (unsigned short)20697)))) : (((((/* implicit */_Bool) arr_7 [i_0] [10])) ? (((/* implicit */int) (_Bool)1)) : (var_3)))));
            var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (((/* implicit */long long int) 300146097)) : (1370671647152979322LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_12)), (arr_0 [i_0] [(short)6]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) | (4252780707164129109LL)))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (unsigned short)58528))));
        }
        /* LoopSeq 1 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_23 *= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) arr_13 [6])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (14198260321413838748ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)34)) < (0)))) >> (min((((/* implicit */unsigned int) var_7)), (0U))))))));
                arr_32 [i_0 + 1] [13U] [i_0] = ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned long long int) var_3)) : (((8048436780737628938ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                var_24 -= ((/* implicit */unsigned int) arr_26 [2U] [2U] [i_9]);
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_40 [i_0] = ((/* implicit */_Bool) min((3691052115339992557LL), (((/* implicit */long long int) (short)-32740))));
                            arr_41 [i_0] [i_7 - 1] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 524168267)), (1370671647152979322LL))))));
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -413769605))) ? (((/* implicit */int) ((_Bool) 1370671647152979322LL))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_9))))))) ? (((/* implicit */unsigned int) (+(8180)))) : (var_2));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (8181) : (var_4))) == (((((/* implicit */_Bool) (short)2490)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) >= ((+(((((/* implicit */_Bool) 8191)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (3691052115339992557LL)))))));
                            var_27 &= ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) 8190)) <= (4520161957894826946ULL)))))) : (((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) == (((/* implicit */int) (!(((/* implicit */_Bool) 221203841U)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_28 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) var_11)))) ? ((~(var_3))) : (((/* implicit */int) arr_21 [i_0] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8400164318805070085ULL)) ? (1370671647152979344LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_7 - 1] [4] [i_12])))))) ? (var_3) : (((/* implicit */int) arr_26 [i_0] [i_7 - 1] [i_9]))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_47 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */int) (_Bool)1);
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_7 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) -573772014811174758LL)) ? (((/* implicit */int) arr_45 [i_13] [i_7] [i_9] [i_12] [i_13])) : (((/* implicit */int) arr_27 [i_9]))))));
                        var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2468427899741155050LL)) ? (1004094243U) : (var_10)))));
                    }
                }
                for (int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_32 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 5ULL)))) : (arr_20 [i_0])))));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_26 [i_0] [i_7 - 1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 3])) && (((/* implicit */_Bool) arr_44 [i_0] [0ULL] [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 1])))))));
                    var_34 = ((((/* implicit */_Bool) -1998994957)) ? (3455406877U) : (((/* implicit */unsigned int) 1998994957)));
                    var_35 = ((/* implicit */unsigned char) max((((long long int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (-2468427899741155074LL) : ((+((-9223372036854775807LL - 1LL))))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    arr_52 [i_0] [i_7] [i_0] [i_15] = min((2468427899741155074LL), (((/* implicit */long long int) (short)-1)));
                    arr_53 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_15]))))) ^ (((/* implicit */int) ((unsigned short) arr_5 [i_15] [i_9] [i_7] [i_0 + 1])))))) ? (((/* implicit */unsigned int) var_3)) : (852670804U));
                }
            }
            var_36 = ((/* implicit */unsigned long long int) ((((-1370671647152979340LL) | (((/* implicit */long long int) -1956144262)))) & (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            var_37 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)247)), (max((810799022), (((/* implicit */int) arr_23 [(short)5] [5ULL]))))))) || (((/* implicit */_Bool) ((long long int) var_3)))));
        }
    }
}
