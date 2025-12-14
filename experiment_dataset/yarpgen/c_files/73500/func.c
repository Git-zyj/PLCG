/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73500
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_13 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 + 2])), (arr_2 [i_3] [i_1 - 4] [i_1 - 4])))) || (((/* implicit */_Bool) arr_3 [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 - 2] [(short)9] [i_0 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2674237788741107436ULL))))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 3; i_4 < 17; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */int) ((((unsigned long long int) 3526160250U)) >> (((var_1) - (5489542965094007442ULL)))));
                                var_15 = ((/* implicit */signed char) var_4);
                            }
                            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
                            {
                                arr_17 [i_5 + 2] [i_3] [i_1 + 1] [i_3] [i_1] [i_1 + 1] [i_0 - 1] &= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) ((arr_3 [i_3]) & (-1577292)))), (arr_6 [i_0 - 1]))), (((/* implicit */unsigned int) 189168551))));
                                arr_18 [i_0] [i_1 - 3] [i_0] [i_2 + 1] [i_3] [i_5 + 2] = ((/* implicit */unsigned char) (unsigned short)39370);
                                arr_19 [i_3] [i_1 - 3] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49511))))) ? ((+(2280780214U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24706)) ? (((/* implicit */int) (unsigned short)37465)) : (((/* implicit */int) (unsigned short)39370)))))));
                            }
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)26165)), (((((/* implicit */_Bool) (-(5823877853527386179LL)))) ? (((var_1) * (((/* implicit */unsigned long long int) arr_6 [i_3])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 3] [i_3]))))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (unsigned char)113))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    arr_23 [i_0] [i_1 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [(unsigned char)2] [i_0 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (short)27045))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 2791347795U))) ? (3LL) : (((/* implicit */long long int) ((unsigned int) (unsigned short)28061)))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                arr_30 [i_0 - 1] [i_0] [i_6] [i_7] [i_8 + 1] [(short)13] [i_8 + 1] = (unsigned short)37465;
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(var_0))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_7 - 3] [i_0 - 1] [i_8 + 1])) ? (768807045U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0 - 1] [i_1 - 2])))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26165)) - (arr_3 [i_7 - 2])))) ? (((/* implicit */int) arr_26 [i_1 - 2] [i_7 - 1] [i_0 + 1] [i_8 + 1])) : (((/* implicit */int) ((unsigned char) arr_3 [i_7 + 3]))))))));
                                var_23 -= ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 1; i_9 < 16; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (arr_8 [i_11] [(unsigned char)10] [(unsigned char)10] [i_0 + 1]) : (((/* implicit */int) (short)-5700))))))) - (var_4)));
                                arr_40 [i_0] [i_0] [i_9 + 2] [i_10] [i_0] = ((/* implicit */signed char) 233471125);
                                var_25 = max((((/* implicit */unsigned int) ((_Bool) (short)4))), (3526160246U));
                                arr_41 [i_9] [i_1] [7U] [i_10] [i_0] [7U] [i_9 + 2] = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) <= ((~(arr_4 [i_9] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39370))) : (arr_11 [i_9 + 1] [i_9 + 1] [i_1 - 4] [(_Bool)1])))) && (((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_11)) - (242)))))))))) : (max((((/* implicit */unsigned int) ((unsigned char) arr_26 [6LL] [6LL] [5] [i_9]))), (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_13 = 1; i_13 < 17; i_13 += 4) 
                        {
                            arr_49 [i_13 + 1] [i_0] [i_1 - 3] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_10 [i_13] [i_13] [i_0] [(_Bool)1] [i_1] [i_0]);
                            var_26 = (~(((((/* implicit */_Bool) (short)-15140)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5420))) : (-8397035730987007201LL))));
                        }
                        for (long long int i_14 = 2; i_14 < 17; i_14 += 4) 
                        {
                            arr_52 [i_14] [i_12] [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_35 [i_14 + 1] [i_12] [i_0] [i_0] [i_1 - 1] [i_0]);
                            var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(((unsigned int) 3526160251U))))) ? (((((/* implicit */_Bool) ((long long int) 1851548859))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [0] [i_1]), (arr_20 [i_14]))))) : (var_9))) : (((((((/* implicit */int) (unsigned char)177)) <= (((/* implicit */int) arr_26 [i_14 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 1])))) ? (3237927517615079892LL) : (max((var_9), (((/* implicit */long long int) arr_9 [i_14] [i_14]))))))));
                            arr_53 [i_0] = ((/* implicit */_Bool) arr_43 [(unsigned char)9] [i_14 - 1]);
                        }
                        var_28 = ((/* implicit */unsigned int) (((_Bool)1) ? (-1851548859) : (((/* implicit */int) (short)10087))));
                    }
                    arr_54 [(unsigned char)2] [i_1] |= arr_6 [i_1 + 2];
                }
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) ((short) var_4))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8)))))));
}
