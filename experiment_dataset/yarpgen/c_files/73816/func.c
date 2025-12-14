/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73816
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
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */short) min((arr_5 [(unsigned char)2]), (var_2)));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_16)), (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_4 [i_0] [i_0]))) : (max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_11 [i_2] [i_3] = ((/* implicit */unsigned short) ((((_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_18))));
        }
        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
            {
                var_22 *= (~(((((/* implicit */unsigned int) var_6)) % (var_2))));
                arr_17 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((_Bool) arr_10 [23U] [i_5]));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_0)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                            var_24 |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 + 3] [(unsigned char)22])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))))) : (var_7))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5 + 1]))))) % ((~(0ULL)))));
                            var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_24 [i_4] [i_5] [i_5] [1] [i_5])) > (((/* implicit */int) var_12))))), (var_6)));
                            var_27 = ((/* implicit */long long int) min((var_27), (((arr_19 [(short)22] [i_4] [i_5] [(short)0] [i_6 - 1]) / (((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
                arr_25 [i_4] [i_4 + 3] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_18 [i_5 + 1] [i_4] [i_4] [i_2]) : (arr_18 [i_2] [i_4] [i_4 + 3] [i_5 + 1]))) >= (max((arr_18 [i_2] [i_4] [i_4] [i_5]), (arr_18 [i_2] [i_4] [i_5] [i_5 + 1])))));
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned char)4] [i_4] [i_8 + 1] [i_4] [i_4] [10])) ? (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_18 [i_4] [22LL] [i_9] [i_9]))));
                            var_30 = ((/* implicit */long long int) var_16);
                            arr_36 [i_2] [i_4] [i_8] [i_9] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4] [i_4]))))) ? (((var_8) ? (var_17) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2] [i_4 - 1] [i_8] [i_10 - 1]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_31 = ((/* implicit */unsigned char) ((var_5) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_11]))) : (var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) var_6))));
                var_32 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) var_3)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_2] [5ULL] [i_4])) ? (((/* implicit */unsigned int) var_6)) : (var_7))))))));
            }
        }
        arr_40 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_15)) ? (arr_29 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
        var_33 = ((/* implicit */long long int) arr_24 [(short)14] [i_2] [i_2] [i_2] [(short)14]);
        var_34 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 3142501326U)) ? (16554749146916630466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26988))))), (((/* implicit */unsigned long long int) ((((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_20 [i_2]))) >= (((unsigned long long int) (unsigned short)0)))))));
        var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(short)22] [i_2] [(_Bool)1] [i_2] [(_Bool)1] [(short)22])) ? (((/* implicit */int) arr_22 [i_2] [8U] [i_2] [i_2] [i_2] [(unsigned char)8])) : (((/* implicit */int) arr_22 [i_2] [(unsigned char)22] [i_2] [i_2] [i_2] [(unsigned char)22]))))), (min((((/* implicit */unsigned int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [22LL])), (var_2)))));
    }
}
