/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87472
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
    var_19 = ((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) (~(var_3))))))) ? ((+(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_11)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_3);
                        arr_10 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 - 1]))))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3])));
                        var_20 = ((/* implicit */short) min((var_20), (arr_2 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) min((arr_0 [i_5 + 2]), (arr_4 [i_0])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_5 + 2])))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_4 [i_5 + 1])) : (((/* implicit */int) arr_0 [i_2])))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] [i_0] [i_0]))))) ? (max((((/* implicit */int) arr_14 [i_5] [i_2] [i_0] [i_0] [i_2] [i_1] [i_0])), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_2])))))) : (((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_4))))))))));
                }
            } 
        } 
    } 
    var_23 = (-((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (var_0))))));
    var_24 = ((/* implicit */short) var_14);
}
