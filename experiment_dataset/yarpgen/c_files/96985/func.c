/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96985
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
    var_15 -= ((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    var_16 = var_1;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (unsigned char)146);
                            var_18 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (unsigned short)46952)) : (((/* implicit */int) (signed char)-110))))), ((~(arr_0 [i_0])))));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-44)) / (((/* implicit */int) (_Bool)1))))) ? (max((var_7), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_2] [i_1] [i_2])))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-865453015450532586LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max(((((_Bool)1) ? (((/* implicit */long long int) 4018392699U)) : (-8912041733984251502LL))), (8930128010518706485LL))))));
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_14 [i_4] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0]);
                                var_21 -= ((/* implicit */unsigned int) (-(-8912041733984251502LL)));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))) : (var_8))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_5])))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_14))) & (((((/* implicit */_Bool) var_14)) ? (var_12) : (3080078464U)))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(4446103628112150743LL)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                            }
                        }
                    } 
                } 
                var_25 += ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) arr_11 [i_0])))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0] [i_0]))))) : (((/* implicit */long long int) 3080078464U)))), (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 4446103628112150725LL)))) ? ((+(5113211542152959614LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) arr_21 [i_6]);
        var_27 *= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_6]))) < (((8912041733984251502LL) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_6]))))))) ? (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_6])) != (((/* implicit */int) (signed char)-126)))))))) : (((/* implicit */int) min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6]))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) -3126828912868321758LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) : (18ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_31 [i_7] [i_9] [i_8] [i_8] [i_7] [i_6] = ((/* implicit */long long int) arr_25 [i_7]);
                            arr_32 [22U] [22U] [22U] [i_8] [22U] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -181884039)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1022))) : (var_14)));
                            arr_33 [i_6] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_6] [i_6]))));
                            var_29 = ((/* implicit */signed char) -4926077312400591504LL);
                            arr_34 [i_8] [(short)6] [(short)6] [(short)6] [i_10] [19ULL] = ((/* implicit */int) 6959081314743048671LL);
                        }
                        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)250))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (2062789134) : (((/* implicit */int) (signed char)-125)))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            {
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_24 [i_12] [i_12] [i_12]))));
                arr_43 [i_12] [i_12] [i_12] = ((/* implicit */int) (+(min((var_13), (((arr_9 [i_12] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
            }
        } 
    } 
}
