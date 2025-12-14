/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91534
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned short)0), (arr_2 [i_0])))), (((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_2] [i_1]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0]))))));
                    arr_10 [i_0] = max((max((var_1), (min((((/* implicit */unsigned short) arr_8 [i_0] [i_1 + 1] [i_0])), (arr_1 [i_0]))))), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), ((unsigned short)56))))));
                }
            } 
        } 
    } 
    var_14 *= var_4;
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_15 = max((var_8), (((/* implicit */unsigned short) (_Bool)1)));
        var_16 = (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))))));
    }
}
