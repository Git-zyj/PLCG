/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99015
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) var_17));
                    arr_8 [8U] [6] [8U] |= min((((/* implicit */long long int) (~(arr_5 [i_2 - 2] [i_2 + 2] [i_2 - 2])))), (((long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_6))))));
                    var_18 &= arr_2 [i_0];
                    var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0])), (var_14))))))));
                    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 + 1] [i_2 - 2])) ? (arr_5 [i_2] [i_2 + 1] [i_2 - 2]) : (arr_5 [1ULL] [i_2 + 1] [i_2 - 2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? ((-(((32767U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) (unsigned char)0)))))) >= (var_14)))))));
}
