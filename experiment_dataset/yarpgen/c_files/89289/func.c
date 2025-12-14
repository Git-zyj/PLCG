/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89289
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 -= ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)134)) : (var_6))), ((~(((/* implicit */int) (unsigned char)209))))))) : (866915447U));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            var_20 = arr_6 [i_2 - 2];
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) >= (3757905725U)));
            arr_10 [i_1] [i_2] [i_2] = ((int) 829922536);
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
        {
            var_23 = ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) ? (((/* implicit */int) (unsigned char)160)) : (1879376375));
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_21 [i_1] [i_4] [i_3] [i_1] = var_0;
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_6 + 4] [i_6] [i_6 - 1])) ? (var_9) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned char)187)) : (-180447994)));
                            arr_22 [i_1] [i_3] [i_4 + 3] [i_4 + 2] [i_1] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 180447994)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) (unsigned char)255)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158)))));
        }
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) min((((((1139075011U) | (2439543822U))) | (((/* implicit */unsigned int) 1756868976)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1U)))) ? (min((((/* implicit */int) (unsigned char)200)), (arr_15 [i_1] [i_7]))) : (((((/* implicit */_Bool) 2586692029U)) ? (((/* implicit */int) (unsigned char)30)) : (-822596923))))))));
            var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_1])), (arr_9 [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [i_1 + 3])) ? (4203542703U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253)))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    var_28 ^= ((/* implicit */int) (unsigned char)225);
                    var_29 -= ((/* implicit */unsigned char) (+(min((1048809873U), (max((arr_30 [i_1] [i_1] [i_8] [i_9]), (3155892285U)))))));
                }
                for (int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)63)), (15)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [18] [18]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2173105923U))))))), (((/* implicit */int) var_5)))))));
                    arr_35 [i_1] = ((/* implicit */unsigned char) min((((unsigned int) var_17)), (((/* implicit */unsigned int) ((unsigned char) min((630548840), (1290583215)))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2463311520U) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_15)) == (2173105931U)))) : (((((/* implicit */_Bool) arr_18 [i_8 - 2] [i_8 + 1] [i_1] [i_1 + 3])) ? (arr_18 [i_10] [i_8 - 2] [i_8] [i_1 + 2]) : (arr_18 [i_10] [i_8 + 1] [i_1] [i_1 - 2])))));
                    arr_36 [i_8] [i_1] [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) 142817332)) ? (-846831490) : (((/* implicit */int) (unsigned char)238)));
                }
                for (int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) max((-172357096), (((/* implicit */int) (unsigned char)251))));
                    var_33 = ((/* implicit */unsigned int) min((var_33), (min((((unsigned int) (!(((/* implicit */_Bool) 3521806989U))))), (((/* implicit */unsigned int) (unsigned char)193))))));
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((unsigned int) min((var_10), ((~(590832795U)))))))));
                }
                for (int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 16; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */int) (!(((var_15) >= (((/* implicit */int) (unsigned char)255))))));
                        var_36 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_4) & (67108352))))));
                        arr_46 [i_1] [i_7] [i_8] [i_12] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) var_4);
                    }
                    for (unsigned char i_14 = 3; i_14 < 15; i_14 += 3) 
                    {
                        var_37 = min((1981610817), (min((((-125426677) - (((/* implicit */int) arr_34 [i_1] [i_1] [i_8] [i_8])))), (((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned char)255)))))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1879376375), (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) ((unsigned char) max((1870815944U), (((/* implicit */unsigned int) -1981610812)))))) : (((-1051757458) / (-709728869)))));
                        arr_49 [i_1 + 3] [i_7] [i_7] [i_12] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)75), ((unsigned char)85))))))) ? (-15) : ((((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */int) arr_45 [i_1])) : (((606990262) / (-235494256))))));
                        arr_50 [i_14 - 2] [12] [i_14 + 2] [i_14] [12] [i_14] |= 1935975149;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        arr_54 [i_12] [i_7] [i_1] [i_12] [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_1 - 2] [i_7] [i_8] [i_15])) ? (33554431U) : (((/* implicit */unsigned int) arr_43 [i_1] [i_8] [i_8] [i_8]))));
                        arr_55 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_39 [i_7] [i_7] [i_7]);
                        var_39 = ((/* implicit */int) (-(var_10)));
                    }
                    arr_56 [i_1] [i_7] [i_7] [i_1] = ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) != (arr_33 [i_1] [i_7] [i_8] [i_12])))), (((unsigned int) (unsigned char)64)))) : (min((924544539U), (arr_39 [i_1] [i_1 + 3] [i_1]))));
                    arr_57 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_47 [i_1 - 3] [i_1 - 1] [i_1]) ^ (-1164566095)))) ? ((~(-2075212521))) : (879429522)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) var_16)) : (-843604414)))) && (((/* implicit */_Bool) min(((unsigned char)217), (arr_45 [i_1]))))))) : (min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_16)) : (-1879376373)))))));
                }
                arr_58 [i_8] [i_8 - 3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1457758844U)) ? (((/* implicit */int) var_5)) : (2147483647))))));
                arr_59 [i_1] [i_7] [i_7] [i_1] = var_11;
            }
            var_40 = ((/* implicit */int) arr_53 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 1]);
            var_41 = ((/* implicit */unsigned char) 1960875306U);
        }
        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) max((max((min((var_4), (var_6))), (((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned char)7)))))), (((arr_33 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]) + (min((((/* implicit */int) arr_5 [i_1])), (1031796846)))))));
            arr_62 [i_1] [i_1] = ((/* implicit */int) max((min((arr_5 [i_1]), (arr_5 [i_1]))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)204)) > (2094375013))))));
            arr_63 [i_1] [i_1] = ((/* implicit */unsigned char) min((-1493999402), (((/* implicit */int) (unsigned char)146))));
        }
        arr_64 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1])) ? ((~(min((((/* implicit */unsigned int) -1427878607)), (arr_29 [i_1] [i_1] [i_1 + 3] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1] [i_1 - 1])), (var_4)))) ? (960146457) : ((-(1627861509))))))));
    }
}
