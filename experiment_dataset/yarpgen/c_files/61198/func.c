/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61198
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
    var_11 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)62)) ? (arr_7 [i_0] [i_0] [3]) : (((/* implicit */unsigned int) arr_5 [11ULL] [i_1] [10] [10]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_2])) < (((/* implicit */int) arr_3 [i_1] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [i_2] [i_1] [i_2] [i_1])))) ? (((((/* implicit */int) (unsigned short)40455)) >> (((arr_5 [i_0] [i_1] [i_1] [i_2]) + (959860934))))) : (((((/* implicit */int) (unsigned char)204)) << (((arr_5 [i_0] [i_2] [i_0] [i_0]) + (959860938)))))));
                }
            } 
        } 
    } 
}
