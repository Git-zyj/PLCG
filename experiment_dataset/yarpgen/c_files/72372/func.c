/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72372
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) && (var_15)));
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) * (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned char)234), (((/* implicit */unsigned char) (signed char)13)))))))) : (((((633085444U) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53749))) : (1376188761U)))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2918778513U)) ? (2918778492U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? ((+(((/* implicit */int) arr_0 [(signed char)11] [i_1 + 1])))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
            var_21 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0 - 1])) ? (arr_2 [i_1 - 1] [i_0 - 1]) : (arr_2 [i_1 + 2] [i_0 - 1]))) + (9223372036854775807LL))) >> (((/* implicit */int) max((arr_0 [i_1 + 2] [i_0 - 1]), (arr_0 [i_1 - 1] [i_0 - 1]))))));
            arr_6 [i_1] = var_15;
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_22 = 1376188782U;
            var_23 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2 + 1]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (((+(max((((/* implicit */unsigned int) (unsigned short)51761)), (1376188804U))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                        var_25 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))), (((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_0] [i_4] [i_3])))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((min((1262277046U), (var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28219)) && (((/* implicit */_Bool) 3929915515U))))))))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (_Bool)1))));
                        var_27 = (unsigned short)0;
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned char) (!((!(var_15)))));
            arr_18 [i_3] [i_3] = max((((/* implicit */unsigned char) arr_0 [i_3] [i_0])), ((unsigned char)162));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_14 [i_0] [i_3] [i_6])), (((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1376188761U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23223))) : (((arr_19 [(unsigned char)18] [(unsigned short)16]) ? (var_12) : (3261584233U)))));
                    var_31 *= ((/* implicit */unsigned char) (_Bool)0);
                }
                var_32 = ((/* implicit */unsigned short) 0U);
                var_33 *= ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
            {
                arr_27 [i_0 - 1] [i_3] [i_8] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_24 [(unsigned short)2] [i_0 - 1] [13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_24 [i_0] [i_0 - 1] [i_8])))));
                var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_1 [(unsigned short)12] [i_3])), (min((((/* implicit */unsigned short) arr_13 [i_0 - 1] [i_3] [i_8])), (var_5)))));
                arr_28 [i_0 - 1] [i_3] [i_0 - 1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [(_Bool)1] [i_3] [i_3] [i_3]))));
            }
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned short i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)113)) && (((/* implicit */_Bool) (signed char)13))))) : (((/* implicit */int) (unsigned short)37010)))))));
                            arr_38 [i_3] [i_3] = ((/* implicit */_Bool) max(((unsigned char)222), ((unsigned char)255)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) (((((+(511LL))) > (((/* implicit */long long int) (((_Bool)0) ? (1376188803U) : (((/* implicit */unsigned int) 1648623046))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : ((~(arr_12 [i_3] [i_0 - 1])))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_37 [(unsigned short)18] [i_3] [i_9] [(_Bool)1])), (-4696868256055243839LL)))))) ? (((/* implicit */int) ((7385979407541992934LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_40 [(unsigned short)4] [i_3]))))))))))));
                            arr_45 [i_3] [i_12] [i_9] [i_3] [i_3] = min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)233)))), (((arr_11 [i_0 - 1] [i_0] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_44 [i_0] [i_3] [i_9] [(unsigned short)18] [i_0 - 1] [i_0] [i_3]))));
                        }
                    } 
                } 
                var_38 *= ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1376188804U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0)))))))), ((signed char)94)));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_39 = ((/* implicit */unsigned int) min((var_39), (min((((/* implicit */unsigned int) arr_46 [i_0] [i_0] [(_Bool)1] [i_14] [i_0] [i_0])), (((arr_7 [i_0 - 1]) ? (((/* implicit */unsigned int) arr_46 [i_0] [i_0] [i_3] [i_3] [i_9] [i_14])) : (((unsigned int) 3032690250U))))))));
                    var_40 *= (+(((/* implicit */int) (unsigned short)37338)));
                    var_41 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) var_13))))))), (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))), ((+(549755813887LL)))))));
                }
                var_42 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? ((+(2243173745U))) : (2U)))) ? (((arr_32 [i_9] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_9]) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_34 [i_0] [i_0 - 1])))) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)66)) > (((/* implicit */int) (unsigned short)62637))))))))));
            }
        }
        for (long long int i_15 = 1; i_15 < 17; i_15 += 1) 
        {
            var_43 = ((/* implicit */unsigned short) var_0);
            arr_52 [i_0] [i_15] = ((/* implicit */unsigned short) min((418421434U), (((/* implicit */unsigned int) (unsigned short)2047))));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49)))))));
            var_45 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1376188803U)));
        }
        var_46 = ((/* implicit */unsigned short) 2918778493U);
    }
}
