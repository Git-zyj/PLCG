/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83798
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] &= ((/* implicit */long long int) (-((+(((/* implicit */int) var_2))))));
                    arr_8 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((3142473162318573142LL) | (((/* implicit */long long int) 1012143384))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32716))))) : (((/* implicit */int) max(((signed char)62), (((/* implicit */signed char) var_2))))))) >> ((((+(((/* implicit */int) (unsigned short)32819)))) - (32790)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned short)32716))))))))));
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)62))) | (9007061815787520LL)))))))))));
}
