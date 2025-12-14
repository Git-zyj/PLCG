/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9827
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) 0LL);
                                var_18 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((4042842929U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))), (arr_1 [i_2] [i_2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (((~(var_4))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_5] [i_2] [i_0])) : (var_15)))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_18 [i_0] [i_2] = ((/* implicit */signed char) ((263882790666240LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-103)))));
                            var_20 &= ((/* implicit */unsigned char) (~(var_4)));
                            var_21 ^= ((/* implicit */unsigned short) ((-1620681247) + (((/* implicit */int) ((short) arr_10 [i_5] [i_0] [i_5])))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_7] [i_2] [i_5] [i_5] [i_2] [i_2] [i_0 - 1] = ((/* implicit */unsigned short) arr_13 [i_7] [i_7]);
                            var_22 = ((/* implicit */int) var_8);
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_23 += arr_2 [i_2 + 1];
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6714952253972124496LL)) ? (((/* implicit */int) ((short) var_1))) : (arr_1 [i_2 + 1] [i_0 + 3])));
                        }
                        arr_24 [i_0] [i_0] [i_2] = var_0;
                        var_25 = ((/* implicit */unsigned short) (~(arr_1 [i_2 + 2] [i_1])));
                        var_26 -= ((/* implicit */unsigned char) (~(17261500305126299474ULL)));
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6714952253972124495LL)) ? (((/* implicit */int) (unsigned char)204)) : (-813300417)))) || (((/* implicit */_Bool) arr_20 [(unsigned short)1] [i_1] [i_1] [(unsigned short)10] [i_1] [i_0]))));
                        var_28 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) < (arr_17 [i_0] [i_0] [i_0 + 3] [i_0] [6U] [i_0] [i_2]))) ? ((~(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_2] [i_2] [i_0])))));
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */short) arr_1 [i_10] [i_10]);
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_10] [i_2] [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28199)))))) ? (((/* implicit */unsigned long long int) (~(-325307172)))) : (((((/* implicit */_Bool) 813300419)) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (-813300420)))) ? ((~(var_16))) : (((/* implicit */int) ((unsigned short) arr_27 [i_0] [i_0 - 1] [i_0] [4ULL] [i_0 + 1] [i_0])))))))))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((unsigned int) min((-214750509), (((/* implicit */int) (short)0))))))));
                    }
                    var_32 = ((/* implicit */unsigned char) (unsigned short)65532);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))) : (var_2))))));
}
