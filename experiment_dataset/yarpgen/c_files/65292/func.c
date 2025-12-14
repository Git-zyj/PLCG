/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65292
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
    var_18 = (-(((/* implicit */int) var_5)));
    var_19 *= ((/* implicit */_Bool) var_3);
    var_20 *= ((/* implicit */unsigned long long int) var_11);
    var_21 |= ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) (_Bool)1);
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))) - (((var_2) ^ (((/* implicit */unsigned int) var_13)))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 4; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))))) ? ((-(1374020495707441084LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))) ? (((/* implicit */int) var_7)) : ((((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))) - (((/* implicit */int) ((_Bool) (_Bool)1))))));
                            arr_13 [i_0] [i_1 + 1] [i_3 + 1] = ((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4265872524U)) ? (((/* implicit */int) var_15)) : (1080582955))))));
                            var_24 = ((/* implicit */unsigned short) var_5);
                            var_25 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0 - 1] [i_0]);
                            arr_14 [i_0 - 1] [i_0] [i_1 - 2] [i_1 - 2] [i_3] [i_4 - 1] = var_8;
                        }
                    } 
                } 
                var_26 *= ((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2]);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_27 |= ((/* implicit */unsigned short) max((max((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-1097330646369432852LL))), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                            arr_20 [i_6] [i_5] [i_5] [i_0 - 1] = ((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_5 + 2]);
                            arr_21 [i_0 - 1] [i_5] [i_5] [i_6] [i_0] = var_6;
                            var_28 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) arr_0 [i_5]))) ? (min((((/* implicit */int) (_Bool)1)), (-1))) : (((/* implicit */int) var_16)))) & (((/* implicit */int) arr_11 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
