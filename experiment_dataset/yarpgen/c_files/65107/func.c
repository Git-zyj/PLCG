/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65107
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
    var_13 = ((/* implicit */signed char) min((((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8)))), ((!(var_0)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : ((~(var_7)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((short) (+(arr_0 [i_0 - 1] [i_0 - 2]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (~(arr_4 [i_0 - 3])));
            var_17 = ((/* implicit */short) ((var_6) << (((/* implicit */int) var_4))));
            arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 3])) / (((/* implicit */int) var_4))));
        }
        for (short i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_7 [i_2] [i_0 + 1] [i_2 + 1]))));
            var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */long long int) var_3))))), (arr_4 [i_0 + 1])))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (min((min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)14] [i_2 + 2])), (var_7))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_2 + 1])))))))));
        }
        for (short i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))), (arr_1 [(unsigned short)0] [i_3])))))))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_16 [14ULL] [i_3 - 1] [i_0 - 3] [i_5] [i_0 - 3])))));
                            var_23 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_10)))));
                        }
                    } 
                } 
            } 
        }
    }
    var_24 = ((/* implicit */signed char) ((var_5) ^ ((+(min((var_9), (var_8)))))));
}
