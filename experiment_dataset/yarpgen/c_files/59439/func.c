/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59439
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) var_6))))) ? (var_5) : (((/* implicit */int) ((arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1]) > (var_1))))))), (var_9)));
                    var_12 = ((/* implicit */unsigned short) max((-5), (((/* implicit */int) (unsigned char)21))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((_Bool) min((((/* implicit */long long int) var_10)), (var_9)))))));
                    var_14 = ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (unsigned short)39262);
    var_16 = ((/* implicit */unsigned short) max(((unsigned char)222), (((/* implicit */unsigned char) (signed char)0))));
}
