/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83292
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)44854), (arr_4 [i_1 + 1] [i_0]))))) <= (var_12)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [5ULL] [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_7 [i_1 + 1])))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_3 + 3])) : (((/* implicit */int) var_10))))))), (min((min((((/* implicit */unsigned short) var_1)), (var_8))), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_2 [i_2] [i_3 + 2])))))))));
                            arr_12 [i_0] [i_0] [i_1 + 1] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)38645), (((/* implicit */unsigned short) arr_10 [i_1 + 3] [i_3 + 2] [i_3] [i_3] [i_1 + 3] [i_1 + 3]))))) % ((~(((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)8243))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (var_4)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (short)29223)) ? (((/* implicit */int) (unsigned short)8238)) : (((/* implicit */int) (unsigned char)252)))))) : (((/* implicit */int) (unsigned short)8243))));
    var_18 += ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)57299)) - (((/* implicit */int) (short)29229)))) % (((/* implicit */int) var_8)))) % (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_8)) - (39600)))))));
}
