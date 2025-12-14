/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86174
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
    var_15 = ((/* implicit */short) var_6);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(unsigned short)8] [(unsigned short)8])) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)0] [4U] [i_0])))))));
                        var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50226))) : (15861534042905646617ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                    }
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_8))));
                }
            } 
        } 
    } 
}
