/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98084
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_1])) + (((/* implicit */int) arr_0 [i_3] [i_3])))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((short) max((((/* implicit */long long int) min(((short)11140), (((/* implicit */short) (unsigned char)9))))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 1] [i_1] [i_3] [i_2] [i_1] [(_Bool)1]))) / (var_1)))));
                                arr_15 [i_2] [i_2] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (max((((/* implicit */long long int) (short)11149)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_0) : (((/* implicit */unsigned long long int) (~((+(arr_2 [i_0] [i_2 + 2]))))))));
                                arr_16 [i_4] [i_1] [11LL] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_4 - 1] [i_1] [i_3] [(short)1] [i_4 - 1])))) : (max((var_3), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_2] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) ((long long int) ((var_12) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)11140)))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) var_0);
}
