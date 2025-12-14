/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71995
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) -3917943615473354104LL);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) (+(((int) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_3] [i_2] [19U] [i_0 - 1])) ? (((/* implicit */long long int) arr_12 [i_1] [i_1])) : (arr_9 [14LL] [i_1] [i_2] [i_3] [i_3] [i_4]))))));
                                arr_17 [i_4] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)106)) > (((/* implicit */int) (unsigned short)11))));
                                var_13 = ((/* implicit */signed char) arr_0 [i_3] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            {
                arr_25 [i_5] = ((/* implicit */long long int) var_10);
                arr_26 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_5] [i_5])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5])) || (((/* implicit */_Bool) arr_18 [(signed char)11] [(_Bool)1]))))))) : (((/* implicit */int) arr_21 [i_6 - 1] [22U]))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_10);
    var_15 |= ((/* implicit */long long int) var_10);
}
