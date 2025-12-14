/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81091
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned long long int) var_12)), (4110128938306609353ULL)))))) ? (min((((/* implicit */long long int) var_1)), (((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((signed char) -7729745854683361008LL)))) % (((/* implicit */int) (unsigned char)56))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)1)), (1327650913U)));
                    arr_9 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned short)61557), (((/* implicit */unsigned short) (short)-5062)))))));
                }
            } 
        } 
    } 
}
