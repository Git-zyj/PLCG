/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5956
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((2147483647) << (((min((((((/* implicit */_Bool) (unsigned short)16422)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_19)))), (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) (unsigned short)16422))))))) - (1))))))));
                var_21 ^= ((/* implicit */_Bool) ((arr_2 [i_0 + 1]) + (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49113))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (-506836761) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_22 = 809857770;
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_4 = 4; i_4 < 22; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (4294967295U)))) << ((((+(((/* implicit */int) (unsigned short)49114)))) - (49090)))));
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (-1859749321) : (-1859749321))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [4]))))));
            }
            arr_19 [i_3] = ((/* implicit */int) (+((((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16422)))))));
            var_26 = ((/* implicit */short) -1859749321);
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_27 [i_2] [15] [(_Bool)1] [i_7] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (short)15230);
                        var_27 = ((/* implicit */unsigned short) ((((arr_9 [i_2] [i_7] [i_8 + 3]) >> (((arr_9 [i_2] [i_7] [i_8 + 3]) - (2366891123U))))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (arr_14 [i_2] [i_7] [i_8 + 3] [i_7])))))));
                    }
                } 
            } 
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_7))) ^ (((/* implicit */long long int) 3238292957U))))) ? (((/* implicit */int) ((_Bool) 2138875643))) : (min(((((_Bool)0) ? (((/* implicit */int) var_13)) : (0))), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_18 [i_7] [6LL] [i_2] [i_2] [i_2])))))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 3; i_10 < 21; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    {
                        arr_33 [i_7] [i_7] = ((/* implicit */_Bool) ((int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0)))));
                        arr_34 [i_7] [i_10] [(short)21] [i_7] = ((/* implicit */int) var_4);
                    }
                } 
            } 
            arr_35 [i_7] = ((/* implicit */signed char) ((short) min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)0)))), (((/* implicit */int) var_18)))));
        }
        arr_36 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (-1) : (((/* implicit */int) arr_30 [16] [i_2] [16] [22]))))) ? (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [(signed char)12])) : (((/* implicit */int) arr_26 [17] [i_2] [i_2] [i_2] [3] [i_2]))))) : (((long long int) arr_30 [(_Bool)1] [i_2] [i_2] [(_Bool)1]))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        arr_40 [(signed char)15] = ((/* implicit */signed char) min((min((((((/* implicit */int) var_16)) ^ (var_0))), (((var_0) ^ (((/* implicit */int) (_Bool)0)))))), ((~(((/* implicit */int) ((_Bool) var_18)))))));
        var_29 = ((/* implicit */unsigned short) ((signed char) 514921554));
    }
    /* LoopNest 2 */
    for (long long int i_13 = 3; i_13 < 9; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) -3861441290414990069LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        for (int i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            {
                                arr_55 [(short)11] [i_14] [(short)11] [5U] [i_13] [i_15] = min((((1859749321) << (((/* implicit */int) (_Bool)0)))), (1859749321));
                                arr_56 [(_Bool)1] [i_16] [i_16] [i_13] [(_Bool)1] [i_14] [(_Bool)1] = ((/* implicit */int) max((min((7240898860557413171ULL), (((/* implicit */unsigned long long int) arr_47 [i_14] [i_14] [i_14] [i_13 + 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (0) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))) : ((-(arr_11 [i_13] [i_13] [i_13]))))))));
                            }
                        } 
                    } 
                }
                arr_57 [i_13] [i_13] = ((/* implicit */signed char) arr_24 [i_13] [(short)13]);
            }
        } 
    } 
}
