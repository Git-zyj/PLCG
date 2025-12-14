/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79239
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_0 [i_0 - 3]) : (var_2))), (((((/* implicit */int) ((short) arr_5 [i_2] [i_1] [(signed char)3]))) ^ ((-(((/* implicit */int) (unsigned short)50838))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_9)))))));
                                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (!(var_8))))))) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_2 - 1])) : (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0 + 1]);
                    arr_16 [i_2] = ((unsigned char) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_13))))))))));
}
