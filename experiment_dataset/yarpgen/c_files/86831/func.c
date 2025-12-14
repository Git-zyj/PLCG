/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86831
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : (699197694215477378LL)))) & (((((((/* implicit */_Bool) (unsigned short)65514)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ^ (var_19)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_3);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 8358620272899335102ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((_Bool) var_5)))))) ? (3655379484U) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_5), ((_Bool)1))))))))))));
                    arr_7 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(18ULL))))))) : (((/* implicit */int) min((var_17), (((/* implicit */short) var_9)))))));
                }
            } 
        } 
    } 
    var_22 -= 30ULL;
}
