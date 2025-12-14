/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78416
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
    var_12 = ((/* implicit */long long int) 1335338728);
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-99))))), ((~(((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 1] [i_0 - 2]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)241))))), ((-(var_8))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-97)) + (-1))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)12))) : (max((arr_4 [i_1] [i_0]), (((/* implicit */long long int) (short)-22418))))))) || (((/* implicit */_Bool) var_0))));
            }
        } 
    } 
}
