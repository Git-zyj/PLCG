/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58798
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((var_13), (((/* implicit */short) var_17))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 13850372084265566420ULL))))))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (arr_4 [i_0] [i_1] [i_2])));
                    arr_10 [i_1] [(unsigned char)11] [(unsigned char)11] [i_1] = ((/* implicit */long long int) (-(13850372084265566427ULL)));
                    var_20 += ((/* implicit */short) (~((-(arr_3 [i_2 + 2] [i_2 + 2] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
