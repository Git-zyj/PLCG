/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85006
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) var_5);
        arr_2 [i_0] = ((/* implicit */int) (unsigned short)31649);
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)33866)) : ((-(((/* implicit */int) arr_4 [i_1 - 1]))))));
                                arr_15 [i_1] [i_2 + 2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) arr_3 [i_4] [i_2 + 1])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((_Bool) (unsigned short)33886))) : (((/* implicit */int) var_1))))));
                                var_20 *= ((/* implicit */short) var_17);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (unsigned short)33872);
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)31630), ((unsigned short)33866)))) ? (min((((/* implicit */long long int) 818871652)), (arr_12 [i_1] [i_1] [i_1] [i_3 - 1] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_3 - 1])) >= (((/* implicit */int) var_17))))))))) ? (((/* implicit */int) ((short) (unsigned short)33887))) : (((/* implicit */int) (unsigned char)38))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((long long int) (unsigned short)31679));
    }
    var_24 = var_2;
    var_25 = ((/* implicit */signed char) (unsigned short)31649);
    var_26 *= -1;
    /* LoopSeq 3 */
    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_6] [i_6])), (((((/* implicit */_Bool) (unsigned short)31667)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)31792)))))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 2; i_8 < 21; i_8 += 1) 
            {
                {
                    var_28 ^= (-(((long long int) ((unsigned short) arr_23 [i_6] [(signed char)9] [i_8]))));
                    arr_24 [i_7] [i_7] = ((/* implicit */short) arr_20 [i_7]);
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 21; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                {
                    var_29 = ((/* implicit */signed char) max(((unsigned char)225), (((/* implicit */unsigned char) (_Bool)1))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33844)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (arr_28 [17LL] [i_11]))))) : (arr_30 [i_9] [i_9])))) ? ((+(((/* implicit */int) (short)24)))) : (((/* implicit */int) min(((unsigned short)33866), (((/* implicit */unsigned short) (signed char)-1)))))));
                    var_31 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                    var_32 = ((/* implicit */short) 0ULL);
                }
            } 
        } 
        var_33 ^= ((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_9]));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */long long int) arr_31 [i_9])) : (9223372036854775807LL)))))));
    }
    for (int i_12 = 1; i_12 < 14; i_12 += 2) 
    {
        var_35 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((1714631490) + (((/* implicit */int) (short)18662))))) : (max((((/* implicit */long long int) 1222334871)), (((((/* implicit */long long int) ((/* implicit */int) var_13))) - (8879351527075636089LL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            var_36 += ((/* implicit */_Bool) (-(7921703293114328LL)));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                for (long long int i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    {
                        var_37 += ((/* implicit */_Bool) (+(8197070600857112850ULL)));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12] [i_12 - 1] [i_14] [i_12] [i_15 - 1] [i_15])) ? (arr_44 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12] [(short)16] [i_15]) : (((/* implicit */int) var_13))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 16; i_16 += 4) 
            {
                for (unsigned short i_17 = 1; i_17 < 14; i_17 += 4) 
                {
                    for (unsigned int i_18 = 4; i_18 < 15; i_18 += 1) 
                    {
                        {
                            arr_53 [i_12 + 3] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (-(arr_44 [i_18] [i_18] [i_18 - 3] [i_12] [i_18 - 1] [(signed char)4])));
                            var_39 = ((/* implicit */unsigned short) ((short) var_7));
                            var_40 &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33887)) ^ (((/* implicit */int) arr_43 [i_18 - 1] [i_18] [i_17 + 2] [i_16] [(signed char)11] [i_12 + 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
        {
            var_41 = ((/* implicit */short) min((-8663857334253518569LL), (((var_10) % (arr_34 [i_12 + 3])))));
            /* LoopNest 3 */
            for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                for (unsigned short i_21 = 2; i_21 < 15; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 17; i_22 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_13))))))) == (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)255)), (8879351527075636062LL)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_43 = ((/* implicit */long long int) min((var_43), (var_10)));
                            var_44 ^= min((((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)31669)) : (((/* implicit */int) (unsigned short)11591)))))), (max(((((_Bool)1) ? (((/* implicit */int) arr_32 [(unsigned char)0] [(unsigned char)0] [i_20] [i_21])) : (((/* implicit */int) arr_16 [i_12] [i_12])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) arr_22 [i_12] [(signed char)2] [i_21 - 1] [i_22]))));
                        }
                    } 
                } 
            } 
        }
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))) + (2147483647))) << ((((~(((/* implicit */int) var_8)))) - (3580)))))) ? (((/* implicit */unsigned long long int) var_15)) : (10129028073749776753ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 1; i_23 < 16; i_23 += 3) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                {
                    arr_71 [i_12] [i_12] = ((/* implicit */int) (_Bool)1);
                    var_47 = ((/* implicit */signed char) ((min((-36028797018963968LL), (((/* implicit */long long int) (short)21052)))) <= (((/* implicit */long long int) min((((((/* implicit */_Bool) 548729541U)) ? (((/* implicit */int) arr_65 [i_12 + 3] [i_23])) : (((/* implicit */int) arr_67 [i_24])))), (((/* implicit */int) (signed char)-1)))))));
                }
            } 
        } 
    }
}
