/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87827
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0 + 3])));
                    var_18 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((var_8) << (((-2650108141802370458LL) + (2650108141802370484LL)))))), (arr_0 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (max((2474695230316928606LL), (arr_1 [i_0] [i_1]))) : (arr_1 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = ((/* implicit */unsigned short) min((var_14), ((~(var_16)))));
}
