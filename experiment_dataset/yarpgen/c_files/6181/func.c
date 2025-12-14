/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6181
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */int) var_13);
                            var_21 = ((/* implicit */short) ((var_15) % (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_10)))) || (((/* implicit */_Bool) min((var_16), (arr_1 [i_0])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_17))) >> (((min((var_10), (((/* implicit */long long int) var_9)))) + (268319792846729028LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [(signed char)4] [i_5] [i_4 - 1]))))))));
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))))) >= (((/* implicit */long long int) arr_6 [i_0] [i_4 - 1] [i_4 - 1] [i_5] [i_0]))))) == (((/* implicit */int) max((max((arr_8 [i_0]), (arr_12 [i_0] [i_1 + 1] [12]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) var_17))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_2 [i_1 + 3] [(unsigned char)8] [i_1 - 1]))));
                var_25 += ((/* implicit */unsigned char) ((((max((var_2), (((/* implicit */unsigned int) var_0)))) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
    var_26 = var_18;
    var_27 = var_16;
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            {
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_3))));
                var_29 = ((/* implicit */unsigned char) var_1);
                var_30 = ((/* implicit */int) min((var_30), (max((((var_15) << (((min((((/* implicit */unsigned long long int) arr_15 [i_7])), (var_19))) - (10702501762417446428ULL))))), (((/* implicit */int) arr_18 [i_6]))))));
            }
        } 
    } 
}
