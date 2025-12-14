/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66063
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
    var_14 *= ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) arr_2 [i_1 + 1] [i_2]))), (((unsigned short) arr_6 [6] [i_1 + 1] [i_1] [i_1 + 1] [6]))));
                            var_16 *= ((/* implicit */short) ((((var_13) < (((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0] [2ULL] [i_3] [i_3])) ^ (arr_5 [i_1] [4ULL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned short)65019))))) : (((((/* implicit */_Bool) (short)-6318)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)510))) : (((long long int) -6179068826600834780LL))))));
                            var_17 = ((/* implicit */int) ((unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1]));
                        }
                    } 
                } 
                var_18 &= ((/* implicit */signed char) ((49152) / (((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_5 [i_0] [4])))) > (((((/* implicit */long long int) arr_5 [i_0] [12ULL])) / (var_9))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(49147)));
                    arr_11 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0])));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) -1957533064));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_7))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (69388338119152993ULL) : (((/* implicit */unsigned long long int) -1957533064)))) <= (((/* implicit */unsigned long long int) var_0))));
    var_22 = ((/* implicit */signed char) (+(var_9)));
}
