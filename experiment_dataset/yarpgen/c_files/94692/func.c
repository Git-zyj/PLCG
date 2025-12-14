/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94692
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
    var_15 |= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4)))), (min((((/* implicit */unsigned long long int) (short)6)), (var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) var_3)), (1228179077)))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1507690141225796829LL))))))));
    var_16 = max((((long long int) var_7)), (min((max((5740371437529846711LL), (((/* implicit */long long int) (signed char)82)))), (((/* implicit */long long int) var_10)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_6 [i_1] = ((/* implicit */unsigned int) (~(var_13)));
                    var_17 = ((/* implicit */unsigned short) ((short) var_10));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_18 ^= ((/* implicit */int) var_3);
                        var_19 = ((/* implicit */short) (((+(((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_2] [(signed char)18] [10LL] [i_2])))) - ((-(((/* implicit */int) (unsigned char)3))))));
                        arr_9 [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (17805310132174175882ULL) : (arr_5 [i_2] [i_0 - 1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) 2249600790429696LL);
                            var_21 = ((/* implicit */int) ((unsigned long long int) arr_12 [i_0] [i_1] [i_0 + 1]));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((short) var_8)))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)27049)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_0 + 1] [i_4] [i_4])) : (((/* implicit */int) var_3))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)13643))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */short) var_5);
                            arr_16 [15LL] [i_1] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((long long int) (short)-20828)))));
                            arr_17 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (short)134))))) - (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_5] [i_5] [i_2] [10U])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5] [i_0])))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_20 [i_0] [(signed char)10] [i_2] [i_6] [i_1] [9LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_2])) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0 - 1]))))));
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2] [4LL])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_27 += ((/* implicit */signed char) ((((((long long int) var_12)) + (9223372036854775807LL))) << (((var_5) - (4571280478727306217LL)))));
                    }
                }
                /* vectorizable */
                for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                {
                    var_28 = ((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_7 - 1] [1LL] [i_0 - 1] [i_1] [(short)16] [i_1])) ? (((/* implicit */unsigned long long int) arr_18 [(signed char)17] [i_1] [i_7 - 1] [i_1] [i_0 + 1])) : (16128525310377063145ULL)));
                }
                arr_24 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967277U)), (var_7)))) ? (115468544U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_11)))))))), (var_7)));
                var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_1]))))), (min((arr_18 [i_1] [i_1] [i_0] [i_1] [i_0]), (((/* implicit */long long int) var_8))))));
                var_31 ^= ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (min((arr_7 [0LL] [i_0 + 1] [i_0] [i_1] [i_0 - 1] [i_1]), (arr_7 [12LL] [i_0 + 1] [i_0 - 1] [i_0] [i_1] [i_0 + 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            {
                arr_30 [i_8] [i_8] = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    for (long long int i_11 = 3; i_11 < 10; i_11 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((long long int) min(((short)-27310), (max((arr_4 [i_8] [(unsigned char)6] [i_10 + 1]), ((short)1145))))));
                            var_33 -= ((/* implicit */long long int) (-(((/* implicit */int) (short)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_34 += ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_12)), (var_11)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(signed char)14] [4LL] [i_9 + 2]))) : (var_14)))));
                            var_35 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_12 [i_12] [i_9 + 2] [i_12])), (var_1)))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */long long int) arr_38 [i_8] [i_9] [i_8]);
            }
        } 
    } 
}
