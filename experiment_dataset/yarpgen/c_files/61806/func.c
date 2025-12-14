/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61806
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)219))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 ^= ((/* implicit */_Bool) 1485431256);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_7))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((arr_6 [i_1] [i_1] [i_2]) == (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
            var_22 *= ((/* implicit */signed char) ((unsigned int) (unsigned char)71));
            var_23 = ((/* implicit */signed char) (unsigned char)11);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) arr_4 [i_2]))) / (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_7 [i_1] [i_2]))))) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_3)))))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_25 ^= ((/* implicit */long long int) ((((long long int) (unsigned char)255)) > (((/* implicit */long long int) (+(((/* implicit */int) (short)12844)))))));
                arr_11 [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_1] [i_2])), (arr_4 [i_1])))) ? (((((/* implicit */_Bool) var_9)) ? (1240339825U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_1]))))));
            }
        }
    }
    var_26 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_3)))) | (((/* implicit */int) (short)2559)))) <= (((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)32600))))))));
    var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) (_Bool)1))));
}
