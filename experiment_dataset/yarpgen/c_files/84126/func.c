/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84126
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) ((min((((/* implicit */int) var_14)), (var_13))) >= (((arr_2 [i_0]) & (min((((/* implicit */int) arr_4 [i_0] [i_1])), (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] [i_0] = var_0;
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10314829235231458686ULL)) ? (var_12) : (((/* implicit */int) (short)22787))))), (min((12422847500087706772ULL), (((/* implicit */unsigned long long int) var_6)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(short)6]))))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((short) var_2);
                                arr_16 [i_0] [i_3] [i_2] [i_1] [i_0] = arr_1 [i_0];
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [10] [0]))) : (((var_9) / (((/* implicit */unsigned long long int) var_12))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */int) var_14);
}
