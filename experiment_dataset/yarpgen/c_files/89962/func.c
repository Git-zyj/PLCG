/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89962
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
    var_10 = ((/* implicit */unsigned int) 1669259481136819289LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (_Bool)1);
                var_12 = ((/* implicit */short) (~(((unsigned int) ((9914739737665433186ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))));
                arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_4 [i_0] [i_0])))))) ? (max((var_9), (arr_4 [i_1 + 2] [i_1]))) : (var_8)));
                arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) & (((((/* implicit */long long int) var_6)) - (-1669259481136819289LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) & (((((/* implicit */_Bool) -35718126941593647LL)) ? (1669259481136819289LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19220))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_13 = ((/* implicit */_Bool) ((max((max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-1))))))) & (((/* implicit */unsigned long long int) min((-1669259481136819290LL), (((/* implicit */long long int) arr_0 [i_1 + 2])))))));
            }
        } 
    } 
}
