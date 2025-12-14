/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80772
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
    var_18 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)32766)), (1988408845U)));
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) - (0U)));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned char)0] [(unsigned char)0] [i_2] [(short)10] [i_0] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-59)), ((unsigned char)255)));
                                var_21 += ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) ^ (0U));
                                var_22 |= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)41)), (67527755)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (unsigned char)54))));
                }
            } 
        } 
    } 
}
