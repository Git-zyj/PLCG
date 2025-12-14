/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69943
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
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = var_9;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) % (max((((/* implicit */unsigned int) -1844940593)), (1743617366U))))) : (1493865418U)));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_1))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    var_15 *= ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_4]);
                    arr_15 [(unsigned char)16] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1493865444U)) ? (((/* implicit */int) (short)-23888)) : (((/* implicit */int) (unsigned short)11432))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    arr_19 [i_0] [i_1] [i_1] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)7] [i_1] [i_1] [i_1]))) + (3006162984695610959ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_26 [11U] [(_Bool)1] [i_5] [10ULL] [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) var_6);
                                var_16 -= ((/* implicit */short) 262080U);
                                var_17 = ((/* implicit */unsigned long long int) var_2);
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0 - 2]))) : (2801101832U))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
