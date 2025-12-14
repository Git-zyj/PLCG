/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68766
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1936))))) ^ (var_5)))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) - (var_7))), (min((((/* implicit */unsigned int) (unsigned short)1940)), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((short)-4696), (((/* implicit */short) var_8))))), (min((((/* implicit */unsigned long long int) var_1)), (var_6)))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47141))) / (2338621950U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 2139194709)) >= (var_7))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned short)1936))))) <= (min((0U), (arr_3 [i_1]))))))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (5559582863263310872ULL))), (((/* implicit */unsigned long long int) (short)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2139194709)) ? (((((/* implicit */_Bool) var_4)) ? (((unsigned int) (short)-1098)) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255)))));
}
