/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56648
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_9) - (((/* implicit */int) var_11))))) & ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (min((-5185051390051430587LL), (((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (129632145818599664LL))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)0), (var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_14 -= ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_4] [i_3 - 1] [i_3 + 1] [i_1] [i_1] [i_1])) ? (arr_16 [i_4] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 1] [i_3] [i_2] [i_3] [i_0])))));
                                var_16 = (unsigned short)65472;
                                var_17 &= ((/* implicit */unsigned char) (~(arr_16 [i_0] [i_4] [i_2] [i_3 + 1] [i_2] [i_4])));
                                var_18 = ((/* implicit */int) ((0ULL) | (((/* implicit */unsigned long long int) arr_7 [i_0]))));
                                arr_17 [i_0] [i_0] [i_0] [i_3 - 1] |= ((/* implicit */unsigned short) (short)26289);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) max((arr_9 [i_0]), (arr_9 [i_0])));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)54377)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) & (((/* implicit */int) arr_0 [i_5] [i_5]))))) ? (((max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (var_7))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-26271))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_5]))))), (((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)54592)))))))));
                }
                arr_20 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (max((((/* implicit */unsigned int) arr_8 [i_1] [i_0] [i_0])), (arr_13 [i_0])))))) ? (((((/* implicit */unsigned long long int) var_9)) * (((var_4) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (((/* implicit */long long int) (short)-10659)))))));
                var_21 *= ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_22 -= ((/* implicit */short) var_8);
}
