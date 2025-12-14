/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70232
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((((/* implicit */_Bool) 4111417743U)) ? (27021597764222976LL) : (((/* implicit */long long int) 183549552U)));
            var_13 -= ((/* implicit */unsigned int) ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3]))) >> ((+(((/* implicit */int) (unsigned char)10))))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 183549548U)) ? (9002173322032572870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32583))))), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_1]))))))) || (((/* implicit */_Bool) var_1)))))));
            var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
            {
                arr_10 [8LL] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                var_16 = ((/* implicit */_Bool) var_5);
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
            {
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((arr_6 [i_2] [20ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_0] [20ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1])))));
                arr_14 [i_0] [i_2] [i_4] &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) / (var_4)))) ? ((+(-722170023785012950LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))));
                var_18 = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) ^ ((+(arr_9 [(_Bool)1] [i_2] [i_2]))));
                var_19 = ((/* implicit */unsigned char) ((arr_12 [i_0 + 1] [i_2] [i_0 + 1] [i_0]) ? (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (808319219U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (183549561U)));
                var_21 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((unsigned int) var_7)) << (((((/* implicit */int) arr_8 [i_0])) - (12134)))))) : (((/* implicit */_Bool) ((((unsigned int) var_7)) << (((((((/* implicit */int) arr_8 [i_0])) - (12134))) - (15676))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_12 [i_2] [i_5 + 1] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_2]))) : (var_4))))));
            }
            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                var_23 = ((/* implicit */long long int) ((arr_7 [i_0] [i_2] [5LL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0]))))))));
                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) + (((var_2) ? (arr_2 [i_0]) : (var_11)))));
                var_25 = 732942502U;
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_15 [i_0] [i_2] [i_0] [i_6]))));
                var_27 = ((/* implicit */unsigned int) 8521809367854330435ULL);
            }
            var_28 = ((/* implicit */long long int) arr_16 [i_0] [i_0]);
        }
        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (arr_4 [i_7] [i_7])));
            /* LoopSeq 4 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_30 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((unsigned int) 9)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) - (max((min((((/* implicit */unsigned long long int) var_11)), (arr_15 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))), (arr_6 [i_0 - 2] [i_0 - 1])))));
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            arr_32 [i_10] [i_0] [i_8] [i_0] [6U] = ((/* implicit */_Bool) (~(9444570751676978758ULL)));
                            arr_33 [i_8] [i_7] [i_0] [i_7] [19ULL] = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)2)));
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)50766))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) arr_17 [i_0]);
                            var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5744806901487387810ULL)) ? (((/* implicit */unsigned long long int) arr_38 [i_0] [i_7] [i_13] [i_11 - 1])) : (arr_1 [i_0 - 3]))) << (((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_38 [i_7] [i_7] [i_7] [i_11 - 1])))) - (13154643218828461701ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)32583), (((/* implicit */short) ((5872553836523532855LL) > (((/* implicit */long long int) 183549561U))))))))));
                    var_35 = ((/* implicit */long long int) max(((((_Bool)1) ? (7019724560772689018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (974769332U))))))));
                    var_36 -= ((/* implicit */signed char) var_2);
                }
                var_37 = ((/* implicit */_Bool) min((var_37), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned short)28993), (((/* implicit */unsigned short) arr_0 [i_7]))))), ((-(var_1)))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-5872553836523532876LL))))))));
            }
            /* vectorizable */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) ((_Bool) arr_40 [i_0 - 3] [i_15 - 1]));
                var_39 -= ((4294967275U) | (4111417771U));
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_15 - 1] [i_15 - 1] [i_15 - 1])) ? (((arr_7 [i_0] [i_7] [(_Bool)1]) - (arr_24 [i_15] [4LL] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32602)))))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */int) arr_34 [i_7]);
                var_42 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9667861799262148912ULL)) ? (17559903848922406855ULL) : (((/* implicit */unsigned long long int) 14680064U))))) ? ((((+(arr_6 [i_7] [i_7]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_5))))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 5315358516470801421ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50766))) : (183549524U)))))));
                var_43 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) 1406782759U)))) ^ (max((-7694313300715389409LL), (((/* implicit */long long int) 4111417747U)))))));
            }
            /* LoopSeq 2 */
            for (short i_17 = 1; i_17 < 22; i_17 += 1) 
            {
                var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0]))));
                var_45 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0 + 1] [i_0 - 3]) % (((/* implicit */long long int) arr_25 [i_0 - 1] [i_0 + 1] [i_0] [i_17 + 1]))))), (((((/* implicit */_Bool) 0U)) ? (8521809367854330424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (signed char i_18 = 1; i_18 < 22; i_18 += 3) 
            {
                var_46 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_18 [i_0] [i_0])))), (var_3)))), ((-((+(arr_7 [i_18] [i_7] [i_0])))))));
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13943)) ? (((/* implicit */unsigned long long int) 7694313300715389409LL)) : (4159346465705047706ULL))))));
                var_48 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_18 [i_0] [i_7]))), ((-(var_0)))));
            }
        }
        var_49 = ((/* implicit */unsigned int) (-(min((2750364500754906579LL), (3456653638930719394LL)))));
        /* LoopSeq 3 */
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            var_50 = arr_0 [i_0];
            arr_56 [i_0 + 1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((arr_20 [i_19]), (((/* implicit */long long int) var_7))))))) ? (max((((/* implicit */unsigned long long int) 2888184536U)), (4778100273411327630ULL))) : (((/* implicit */unsigned long long int) ((((min((-3832525861106138895LL), (((/* implicit */long long int) (_Bool)1)))) + (9223372036854775807LL))) << (((var_4) - (11730173481488434284ULL))))))));
            var_51 = ((long long int) var_1);
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            var_52 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)102)) & (((/* implicit */int) arr_58 [i_0] [i_0 - 2] [i_20]))));
            var_53 += ((/* implicit */short) (+(((arr_51 [10U] [i_20] [i_0] [12U]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_20] [i_0] [(signed char)0] [i_0])))))));
        }
        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            var_54 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_21])) ? (((/* implicit */int) arr_8 [i_21])) : (((/* implicit */int) arr_8 [i_21])))))));
            arr_63 [i_0] [i_0] = ((/* implicit */long long int) arr_24 [i_21] [i_21] [i_0]);
        }
        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) arr_43 [i_0]))));
    }
    var_56 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_7)))))))), (max((max((((/* implicit */unsigned long long int) 4294967294U)), (13958193368651383367ULL))), (min((((/* implicit */unsigned long long int) 2888184534U)), (18072185237298677658ULL)))))));
    var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3071844358543805856ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) var_6))));
}
