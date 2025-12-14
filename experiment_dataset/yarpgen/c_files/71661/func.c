/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71661
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((unsigned long long int) arr_7 [(unsigned char)6] [i_0] [i_0])) : (((/* implicit */unsigned long long int) (~(-9223372036854775791LL)))))))))));
                arr_8 [(unsigned char)0] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (-2147483647 - 1)))) ? (((((/* implicit */_Bool) arr_6 [5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38598))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38598))) : (arr_4 [i_0] [i_0] [i_0])));
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [(signed char)2] [(signed char)2]))))) <= (((/* implicit */int) ((short) (unsigned char)239))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (var_5)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) (unsigned char)255))))) ? (max((((/* implicit */unsigned int) var_7)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_16)))))))));
}
