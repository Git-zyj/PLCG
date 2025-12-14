/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58359
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
    var_13 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_10)))), (var_5));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_10)));
                        var_16 *= ((/* implicit */_Bool) var_7);
                        arr_9 [i_3] [i_3] [i_1] [(unsigned char)23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_3])) & (((/* implicit */int) (short)-23323))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)12] [i_3 + 2] [i_3 - 2]))) : (arr_8 [i_0] [i_3 + 4] [i_3] [i_3 + 2])));
                    }
                    arr_10 [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) ((max((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) arr_7 [(_Bool)1] [i_0 - 1] [(short)8] [i_0 - 1])))) << (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) + (2100)))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) + (((/* implicit */int) (short)(-32767 - 1)))))), (max((var_0), (((/* implicit */unsigned int) arr_2 [i_0] [23U])))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_4 - 2] = ((/* implicit */unsigned int) ((unsigned char) (-(281474909601792LL))));
                                var_18 = ((/* implicit */unsigned int) arr_4 [i_0 + 1] [i_4 - 1] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
}
