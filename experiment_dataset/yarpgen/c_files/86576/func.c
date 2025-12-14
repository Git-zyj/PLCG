/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86576
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
    var_19 = ((/* implicit */unsigned short) 3006283976617921745LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 0U);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (max((-5050566899774191597LL), (((/* implicit */long long int) arr_5 [i_2] [i_2] [(signed char)12])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [(unsigned char)5])))))) > (((/* implicit */long long int) ((/* implicit */int) max((var_9), (arr_3 [i_1 - 1] [i_0 + 1])))))));
                            var_22 = 292229299944049752LL;
                        }
                    } 
                } 
                var_23 = (!(((/* implicit */_Bool) var_9)));
                var_24 = ((/* implicit */_Bool) max(((((_Bool)1) ? (min((arr_1 [i_1] [i_0 + 1]), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19692)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)44547))))))), (((/* implicit */long long int) ((signed char) ((signed char) arr_5 [i_0] [i_0] [(unsigned short)12]))))));
                arr_8 [i_0] |= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1]))))));
            }
        } 
    } 
}
