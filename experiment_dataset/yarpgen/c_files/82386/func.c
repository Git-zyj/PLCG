/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82386
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
    var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (_Bool)1)))))))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_7))), (min((((/* implicit */unsigned short) var_9)), (var_2)))))))));
    var_13 = ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = (~((((!(((/* implicit */_Bool) arr_1 [i_0 + 2])))) ? ((+(var_0))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_0))))));
                    var_15 = ((/* implicit */unsigned long long int) ((_Bool) (-(max((arr_5 [i_0] [i_1] [i_1] [i_2 - 1]), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_0])))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) var_5);
        var_17 = ((/* implicit */unsigned long long int) (+((((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)166)))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) max((arr_6 [i_0] [6ULL] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) (unsigned char)82)))))))));
    }
}
