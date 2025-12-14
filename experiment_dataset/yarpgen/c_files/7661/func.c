/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7661
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */long long int) max((arr_1 [18U] [i_2 - 1]), (((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (unsigned short)58204))))));
                    var_20 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min(((unsigned char)130), (((/* implicit */unsigned char) var_6))));
    var_22 = ((/* implicit */int) ((((18446744073709551602ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) >> (((min((((/* implicit */long long int) ((((/* implicit */_Bool) 14025403344253219758ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)60834))))), (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) 2147483647)))))) + (6674103507622359848LL)))));
}
