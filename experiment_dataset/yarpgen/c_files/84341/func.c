/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84341
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) arr_1 [i_1]);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) >> (((min((arr_1 [i_1]), (4294967269U))) - (2583830099U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned int) (signed char)111)))))))) : ((~(((((/* implicit */int) arr_2 [i_1])) >> (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */short) var_7);
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_23 ^= ((/* implicit */unsigned int) arr_0 [i_3]);
                arr_10 [(unsigned short)3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (arr_4 [i_3]))))));
                var_24 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_7 [(_Bool)1] [i_2])), (arr_3 [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) max((arr_1 [11LL]), (((/* implicit */unsigned int) var_13))))) : ((-(arr_8 [i_2])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_12);
}
