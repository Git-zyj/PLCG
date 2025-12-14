/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89252
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_1 + 2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_12)))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned long long int) min((arr_1 [i_1 - 2] [i_1 - 1]), (((/* implicit */unsigned short) var_4))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (short)-9470))));
                    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_11 [(unsigned char)4] [(unsigned char)4] [i_4 + 1] [(unsigned char)4])))))));
                    arr_16 [i_0] [i_1 - 1] [i_1 + 3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-16541)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_6))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned long long int) arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))));
                }
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((unsigned int) ((((/* implicit */_Bool) 2556951145U)) ? (1472957243U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15)))))) : (((/* implicit */unsigned int) min((((/* implicit */int) min((var_4), (((/* implicit */short) var_9))))), (((int) 478766715)))))));
}
