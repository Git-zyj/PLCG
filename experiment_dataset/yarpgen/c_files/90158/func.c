/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90158
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1015680763)) : (-7499473441891774893LL)))) ? (((4749753958263511767ULL) + (var_1))) : (4749753958263511767ULL))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned char)247)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)156)))))))) ? (((((((/* implicit */int) (unsigned short)7)) <= (((/* implicit */int) (unsigned short)30)))) ? (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) (unsigned short)34)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6)))))));
    var_14 += ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (var_9) : (arr_2 [i_1] [i_2])))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((896U), (((/* implicit */unsigned int) var_0))))) : (var_1)));
                }
            } 
        } 
    } 
}
