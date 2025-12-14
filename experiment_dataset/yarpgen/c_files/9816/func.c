/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9816
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (signed char)60);
                arr_4 [i_0] [i_1] &= ((/* implicit */long long int) ((signed char) 8989607068696576LL));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)68)) ^ (((/* implicit */int) var_2))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -1458280544)) : (var_4)))))), ((-(min((((/* implicit */long long int) (signed char)60)), (var_1)))))));
    var_15 = ((/* implicit */short) min((((((/* implicit */int) var_10)) != (((/* implicit */int) min(((signed char)60), (var_11)))))), (((((/* implicit */int) var_2)) <= (var_8)))));
}
