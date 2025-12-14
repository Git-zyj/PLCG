/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6365
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((int) 1546091729057364438LL))))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57985))) : (arr_3 [i_0 + 2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_3 [i_0 - 1] [i_1 - 1]))) >= ((+(1506649651))))))));
                var_15 = ((/* implicit */int) ((1123762773380181370LL) / (((/* implicit */long long int) -70432436))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) (-(((arr_0 [i_2 + 1]) ^ (((/* implicit */unsigned long long int) -2142340874236823584LL))))));
                arr_9 [i_3] [i_2] [i_2 - 1] = ((/* implicit */short) 9551433751072310220ULL);
            }
        } 
    } 
}
