/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79495
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
    var_16 = ((/* implicit */signed char) (((((~(var_4))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)61))))))) ? ((~(((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_17 *= ((/* implicit */short) var_1);
            var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))), (arr_0 [i_0])));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-29206))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 ^= ((/* implicit */short) arr_6 [i_0]);
            var_21 = var_2;
            var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) (unsigned short)44164))), (arr_3 [i_2])));
        }
        var_23 *= ((/* implicit */short) ((((/* implicit */long long int) min(((~(arr_2 [i_0 - 1] [i_0]))), ((~(var_6)))))) == (((((/* implicit */long long int) arr_2 [i_0] [i_0 - 4])) / (arr_6 [i_0 - 2])))));
    }
    for (short i_3 = 4; i_3 < 21; i_3 += 3) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */signed char) arr_2 [i_3] [i_3]);
        var_24 += ((/* implicit */unsigned char) ((unsigned short) arr_6 [i_3]));
    }
    for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
    {
        var_25 = min((min((arr_2 [i_4 - 1] [i_4]), (1946066454))), (((((((/* implicit */_Bool) var_9)) || (var_15))) ? (min((arr_13 [i_4] [i_4 - 1]), (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)248)))));
        arr_16 [i_4] = ((/* implicit */unsigned int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((int) arr_4 [(short)2] [i_4] [i_4 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 15; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((arr_28 [i_7] [i_7 + 2] [i_7 + 2]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7] [i_7 + 1] [i_7 + 2])) && (((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7 + 2] [i_7 - 1])))))))))));
                                arr_30 [i_6] [i_8] [i_6] [i_6 + 2] [i_6] [i_5] = ((/* implicit */unsigned int) ((long long int) (unsigned char)62));
                                var_27 = ((/* implicit */unsigned short) min((min((4044312313546607716LL), (((/* implicit */long long int) arr_25 [i_5] [i_5 + 2] [i_6 - 1] [(_Bool)1])))), (((/* implicit */long long int) var_0))));
                                var_28 = ((/* implicit */long long int) arr_15 [i_9]);
                                var_29 += ((/* implicit */unsigned short) min((min((((arr_14 [i_5]) - (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((arr_24 [i_5] [i_8] [i_9]), (((/* implicit */long long int) arr_25 [i_5] [i_6 - 1] [i_8] [i_8]))))))), (((/* implicit */unsigned long long int) 7309640654847635172LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned int i_11 = 3; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) max((var_30), ((short)2307)));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_5]) : (18446744073709551611ULL))), (((/* implicit */unsigned long long int) arr_3 [i_5 - 3]))))) ? ((-(((/* implicit */int) arr_29 [i_5] [i_5 + 2] [i_5] [i_10] [i_10] [i_10] [i_11])))) : (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
