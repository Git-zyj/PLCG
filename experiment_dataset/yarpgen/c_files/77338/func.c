/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77338
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_3);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((signed char) (unsigned short)16461))), (((((/* implicit */_Bool) var_4)) ? (1250616272565406757ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))))))) ^ (((((/* implicit */_Bool) -4012123067574307472LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11191308602300586476ULL)))));
                        var_12 ^= ((/* implicit */long long int) arr_9 [i_0] [(signed char)9]);
                        var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (signed char)102)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) 2147483647)) ? (min((arr_4 [i_0]), (-3099814121132257014LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 850731270))))))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (unsigned char)187);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 1) 
        {
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_16 [i_4] [i_0] [i_0]))));
            var_15 = ((/* implicit */unsigned short) ((long long int) (_Bool)0));
            var_16 ^= ((/* implicit */long long int) var_2);
            arr_18 [(short)12] = ((/* implicit */long long int) arr_9 [i_0] [i_4 - 4]);
        }
    }
    var_17 = ((/* implicit */_Bool) var_10);
    var_18 ^= ((/* implicit */short) var_3);
}
