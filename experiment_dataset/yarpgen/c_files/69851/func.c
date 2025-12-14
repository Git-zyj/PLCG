/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69851
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
    var_11 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 4098884377U)) && (((/* implicit */_Bool) 4064245535U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(196082907U)));
                var_12 ^= ((/* implicit */signed char) ((((arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 2]) + (arr_0 [i_1 - 1]))) << (((min((230721761U), (((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) - (230721760U)))));
                arr_6 [i_1] = ((/* implicit */int) ((((max((3298079935U), (((/* implicit */unsigned int) (unsigned char)106)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (unsigned char)10)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)136)), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (9223372036854775807LL)))) : (((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) 2827430975138819673LL)))))) : (((/* implicit */unsigned long long int) (-((~(var_2))))))));
            }
        } 
    } 
}
