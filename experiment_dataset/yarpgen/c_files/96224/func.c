/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96224
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((((/* implicit */_Bool) ((unsigned long long int) 616821277U))) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_2] [i_1])) : (((/* implicit */int) min((arr_1 [i_1]), (var_1))))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_5))));
                    }
                    var_20 = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) arr_9 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_0])))) || (((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */int) (short)-9093)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (max(((~(((/* implicit */int) (short)-14812)))), (((/* implicit */int) max(((short)14812), (((/* implicit */short) (_Bool)0))))))) : ((-(((/* implicit */int) var_8)))))))));
}
