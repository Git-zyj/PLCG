/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77446
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (8388352U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)384))))))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (((~(4294967295U))) << (((((/* implicit */int) arr_0 [i_0])) - (33910))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) var_0);
                    arr_7 [i_1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65520))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388352U)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (unsigned short)65516))))) : (5011206864295450631ULL));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned short)20))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_19 = ((((/* implicit */_Bool) (unsigned short)44346)) ? (((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0] [i_0 - 2] [i_0 - 3]) : (((/* implicit */unsigned long long int) arr_9 [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) > (var_0))))));
                    arr_10 [i_3] [i_1] [i_1] = (((!(((/* implicit */_Bool) (unsigned short)65513)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_3])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) 1U))))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2440283211U)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned short)65521)))))))));
                        var_21 = arr_11 [i_0 + 2] [i_1] [i_4] [i_5 + 1];
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_1 [i_0 + 3] [i_0]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (-(18409795819836934646ULL)));
                        var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 91222519U))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_5 [i_0 + 3] [i_1]))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), ((-(arr_18 [i_4] [i_0 + 2] [i_0 + 3] [i_4])))));
                                var_27 = ((/* implicit */unsigned short) arr_3 [i_1]);
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 2440283211U)) ? (7894831295478484774ULL) : (((/* implicit */unsigned long long int) 4294967278U)))))) / ((+(arr_19 [i_0 - 2] [i_1] [8ULL]))))))));
                arr_22 [i_1] [i_1] = var_14;
            }
        } 
    } 
    var_29 = ((((/* implicit */_Bool) var_3)) ? (var_14) : (var_13));
}
