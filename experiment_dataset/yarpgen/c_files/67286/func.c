/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67286
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 968815605))) / (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((short) arr_4 [i_0])))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_0]) | (((/* implicit */int) (unsigned char)215))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (unsigned char)215);
                                var_17 = min(((signed char)-121), (((/* implicit */signed char) (_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) var_2);
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_5] [i_2] [i_1] [i_1]))))) ? (max((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5]), (arr_15 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0]))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_5])), (arr_1 [i_1] [i_0])))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) + (((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12))))) : (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_6] [i_0] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2] [i_6])))))));
                        var_21 |= ((/* implicit */int) var_7);
                        var_22 = ((/* implicit */signed char) arr_2 [i_1] [i_2] [i_6]);
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_16 [i_6] [i_2] [i_1] [i_0])))))))) <= (((/* implicit */int) ((((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_6] [i_7])) % (((/* implicit */int) arr_16 [i_7] [i_6] [i_2] [i_0])))) != (((/* implicit */int) (short)-27342)))))));
                            var_24 = var_13;
                        }
                        for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_8 - 1] [i_0] [i_2] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_8 - 1] [i_6] [i_8 + 1] [i_1])) ? (4514763322177049164LL) : (arr_2 [i_1] [i_1] [i_1]))))) | (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (max((arr_19 [i_8 - 1] [i_8 + 1]), (((/* implicit */int) var_5)))))))));
                            var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) 536608768)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)27342)) <= (((/* implicit */int) var_0)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 2147483647))) * (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_8 + 1])) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_6] [i_1] [i_1])) : (0))))))));
                            var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_16 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))), ((+(((/* implicit */int) arr_16 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1]))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_0)))));
}
