/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9422
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
    var_14 = 1297097276738546356LL;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), ((_Bool)0)));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [17LL])) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (!((_Bool)0))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) arr_11 [i_2] [i_2] [i_2]);
                var_19 -= ((/* implicit */long long int) 292714542U);
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (3730182469533648644ULL)));
}
