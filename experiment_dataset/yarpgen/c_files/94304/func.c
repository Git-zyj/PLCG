/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94304
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
    var_13 = ((/* implicit */short) ((int) var_2));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_5)))) ? (((/* implicit */int) arr_1 [i_0])) : (var_3)))) ? (((/* implicit */int) ((var_3) < (var_4)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((int) max((((int) 1889554474)), (var_2)));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [7] [i_2] [0])) ? (((/* implicit */int) (short)-1468)) : (arr_0 [i_1])))) ? (((long long int) arr_9 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (arr_10 [i_1] [i_1] [8])))))))));
                    var_14 = (~(arr_7 [i_1] [i_2] [i_3]));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_15 &= ((/* implicit */int) min((((max((var_8), (((/* implicit */long long int) 1889554474)))) / (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_9) ? (((/* implicit */long long int) var_6)) : (var_11)))))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(short)1] [(short)1] [i_1] [i_4]))))))))));
                                arr_19 [i_1] [(unsigned short)7] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7404698402789132031LL)) ? (((/* implicit */long long int) arr_9 [i_1] [i_2] [i_3] [i_3])) : ((-9223372036854775807LL - 1LL)))))))) == (((/* implicit */int) ((_Bool) min((((/* implicit */int) var_5)), (arr_0 [i_1])))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((var_1) == (((((/* implicit */_Bool) arr_10 [i_1] [(_Bool)1] [i_1])) ? (arr_0 [(unsigned short)3]) : (arr_7 [i_1] [i_5] [i_1]))))) ? ((-(arr_9 [i_1] [i_2] [i_3] [i_4]))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -1752003510))))), (((((/* implicit */_Bool) 0LL)) ? (arr_9 [(short)5] [(short)5] [i_4] [i_5]) : (arr_0 [i_1]))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_10 [i_3] [i_2] [i_1]))))))));
                }
            } 
        } 
        arr_20 [4LL] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_18 [6LL])) - ((+(((/* implicit */int) (_Bool)1))))))));
    }
}
