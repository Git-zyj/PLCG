/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94327
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (signed char)32))))) - (((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */_Bool) 837493465U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3 - 3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) (unsigned short)0);
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)1)) && (((/* implicit */_Bool) 3457473827U)))) ? (837493467U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_2 - 1] [i_0])) : (((/* implicit */int) var_9)))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_3]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) 3457473821U);
}
