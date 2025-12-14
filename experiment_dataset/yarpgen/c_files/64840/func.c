/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64840
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
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1])))) - (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */long long int) var_4)) : (arr_5 [i_0] [i_0] [i_2])))))) ? (((((/* implicit */long long int) var_4)) + (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2736125662U)))))) : (var_13));
                    var_20 = ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0]))))) & (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_1]))))))) : (((var_1) ? (var_7) : (arr_8 [i_2]))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2])) + (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1))))) && (((/* implicit */_Bool) arr_2 [i_1])))))) < (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (max((-9223372036854775801LL), (((/* implicit */long long int) (short)-27421)))) : (((arr_5 [i_0] [i_0] [i_2]) / (arr_8 [i_0])))))));
                    var_22 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_2 [i_0])))));
                }
            } 
        } 
    } 
}
