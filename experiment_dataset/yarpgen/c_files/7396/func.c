/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7396
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)189)) >> (((((/* implicit */int) (unsigned char)170)) - (165)))))) ? (((/* implicit */int) (unsigned short)0)) : ((~(((/* implicit */int) var_2))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_6))))) | (min((((/* implicit */unsigned long long int) 7650564927183152920LL)), (18ULL))))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) 1372761223U)) : (((18ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) & (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) + (var_10)))))));
                arr_8 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_1]));
                var_22 *= ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (unsigned short)45231))))))));
}
