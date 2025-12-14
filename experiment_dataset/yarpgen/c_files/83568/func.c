/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83568
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [(signed char)7]);
                var_16 -= ((/* implicit */unsigned char) min(((_Bool)1), ((((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (_Bool)1))))));
                var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0])))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
                var_18 = min((((/* implicit */unsigned long long int) max((min(((unsigned short)18), (((/* implicit */unsigned short) var_5)))), (arr_2 [i_0] [i_0])))), (2ULL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) arr_10 [i_3])), ((short)7362))))));
                var_20 ^= ((/* implicit */_Bool) (short)-7362);
            }
        } 
    } 
}
