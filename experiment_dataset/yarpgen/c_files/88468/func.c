/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88468
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
    var_18 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (((((/* implicit */_Bool) 5490037079305324674ULL)) ? (var_2) : (var_3)))))) - ((((+(((/* implicit */int) var_16)))) & (var_5))));
    var_19 = ((((/* implicit */unsigned long long int) ((((var_13) / (((/* implicit */int) var_16)))) + (((/* implicit */int) var_9))))) & ((+(var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((var_21), ((-(((((-1536705003) ^ (var_6))) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 3]))))))));
                            arr_11 [i_1] [i_2] [3ULL] = ((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [i_3 + 1]);
                            arr_12 [i_0] [5] [i_1 - 1] [i_2] [i_3 - 4] [i_3] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [8] [8ULL]))) / (arr_6 [i_3 - 3] [i_2] [i_2] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
