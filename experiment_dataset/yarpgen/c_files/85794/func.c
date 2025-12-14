/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85794
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_4 [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0] [i_1]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2269606982U))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_1])), (arr_5 [i_2 + 3] [i_2 + 3]))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0]))) ? ((+(2269606978U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) ^ (arr_5 [i_0] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_1]))))))))));
                    var_21 = ((/* implicit */int) (((~(0ULL))) ^ (((/* implicit */unsigned long long int) (~(min((arr_5 [i_2] [i_1]), (arr_5 [(_Bool)1] [i_2 + 3]))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_3 + 1] [i_0 + 1]) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))));
                    arr_11 [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
                    var_23 += ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [2ULL] [i_3 - 1] [i_3])) == (((arr_8 [(_Bool)1] [i_1] [i_3 + 2] [i_3]) ? (arr_6 [(unsigned short)4] [(unsigned short)4] [6U] [i_3 + 1]) : (((/* implicit */unsigned long long int) arr_9 [i_0] [(_Bool)1] [i_0] [2]))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_24 = arr_10 [i_0] [i_1] [i_4];
                    var_25 -= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) min((arr_7 [i_0] [i_1] [i_1] [i_4]), (arr_1 [i_0] [i_0 - 1])))), (min((2025360313U), (((/* implicit */unsigned int) -264788087)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])) && (arr_7 [i_0] [i_0] [i_4] [i_0])))))))));
                }
            }
        } 
    } 
    var_26 &= ((/* implicit */int) ((unsigned short) max((2025360298U), (2025360313U))));
    var_27 = ((/* implicit */short) max(((~(((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_1))))), ((~(min((2269607005U), (((/* implicit */unsigned int) (unsigned short)49560))))))));
}
