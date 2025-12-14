/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61270
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [4ULL] [4ULL] [4ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_5 [i_0] [15] [i_0]))))) : (max((((/* implicit */unsigned long long int) 590086134U)), (18410715276690587648ULL)))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) min((((832330000U) | (590086138U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2])))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 6351502314883811857ULL)) ? (552981889) : (((/* implicit */int) (short)-10688)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */long long int) arr_2 [i_0]);
                    arr_13 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_0] [i_0])), (max((min((((/* implicit */unsigned long long int) 590086133U)), (18410715276690587649ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)81)), (-8665631532771424121LL)))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */signed char) ((min((arr_4 [i_0] [i_1] [i_3]), (((/* implicit */unsigned int) var_14)))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))));
                    arr_15 [i_0] [i_0] |= ((/* implicit */unsigned char) max((12095241758825739784ULL), (((/* implicit */unsigned long long int) (unsigned char)106))));
                }
                arr_16 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)19266))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-51))))), ((~(max((((/* implicit */unsigned int) var_11)), (var_7)))))));
}
