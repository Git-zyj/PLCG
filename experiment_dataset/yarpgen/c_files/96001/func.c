/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96001
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)-1))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65532)) : (2060125370))) : (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((int) var_7)) : ((~(2060125370)))))));
    var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((65535ULL), (((/* implicit */unsigned long long int) (unsigned short)7)))))))) : ((+((~(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_1 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [(short)12] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */unsigned long long int) min((3712073292U), (((/* implicit */unsigned int) (unsigned char)41))))) ^ (var_9)))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 2060125370)) && (((/* implicit */_Bool) -2060125370))));
                                var_18 = ((/* implicit */unsigned short) ((int) (+(2149175767507076900ULL))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) % (var_14))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49671)))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)34272)) - (34272)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)48)) * (((/* implicit */int) var_0)))))))))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_19 = max((((((/* implicit */_Bool) arr_0 [i_0] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 4] [(unsigned char)15]))) : (var_2))), (((/* implicit */unsigned long long int) min(((signed char)0), (var_6)))));
                        var_20 += arr_2 [i_2] [(unsigned short)10];
                    }
                    for (short i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned char)25), ((unsigned char)207)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(var_4)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_8)))) ? (arr_17 [(short)8] [i_1] [13ULL] [(short)7]) : (arr_3 [i_2 + 1])))));
                        var_22 += ((/* implicit */unsigned short) ((int) min((min((arr_15 [i_0] [i_0] [i_0] [i_6]), (arr_3 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))))));
                        arr_18 [i_0] [i_0] [i_6] = max((arr_17 [i_0] [1] [i_2] [i_6]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_6] [i_6] [i_1] [i_1] [14])))))));
                        var_23 = ((/* implicit */short) 1194034562U);
                    }
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)231)) % (((/* implicit */int) arr_16 [i_7] [i_2] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 3] [i_2 + 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49671))) & (var_8)))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_7])) ? (((/* implicit */int) (unsigned short)49671)) : (arr_19 [i_1 - 1] [i_1 - 1])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)214)) ^ (((/* implicit */int) (unsigned short)7))))), (((((/* implicit */unsigned long long int) arr_8 [(short)1] [i_2 + 1] [i_0] [i_0])) ^ (arr_2 [i_1] [i_7]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0]))))) ? (-2354442304556099208LL) : (((/* implicit */long long int) min((arr_15 [i_7 + 1] [i_2] [i_1] [(unsigned short)15]), (arr_17 [i_0] [i_1] [i_2] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */short) (unsigned short)65535);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            arr_27 [18U] [i_1] [i_9] [i_8] [i_8] [i_8 - 1] [i_9] = ((/* implicit */int) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))));
                            var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)48493)) ? (-2354442304556099208LL) : (8468941886244276933LL)))));
                            var_28 = ((/* implicit */int) (!(arr_16 [i_9 + 1] [i_8 + 1] [i_2 - 1] [i_1 - 1])));
                        }
                        var_29 |= ((/* implicit */short) ((int) var_11));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_30 = ((/* implicit */int) max((var_30), ((+(((/* implicit */int) (unsigned char)0))))));
                    arr_30 [i_10] [i_1] [i_0] = ((/* implicit */short) arr_9 [i_1 - 4] [i_1 - 2] [i_1 - 1]);
                    var_31 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3520554671U)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) 3520554671U)) ^ ((-9223372036854775807LL - 1LL)))))));
                    var_32 = ((/* implicit */long long int) (~(arr_2 [i_1 - 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (signed char i_12 = 3; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) 1U)) % (arr_31 [5]))));
                                var_34 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_11]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_35 -= ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) -81922620)))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) / (var_8)))))));
}
