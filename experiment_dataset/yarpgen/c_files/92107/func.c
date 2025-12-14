/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92107
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
    var_12 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(short)20] = (unsigned char)239;
                arr_6 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0] [(unsigned char)16]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-110)) < (((/* implicit */int) var_7))))))));
                arr_7 [i_1] [5LL] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)57554)), (max((max((((/* implicit */long long int) (unsigned short)7999)), (2305825417027649536LL))), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))));
                arr_8 [i_1] &= max((var_6), ((unsigned char)131));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_13), (-9011412134096295245LL)));
    var_14 -= ((/* implicit */int) ((min((((/* implicit */unsigned int) var_0)), (max((var_10), (((/* implicit */unsigned int) var_2)))))) == (4294967295U)));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)57522))))) >> (((((/* implicit */int) var_4)) + (3028))))))));
}
