/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97416
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((-2066161196), (((/* implicit */int) arr_3 [i_0]))))) ^ (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))));
        var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)32768))));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned short) (unsigned short)15)))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_0))))) | (min((((/* implicit */long long int) var_2)), (var_8)))))) || (((/* implicit */_Bool) ((min((var_5), (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_12 [i_2])))), (((/* implicit */int) ((_Bool) arr_12 [i_4])))));
                    arr_16 [i_4] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_9)))) ? (min((arr_10 [i_3 - 2] [i_3 + 2]), (arr_10 [i_3 - 2] [i_3 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_3 - 2] [i_3 + 2]))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned long long int) ((var_7) ? (((/* implicit */int) arr_5 [i_2] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_2] [i_3 + 1]))))))));
                    arr_17 [11U] [11U] [i_3] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_2)), (arr_11 [i_2] [i_2] [(_Bool)1])))))));
                }
            } 
        } 
    } 
}
