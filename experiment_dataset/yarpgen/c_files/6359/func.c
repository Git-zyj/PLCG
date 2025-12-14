/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6359
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
    var_14 = ((/* implicit */unsigned short) min((max((max((var_12), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) min(((signed char)79), ((signed char)93)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_7)))))))));
    var_15 = ((/* implicit */signed char) 10146914718153394087ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_16 &= ((/* implicit */_Bool) ((signed char) var_8));
                var_17 = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned short) var_11);
                var_19 &= ((/* implicit */_Bool) var_13);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */int) (signed char)-1))))) - (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) != (((/* implicit */int) var_3)))) ? (((((/* implicit */_Bool) var_7)) ? (var_1) : (1647531810U))) : (((unsigned int) var_7)))))));
    var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (var_10))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))))));
}
