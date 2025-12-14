/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85339
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
    var_17 = ((/* implicit */unsigned int) (((~(((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) (signed char)(-127 - 1));
                var_18 = ((/* implicit */unsigned int) var_14);
                var_19 = ((/* implicit */int) (~(((unsigned int) (_Bool)1))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                var_20 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) - ((-(((unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (short)-6014);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
        {
            {
                arr_12 [10ULL] [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((2147483647) / (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned int) ((arr_10 [(short)2] [i_2] [i_3]) / (101444642)))), (max((939524096U), (((/* implicit */unsigned int) var_14))))))));
                arr_13 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) arr_3 [i_2]))))))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)55993), (var_8)))) <= (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) arr_9 [i_3 - 3])) : (var_10))))))));
                var_23 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned short)1023)))));
            }
        } 
    } 
}
