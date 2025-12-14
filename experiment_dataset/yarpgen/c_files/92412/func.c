/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92412
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
    var_11 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0))), (min((((/* implicit */unsigned int) var_8)), (var_0))))), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((arr_2 [(_Bool)1] [i_1] [14LL]), (((/* implicit */long long int) arr_0 [0LL])))), (arr_3 [(_Bool)1] [i_1 - 1] [i_1 - 1])))) ? (min((max((arr_2 [i_0] [i_1] [(signed char)12]), (arr_2 [i_0] [i_1 + 1] [6U]))), (min((arr_3 [(unsigned char)2] [i_1] [i_1 - 1]), (arr_3 [(unsigned char)10] [i_0] [16LL]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [(unsigned char)2]))))))))));
                var_13 = ((/* implicit */unsigned char) (-(max((arr_2 [i_0 + 1] [i_1] [i_0]), (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_2 [i_0 - 2] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) arr_12 [(unsigned short)7] [(unsigned short)7])), (arr_4 [i_2])))) & (min((arr_2 [i_2] [14] [i_4]), (arr_2 [i_2] [i_3] [i_4])))))))))));
                    arr_14 [i_4] [1LL] [i_2] = arr_3 [i_4] [i_3 + 1] [i_4];
                }
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (arr_8 [i_2] [i_2] [i_3 + 2])))) : (min((((/* implicit */unsigned int) arr_11 [(unsigned char)2] [(_Bool)1] [i_3] [i_3])), (arr_9 [i_2 + 1] [i_2 + 1]))))) - (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2]))))), (arr_9 [i_2] [i_3]))))))));
            }
        } 
    } 
}
