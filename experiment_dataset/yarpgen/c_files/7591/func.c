/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7591
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
    var_10 += ((/* implicit */int) var_7);
    var_11 = ((/* implicit */signed char) var_2);
    var_12 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) max(((_Bool)1), (var_8)))), ((-(var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)24742)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) : (103564626U)))) ? (((5337365789688538682LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                var_13 = ((/* implicit */unsigned int) ((((long long int) arr_0 [i_1])) > (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0 + 2])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!((_Bool)1)));
}
