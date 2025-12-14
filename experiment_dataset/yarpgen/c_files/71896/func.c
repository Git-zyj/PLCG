/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71896
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)14525))))), (((((/* implicit */long long int) 188461625U)) / (var_2)))))));
                    arr_7 [i_2] [i_1 - 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58601))) : (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) max((min(((signed char)-22), ((signed char)28))), ((signed char)-22))))));
                    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)27467))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */signed char) 7933732879766170892ULL);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (max((var_6), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (var_0)))))));
    var_16 += ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */_Bool) ((unsigned short) (~(max((var_0), (((/* implicit */long long int) (unsigned short)7036)))))));
}
