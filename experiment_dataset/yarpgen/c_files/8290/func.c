/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8290
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
    var_11 = ((/* implicit */unsigned char) (+(6439044931653289277ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1376312853U)) ? (((/* implicit */unsigned int) 1245080891)) : (1376312853U)))), (((((/* implicit */_Bool) 1376312856U)) ? (max(((-9223372036854775807LL - 1LL)), (3366538108248889606LL))) : (min((3366538108248889602LL), (((/* implicit */long long int) var_4)))))))))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_3 [4LL] [i_1])), (15992657936573058301ULL)))))) ? (3366538108248889606LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9367)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((signed char) arr_9 [6U] [i_1]))))))))))));
                }
            } 
        } 
    } 
}
