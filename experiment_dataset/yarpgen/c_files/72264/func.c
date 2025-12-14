/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72264
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
    var_18 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 4503569505911855601LL)) ? (((/* implicit */int) (_Bool)0)) : (-1))), ((~((-(var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (unsigned char)108)))))) : ((+(arr_5 [i_1] [i_1 - 1])))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_5 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : ((~(arr_5 [i_1 + 1] [i_1 - 1])))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
            }
        } 
    } 
}
