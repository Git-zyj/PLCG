/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72757
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
    var_16 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_8 [i_0] [(signed char)11] [i_1] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_9)))))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) << (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            {
                var_18 = ((/* implicit */int) var_11);
                var_19 *= ((/* implicit */unsigned long long int) (~((+((~(((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 1]))))))));
                arr_18 [i_3] [i_4] [i_4 + 2] = ((/* implicit */unsigned short) (~(((max((arr_11 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_12 [i_4])))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_12 [3])))))))));
            }
        } 
    } 
}
