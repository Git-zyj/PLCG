/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70854
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
    var_11 = ((/* implicit */int) (unsigned short)53054);
    var_12 = ((min((((((/* implicit */int) var_2)) - (((/* implicit */int) var_4)))), (var_3))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12477))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40048))) : (var_1)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)31)))) * ((+(((/* implicit */int) (signed char)-31))))))), (2720064000218006370ULL)));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [(signed char)13])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_2 [i_0 - 2] [6] [i_1])))))));
                }
            } 
        } 
    } 
}
