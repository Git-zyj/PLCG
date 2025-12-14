/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78253
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [(short)16] [(short)16] [i_2] [i_4] [i_3 + 3] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_8 [i_1])))) && (((arr_1 [i_0] [i_1 + 4]) || (((/* implicit */_Bool) 0))))))) == ((+(((/* implicit */int) arr_2 [i_1] [i_1]))))));
                                var_14 |= ((/* implicit */unsigned char) arr_0 [i_3]);
                                var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) arr_5 [8LL] [2] [i_1]))), (arr_5 [i_4 + 1] [i_4 + 1] [i_4])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 4; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 1] [i_0]))))) != (var_1)))), (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]))) ? (arr_5 [(unsigned short)7] [(signed char)1] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_5] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_6])))))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_14 [i_5]))));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_2 [i_1] [i_1 + 2]))))));
                var_18 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_1] [i_1 + 2]));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) -8);
    var_20 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
}
