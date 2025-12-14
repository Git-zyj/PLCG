/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61497
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = (!(((/* implicit */_Bool) (short)-3305)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25349)) ? (((/* implicit */int) (short)-25330)) : (((/* implicit */int) (unsigned char)137))));
                            var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-25349)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [0U] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_8 [i_0] [i_0]))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */short) ((min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (4251779767639125326LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
    var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-3309)))) ? (var_9) : (((/* implicit */unsigned int) var_2))));
    var_20 = ((/* implicit */unsigned short) (short)-3305);
}
