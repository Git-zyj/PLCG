/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90966
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_5))));
    var_13 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_2 [(signed char)13] [i_0 - 1])) == (((/* implicit */int) arr_4 [(unsigned char)5] [i_0 + 2] [i_2] [i_2])))));
                    arr_6 [i_2] = ((/* implicit */long long int) var_11);
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)53710)), (var_0)))) ? (((/* implicit */int) max(((unsigned short)8600), ((unsigned short)53710)))) : (((/* implicit */int) var_5))))));
}
