/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61942
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (min(((_Bool)1), ((!(((/* implicit */_Bool) var_12))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */long long int) ((_Bool) (~(min((((/* implicit */unsigned int) (_Bool)1)), (3162698733U))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */long long int) 1040384U);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [12U] [i_2] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_7 [i_0] [(short)22] [(short)16]) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-11427)) & (((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2] [8U] [i_0])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((short) (-(4293926911U)))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((((_Bool)1) ? (arr_12 [i_1 + 3] [i_1] [i_1 + 3] [i_1 + 3] [10U]) : (arr_12 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 2] [6U]))) >= (min((arr_12 [i_1] [i_1] [i_1 + 3] [i_1] [2LL]), (((/* implicit */long long int) var_9)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (~(arr_4 [1U]))))) ? (((/* implicit */int) ((short) arr_1 [i_2] [(_Bool)1]))) : (((/* implicit */int) (short)-205))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) ((var_6) ? (min((((/* implicit */long long int) var_4)), ((+(8638577932224313686LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_3)))))));
}
