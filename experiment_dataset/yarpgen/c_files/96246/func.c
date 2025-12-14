/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96246
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
    var_18 &= ((/* implicit */unsigned int) var_3);
    var_19 &= ((/* implicit */unsigned short) var_7);
    var_20 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [14ULL] [i_1] [i_2] = ((/* implicit */_Bool) ((short) (unsigned short)10490));
                    arr_8 [i_1] = ((/* implicit */short) (_Bool)1);
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) (~(14704737243844210282ULL)));
                    arr_10 [2ULL] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_2]))))));
                }
            } 
        } 
    } 
}
