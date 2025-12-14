/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87521
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_2 [i_0])))))))), (arr_2 [i_1])));
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */long long int) min((min((var_9), (((/* implicit */int) (signed char)31)))), (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_6))))));
                var_13 = ((/* implicit */unsigned short) arr_2 [i_1]);
                var_14 = max((((/* implicit */int) ((unsigned short) min(((signed char)-3), ((signed char)-9))))), (arr_0 [(_Bool)1] [i_1]));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_0);
}
