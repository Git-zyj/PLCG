/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77753
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
    var_17 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) var_9);
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (((unsigned long long int) ((2147483648U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19451))))))));
                arr_5 [i_0] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [i_3] = (unsigned char)69;
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_6 [i_2]), (((/* implicit */unsigned short) arr_0 [i_3 + 1] [i_5])))), (((/* implicit */unsigned short) arr_19 [i_2] [i_2 - 2] [i_2 + 1] [i_3] [i_3 - 1] [i_5]))))) ? (16213846U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)199))))));
                                arr_21 [i_2] [i_2] [i_4] = ((/* implicit */short) (unsigned char)56);
                            }
                        } 
                    } 
                    arr_22 [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [i_2] [i_3 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_2 - 1]))))));
                    var_20 = ((/* implicit */unsigned short) arr_18 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2] [i_3 + 1]);
                    arr_23 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)71)) + (((/* implicit */int) var_15))))) - (max((((/* implicit */unsigned long long int) var_0)), (var_8))))) + (((/* implicit */unsigned long long int) ((arr_12 [i_2 + 1] [i_3 - 1]) ? (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) (short)14852)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)71)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))));
}
