/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91963
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
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) (~(((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))), (min((var_2), (((/* implicit */long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned char) (~(min((max((9223372036854775807LL), (((/* implicit */long long int) arr_6 [i_3])))), (((/* implicit */long long int) ((_Bool) -5574536896287297391LL)))))));
                                var_14 = ((/* implicit */unsigned short) ((max((((unsigned int) (short)-6)), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1] [10LL])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_1 [(unsigned char)4] [i_0])))))))));
                                arr_15 [(signed char)8] [i_1] [(unsigned short)17] = ((/* implicit */int) min((((/* implicit */long long int) max((arr_6 [i_1]), (var_4)))), (((((/* implicit */long long int) ((((/* implicit */int) (short)-1024)) * (((/* implicit */int) var_6))))) ^ (5574536896287297391LL)))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((arr_10 [i_1] [i_0] [i_0] [9]) ? (((((arr_9 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1]))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [13] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0 - 1] [i_0 + 1] [17U] [i_1]) || (((/* implicit */_Bool) var_9))))))));
            }
        } 
    } 
}
