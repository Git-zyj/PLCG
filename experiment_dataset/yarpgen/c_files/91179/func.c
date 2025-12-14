/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91179
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
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) -543032761)) ? (((((/* implicit */_Bool) ((8387584) | (543032738)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4473))))))) : (((((/* implicit */int) var_18)) | (((/* implicit */int) ((_Bool) var_1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [13LL] = ((/* implicit */_Bool) -543032761);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 -= ((/* implicit */long long int) (-((+(max((((/* implicit */int) arr_5 [i_1] [i_2 + 2])), (543032730)))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~((+(((/* implicit */int) arr_2 [(short)14]))))))) | (var_12)));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_14)) || ((!(((/* implicit */_Bool) var_6))))))));
    var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63488)) ? (var_9) : (((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned long long int) (short)-29733)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))));
}
