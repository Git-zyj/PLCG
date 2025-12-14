/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59625
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
    var_16 = ((/* implicit */signed char) ((unsigned char) var_15));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [4U] [i_1 + 1] [4U])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (arr_3 [6ULL] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) ^ (var_11))))))) : ((-(((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))));
                    var_19 = arr_1 [i_0] [i_0];
                }
            } 
        } 
    } 
}
