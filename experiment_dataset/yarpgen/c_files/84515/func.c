/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84515
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_10 += ((/* implicit */short) (~((+(3331863721385445672LL)))));
            var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693952ULL)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)4658)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64695)))))) : (((/* implicit */int) ((short) (signed char)31)))));
            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1 - 1]))) ? (((((/* implicit */_Bool) var_1)) ? (max((var_2), (((/* implicit */long long int) arr_2 [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))))) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)6737))))), (((((/* implicit */int) arr_2 [i_1] [i_1])) | (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0])))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_13 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)64670))));
            var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((short) (short)-4658))), (max((((/* implicit */unsigned int) arr_4 [i_2] [i_2] [i_0])), (var_0)))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_15 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)7071))));
                arr_16 [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (((/* implicit */int) arr_3 [i_3 - 1]))))) ? (max((max((((/* implicit */unsigned int) (_Bool)1)), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)183)) - (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [8ULL])) ? (((/* implicit */int) arr_10 [i_3 - 1])) : ((-(((/* implicit */int) (short)4650)))))))));
            }
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) min(((((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) >> (((((/* implicit */int) arr_6 [(_Bool)1] [i_0])) - (43))))), (((/* implicit */int) ((arr_0 [i_0] [i_3 - 1]) > (((/* implicit */int) arr_10 [9])))))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(1792U)))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (3441031035773155778ULL))))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_3 - 1] [i_3]))))))));
            var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_4 [i_0] [9ULL] [9ULL]))));
    }
    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (18158513697557839872ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))))));
}
