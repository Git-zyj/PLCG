/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69257
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)958)) <= (((/* implicit */int) arr_0 [i_0]))));
        var_20 += ((/* implicit */_Bool) var_17);
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [(short)4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [8])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_22 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_4 [i_1] [i_1])))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned short)13085))));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((((_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_2])))) ? (min((arr_5 [i_2]), (arr_5 [i_2]))) : (arr_5 [i_2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535)))));
            var_26 = ((/* implicit */short) (!((_Bool)1)));
        }
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_4])))))) ? (((/* implicit */int) min((var_18), ((short)30680)))) : (((((((/* implicit */int) var_19)) + (2147483647))) << (((((/* implicit */int) (unsigned short)13083)) - (13083)))))))) ? (arr_10 [i_4]) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (arr_10 [i_4]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_12 [i_4]))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            {
                arr_20 [i_5] [(_Bool)1] [(unsigned short)2] = (_Bool)1;
                var_29 = ((/* implicit */unsigned char) -1LL);
                arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */long long int) (-(arr_13 [i_6 - 1])));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                            {
                                var_30 = ((/* implicit */short) arr_30 [i_5] [i_5] [i_5] [i_5] [i_7] [i_8] [i_9]);
                                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned short) min((arr_26 [i_5] [i_5 + 1] [(_Bool)1] [i_5 + 3] [i_5 + 3] [i_5 + 2]), (((/* implicit */long long int) var_14))))))));
                                var_32 = ((((var_10) ? (min((((/* implicit */long long int) arr_27 [i_5] [i_6 + 1] [i_6 + 1] [i_6] [i_9])), (arr_7 [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))) >> (((((unsigned long long int) var_12)) - (9390ULL))));
                                var_33 += ((/* implicit */unsigned short) var_7);
                                var_34 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_5] [i_5 + 4] [i_5] [i_5]))) - (arr_25 [i_5 + 1] [i_5 + 3])))));
                            }
                            for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                            {
                                arr_34 [4LL] [9] [4LL] [9] [9] [i_10] = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_6 - 1] [10U] [i_6 + 1]));
                                var_35 -= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            }
                            var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6634)) ? (arr_25 [i_5] [12LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 + 1] [(_Bool)1] [(short)18])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 + 4] [i_5 + 4]))) : (arr_25 [(short)8] [i_6 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((short) (_Bool)0))), (arr_24 [i_5] [(short)10] [i_5]))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_8])), (2262763210418469435LL)))) ? (((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] [i_5])) ? (2262763210418469447LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [(_Bool)1])) : (((/* implicit */int) var_17))))))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_7])) + (2147483647))) << (((((/* implicit */int) var_12)) - (9406)))))) ? ((+(((/* implicit */int) arr_19 [i_7] [i_7])))) : (((int) arr_17 [i_5]))))) ? (((/* implicit */int) (unsigned short)59200)) : (((((/* implicit */_Bool) arr_5 [i_5 + 4])) ? (((/* implicit */int) arr_19 [i_8] [i_6])) : ((~(((/* implicit */int) var_3))))))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_5 + 1] [i_5 + 1] [i_7]))) ? (((/* implicit */int) ((((((-2262763210418469463LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_14 [i_5])) + (30466))) - (26))))) > (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_7] [i_5 + 3] [i_5 + 3] [i_5 + 3])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) >= (((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (unsigned short)13086)) : (((/* implicit */int) arr_6 [i_6])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
