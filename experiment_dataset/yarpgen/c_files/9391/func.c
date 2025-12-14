/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9391
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                arr_13 [i_3] [i_0] [i_2] [0U] [0U] [i_4] [i_4] = ((_Bool) (short)-26656);
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9077440763844958964LL)) ? (1808675958U) : (1808675935U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (2486291342U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                            var_12 = ((/* implicit */short) max((var_12), (((short) (signed char)93))));
                            var_13 = ((/* implicit */int) 14266686290932709071ULL);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) -646563102)))))) << ((((-(((/* implicit */int) (signed char)124)))) + (133))))))));
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    arr_19 [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)10799))))));
                    var_16 = ((/* implicit */signed char) var_4);
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_8] [i_8] [i_1] [i_6] [i_8] [i_8] = ((/* implicit */unsigned int) ((0LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-16384)))));
                            var_17 &= ((/* implicit */unsigned long long int) var_4);
                            var_18 ^= ((/* implicit */short) var_8);
                            arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (~((~(((/* implicit */int) (short)16372))))));
                        }
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1LL))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-1)) ? ((((_Bool)1) ? (-7980021385503645580LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0))))))))));
                        var_21 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 0LL)))))) : ((~(3692286056U)))));
                    }
                    for (short i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4210309071U)) ? (2486291342U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1024))))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)163)) ? (((((/* implicit */_Bool) 4611686018360279040LL)) ? (2147483647) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-29783)) : (((/* implicit */int) (unsigned char)145))))))));
                        var_23 = ((/* implicit */_Bool) ((short) ((unsigned long long int) -2147483647)));
                    }
                    for (short i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        arr_34 [i_10] = var_3;
                        arr_35 [i_0 + 2] [i_1] [i_6] [9LL] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 7602460745422446228ULL))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3112791915U)))))))) ? (((var_7) * (((/* implicit */long long int) ((/* implicit */int) ((short) 0ULL)))))) : (var_9)));
                    }
                    for (short i_11 = 4; i_11 < 10; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)24035)) ? (9ULL) : (((/* implicit */unsigned long long int) 2101950586U)))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            var_25 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) min(((-(4294967295U))), (((/* implicit */unsigned int) (short)16523))))) ^ (((long long int) ((long long int) var_10)))));
                            arr_41 [i_12] [i_12] [i_0] [i_0] [i_6] [(unsigned short)1] [i_0] = ((/* implicit */_Bool) ((short) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) (signed char)7)))));
                            var_27 = ((/* implicit */long long int) ((unsigned int) 0LL));
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) / (5846611484126258427LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190)))))))))));
                    var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) 10844283328287105374ULL))), ((((!(((/* implicit */_Bool) 3472950417931810118ULL)))) ? (((((/* implicit */_Bool) (short)-32331)) ? (7602460745422446251ULL) : (((/* implicit */unsigned long long int) 2147483640)))) : (((/* implicit */unsigned long long int) -1016609948))))));
                }
                for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_30 = ((/* implicit */int) var_4);
                    var_31 = ((/* implicit */long long int) ((unsigned short) ((signed char) (!(((/* implicit */_Bool) var_8))))));
                }
                var_32 = ((/* implicit */unsigned int) max((var_32), (4210309080U)));
                var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126)))))))) ? (((/* implicit */int) ((unsigned short) -2037609618))) : (((/* implicit */int) ((short) var_4)))));
            }
        } 
    } 
    var_34 = ((/* implicit */short) -1165520486);
}
