/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88655
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
    var_20 *= ((((/* implicit */_Bool) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (~(var_17))))))) ? (((/* implicit */unsigned long long int) var_10)) : (((var_9) ^ (((/* implicit */unsigned long long int) (~(var_15)))))));
    var_21 *= max((((((/* implicit */_Bool) var_7)) ? ((-(23ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned long long int) var_19)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2]) | (arr_5 [i_3 + 1] [i_3 + 1] [i_2] [i_1])))) ? (min(((~(23ULL))), (((/* implicit */unsigned long long int) var_12)))) : (min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) (signed char)-65)), (36ULL))))))))));
                                arr_12 [i_1] [i_3 + 1] [i_2] [i_1] [i_1] = (~(((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 + 1]))));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-1946)))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_8)), (var_10)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_3 [i_1] [i_1]) <= (arr_3 [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                {
                    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) 14ULL)) ? (43ULL) : (39ULL)));
                    var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_5 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 3])) * (var_18))) >= (((/* implicit */unsigned long long int) max((arr_7 [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5 - 2] [i_5 + 2] [i_5 - 1]), (arr_4 [i_0] [i_5 - 3] [i_5 + 2] [i_1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        var_26 += ((/* implicit */_Bool) (~(max((max((((/* implicit */unsigned long long int) 4294967277U)), (18446744073709551613ULL))), ((+(arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                        var_27 = ((/* implicit */signed char) (~(max((40ULL), (((/* implicit */unsigned long long int) -2110428079))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) var_13)) & (var_1)))));
                            arr_23 [i_0] [i_1] [i_5 - 1] [i_6 - 1] [i_7] [i_1] = ((/* implicit */signed char) (+((~(var_14)))));
                            arr_24 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(var_5)));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                        {
                            arr_27 [i_0] [i_1] [i_5 - 3] [i_5 + 1] [i_1] [i_6 - 1] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (9223372036854775807LL) : (((/* implicit */long long int) 402208726U))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_1))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(2407963030U)));
                            var_29 = ((((/* implicit */_Bool) 18446744073709551580ULL)) ? (12495171760243830637ULL) : (((/* implicit */unsigned long long int) 425305352U)));
                        }
                    }
                    for (short i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */int) ((((12495171760243830637ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2U)))))) ? (((((/* implicit */_Bool) (signed char)-96)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-11753))))) : (((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) % (-8915442243810880972LL)))));
                        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) >= (arr_25 [i_9 + 3] [i_9 + 2] [i_5 - 2]))))) % (((((/* implicit */_Bool) (-(8710554690400792144ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3923599794641140627LL)) || (((/* implicit */_Bool) (short)6196)))))) : (18446744073709551599ULL)))));
                        arr_32 [i_0] [i_1] [i_1] [i_0] [i_9 + 1] |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned long long int) 4905273226073885093LL)) : (5951572313465720969ULL)));
                    }
                }
                var_32 ^= max(((~(var_1))), (((/* implicit */unsigned long long int) var_6)));
            }
        } 
    } 
}
