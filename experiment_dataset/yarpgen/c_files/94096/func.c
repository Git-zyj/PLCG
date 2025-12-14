/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94096
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_12)))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (arr_1 [i_1])))) / (5314132565254497998ULL)))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44169))))) ? (min((arr_3 [i_0] [4ULL] [i_1 - 1]), (arr_3 [i_1] [i_1] [i_1 - 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (arr_3 [i_1] [i_1] [i_1 - 1])))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) ((9224538017148197600ULL) / (((/* implicit */unsigned long long int) arr_1 [(unsigned char)11])))))) / (min((((/* implicit */unsigned long long int) arr_0 [i_0] [0ULL])), (((13132611508455053617ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_12 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 - 2])) ? (arr_9 [i_3 - 2] [i_3 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25533)))))) && (arr_4 [i_3])));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
            } 
        } 
    } 
}
