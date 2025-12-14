/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86890
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 - 2] [i_3]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))) : (var_4))) : (((/* implicit */unsigned long long int) 4052812435U)))) : (((/* implicit */unsigned long long int) ((max((var_3), (((/* implicit */unsigned int) var_9)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)105))))))))));
                        var_14 = ((/* implicit */short) var_9);
                        var_15 *= ((/* implicit */int) (_Bool)0);
                    }
                    arr_12 [i_0] [i_0] [i_2 - 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)141)));
                }
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-74)), ((unsigned char)222)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_17 = ((/* implicit */long long int) arr_13 [i_4]);
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 213428274U))));
}
