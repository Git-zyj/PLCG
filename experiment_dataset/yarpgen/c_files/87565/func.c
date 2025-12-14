/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87565
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1254028699)) - (0U)))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_8))))) ? (((var_6) >> (((var_3) - (4191295617U))))) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1254028727)))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_3)))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 -= ((/* implicit */int) min((((long long int) arr_5 [i_1] [i_1 - 1] [i_2])), (((/* implicit */long long int) ((arr_5 [i_0 + 1] [i_1 - 1] [(_Bool)1]) == (arr_5 [i_0 - 1] [i_1 + 1] [i_2]))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_1 [i_1 + 1]))) >> (((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2] [i_2]))))) + (7653360547237976451LL))))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)205);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) 1387564847)))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)139))));
                            var_16 = 2219855170U;
                            arr_13 [i_3] [i_1] [i_1] = ((/* implicit */_Bool) (~(arr_0 [i_4])));
                            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-22218))) | (4294967295U)))));
                        }
                    }
                }
            } 
        } 
    } 
}
