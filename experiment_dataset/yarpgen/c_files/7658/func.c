/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7658
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) ((short) var_13))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_2 + 2] [2] [(short)10]))))))));
                        arr_11 [i_3] = ((/* implicit */int) arr_5 [i_0 + 3] [i_0 - 1]);
                        var_18 ^= ((/* implicit */long long int) ((unsigned char) var_12));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 3] [i_1 - 1] [i_2 + 1] [i_5 + 1] [i_5 + 1]))) / ((-(arr_17 [i_0] [i_0] [14ULL] [i_0] [i_0 + 1] [i_0])))))))));
                                var_20 = ((/* implicit */short) ((unsigned char) arr_4 [(_Bool)1] [i_4]));
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_13 [i_0 + 2] [i_4])))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) ^ (var_4))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0]))) && (arr_7 [i_0 + 3])));
                    var_23 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
}
