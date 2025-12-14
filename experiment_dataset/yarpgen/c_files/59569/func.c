/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59569
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
    var_13 += ((/* implicit */short) max((((/* implicit */unsigned short) var_6)), (var_4)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-19284))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (((arr_3 [i_0]) ? (2854725449025148060LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max(((short)-16058), (((/* implicit */short) (signed char)-126)))))) ? (((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) arr_1 [i_0]))))))) : (((/* implicit */int) ((short) ((signed char) var_4))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_2 [i_0]))))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1690709632040445711LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)166)) ? (-1690709632040445714LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) (unsigned char)66))))))))))));
    }
    for (long long int i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) (-((-(max((1690709632040445711LL), (((/* implicit */long long int) (unsigned short)4095))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((/* implicit */int) ((short) 1690709632040445711LL))), ((+(((/* implicit */int) arr_6 [i_1 - 1])))))))));
    }
    for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) ((long long int) max((((/* implicit */int) var_12)), (arr_11 [i_2] [i_2 - 1] [i_2]))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_15 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned short) var_5)), (((/* implicit */unsigned short) (signed char)-126)))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_13 [i_2] [i_4]))), (((int) arr_11 [i_2] [i_3] [i_2]))))) ? (((((/* implicit */_Bool) (short)5823)) ? (((/* implicit */long long int) -1)) : (1690709632040445714LL))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) -1455652336)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)107)))), (((/* implicit */int) arr_7 [i_3] [i_3])))))));
                    arr_18 [i_2] [0LL] [i_4] [i_2 + 1] [i_4] |= ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_16 [i_5])))))))))))));
                    arr_19 [i_5] [i_4] |= ((/* implicit */int) max((((/* implicit */long long int) (~(var_11)))), (max((-1690709632040445711LL), (((/* implicit */long long int) arr_9 [i_4] [i_4]))))));
                }
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_26 [(short)13] [i_3] [i_4] [i_2] [i_6] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_12))))));
                            var_21 *= ((/* implicit */_Bool) max((max((var_4), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) max(((_Bool)1), (var_9))))));
                            arr_27 [i_2] = ((/* implicit */int) ((_Bool) (unsigned short)60604));
                            var_22 ^= ((/* implicit */signed char) ((int) (unsigned short)61436));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    var_23 = ((/* implicit */signed char) ((_Bool) (signed char)-124));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((_Bool) ((long long int) arr_7 [i_2] [i_4]))))));
                    var_25 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1690709632040445722LL)) ? (arr_20 [(short)19] [(short)19] [i_4] [i_8] [i_2] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2])))))));
                    arr_31 [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_23 [i_2] [i_3] [i_3] [i_4] [i_4] [i_4] [i_2]))))));
                }
            }
            arr_32 [i_2 + 2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_22 [i_3] [i_3]))))))));
            var_26 = (-(max((((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_2] [i_2] [i_2 + 1] [7] [i_2 + 1] [i_3])))), (((/* implicit */int) max(((unsigned short)4071), (((/* implicit */unsigned short) (unsigned char)151))))))));
            var_27 = ((/* implicit */signed char) ((_Bool) max(((-(((/* implicit */int) (unsigned short)61464)))), (361776758))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? ((-(arr_11 [(_Bool)1] [i_2] [i_2]))) : (((/* implicit */int) (unsigned char)101))));
            var_29 = ((/* implicit */_Bool) min((var_29), ((!((_Bool)1)))));
            var_30 = ((/* implicit */int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_20 [i_2 + 2] [i_2 - 1] [(unsigned char)6] [i_9] [i_2] [i_2 - 1])));
            arr_35 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-14312))));
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
        {
            var_31 += ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_16 [i_10])))))))), (max(((short)27038), (((/* implicit */short) (unsigned char)143))))));
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((short) max((((/* implicit */int) arr_22 [i_2] [i_10])), (((arr_8 [(short)18]) ? (((/* implicit */int) arr_25 [i_10] [(unsigned char)2] [i_10] [(unsigned char)2] [(signed char)6])) : (((/* implicit */int) arr_34 [(short)4]))))))))));
        }
        var_33 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            var_34 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) (unsigned char)126))), ((~(var_11)))));
            var_35 = (-((+(((((/* implicit */_Bool) arr_7 [i_2] [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))));
        }
        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            arr_43 [i_2 + 1] [i_12] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [(signed char)4] [i_12]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-6)))) : ((-(((/* implicit */int) var_9))))))));
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((_Bool) (short)-28213))) : ((-((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_2] [i_12] [(unsigned char)9])))))))))));
            arr_44 [i_2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)4071), (((/* implicit */unsigned short) (signed char)-6)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_2] [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_7)))) ? (max((1690709632040445711LL), (((/* implicit */long long int) (signed char)-124)))) : (max((33554431LL), (((/* implicit */long long int) arr_14 [i_2] [i_12] [i_2 + 2]))))))));
        }
    }
    var_37 = ((/* implicit */signed char) ((short) ((short) max((var_8), (((/* implicit */short) var_9))))));
}
