/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58415
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
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)0))))) >= (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)64))))))));
    var_14 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((((/* implicit */_Bool) (short)-11145)) ? (-8576811703728420125LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_3] [i_3])) <= (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 1]))))))))));
                        var_16 = ((/* implicit */unsigned char) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (short)-14089))) * (435889203U))) - (((arr_1 [i_0]) / (var_4)))))));
                        var_17 = ((/* implicit */short) max((var_17), (var_8)));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) var_3)) - (88))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_4 [21U] [i_0] [8U])) ^ (max((((/* implicit */int) min((((/* implicit */short) (signed char)11)), (var_11)))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (2007638809) : (-2147483635)))))));
                        arr_12 [i_0] [i_0] [i_2] [17U] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)101)) << (((((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)101)) : (-136903987))) - (90)))))), (((long long int) arr_4 [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */int) var_8);
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_17 [i_0] [(unsigned char)23] [i_5 - 1] [(_Bool)1] [i_0 - 2]) % (arr_17 [(unsigned char)13] [i_1] [i_5 + 4] [i_0] [i_0 - 1]))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((((/* implicit */_Bool) -136903996)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)15974)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_4 [i_1] [i_6] [i_6])) : (2117906745))))))));
                            arr_19 [i_0] = (~(8576811703728420113LL));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_5 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 1] [i_5 + 4])))));
                            var_24 -= ((/* implicit */short) ((unsigned short) arr_20 [i_0 - 2] [i_5 + 4] [i_5 + 1] [20U] [i_5 - 1]));
                            arr_22 [i_0] [i_1] [i_2] [i_0] [22LL] = ((/* implicit */unsigned int) arr_20 [i_7] [(signed char)0] [i_1] [i_1] [i_0]);
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_25 *= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_5))) && (((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [i_2]))));
                            arr_25 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)512)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)10931))))));
                            var_26 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (11921983605704162524ULL)));
                            var_27 |= ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)-20154)))) >= (((/* implicit */int) arr_23 [i_0] [i_5 + 4] [i_2] [i_1] [i_8] [i_0 + 1] [i_8]))));
                            arr_26 [i_0] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                        }
                        arr_27 [i_0] [i_2] [23U] [i_2] = ((/* implicit */short) 18446744073709551606ULL);
                    }
                    arr_28 [i_0 - 3] [i_0] [(short)5] [i_0] = ((/* implicit */int) ((min((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_1])) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16213))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) arr_24 [i_0 - 3] [21LL] [i_1] [i_2] [i_0]))))))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-10443)), ((-2147483647 - 1)))))));
                    var_28 = ((unsigned char) arr_0 [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_29 = ((((/* implicit */_Bool) 1994664057)) ? (((/* implicit */int) (short)-10443)) : (((/* implicit */int) (short)-32164)));
                        var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_21 [15LL] [(short)14] [i_2] [i_2] [i_2] [i_2])))))))), (((unsigned long long int) (short)10442))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) ((_Bool) (unsigned char)255)))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) 136903987)))))) >= (var_4)))))))));
}
