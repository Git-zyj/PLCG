/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65382
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48406)))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((var_3), (((/* implicit */unsigned int) var_12)))))));
                            arr_11 [i_0 + 2] [i_1] [i_1] [i_2 + 2] [i_0 + 2] [i_3 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (-7638784023251107582LL)))) ? (((/* implicit */long long int) var_9)) : ((-(var_5))))), (((/* implicit */long long int) (+(((((/* implicit */int) var_12)) - (((/* implicit */int) var_7)))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((max((var_9), (((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 - 1])))) > ((~(((/* implicit */int) var_13))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0 - 1] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) arr_2 [i_4 - 1]);
                                arr_20 [i_4 - 1] [i_5] [i_6 - 1] = var_6;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((unsigned short) min((min((((/* implicit */unsigned short) (unsigned char)72)), ((unsigned short)23846))), (((/* implicit */unsigned short) arr_5 [i_0 - 2])))));
                }
                for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [i_7] [i_7] [(unsigned short)6] [i_7] [i_7])) + (((/* implicit */int) (signed char)71)))) / (var_9)))) + (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 1]))) : (arr_15 [i_0] [i_0] [i_0 - 1])))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (arr_1 [i_1])));
                    arr_25 [i_0 + 1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) var_14);
                }
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)183))) + (7638784023251107581LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_3);
    var_23 += ((/* implicit */unsigned short) var_11);
}
