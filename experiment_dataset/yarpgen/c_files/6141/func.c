/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6141
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2 - 1] [i_3] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))) ? ((+(((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) : (((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)23]))));
                            var_18 = ((/* implicit */int) var_15);
                        }
                    } 
                } 
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]))))) << ((((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) - (16559)))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */int) min(((short)-18117), (arr_12 [i_0] [i_1] [i_1] [i_0] [i_0])))), ((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_17)))))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) < (var_10))))))));
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_17)));
}
