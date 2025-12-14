/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96999
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
    var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) var_12)))) + (2147483647))) >> (((((var_6) ^ (((/* implicit */int) var_12)))) + (100277559))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned short)11] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_0] [(signed char)8])) : (((/* implicit */int) arr_1 [i_1]))))), (340167663U)))) ? (((/* implicit */int) (((+(340167663U))) < (max((1388027145U), (340167671U)))))) : (max((((/* implicit */int) (_Bool)0)), (0)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_0] [(unsigned char)16] [(unsigned char)16] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_5 [6LL]) : (((/* implicit */int) arr_6 [(_Bool)1] [(unsigned short)7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_13)));
                    var_16 |= ((_Bool) arr_5 [i_0 + 1]);
                }
                for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_0] [(signed char)4]))))) : (max((((/* implicit */unsigned long long int) var_1)), (var_5)))))) ? (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_0 + 2] [6] [i_3 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) % (((/* implicit */int) (signed char)-51))))))))));
                    arr_15 [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned short) (-(max(((-(1075025353))), (-984423504)))));
                }
                for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_6 [i_1] [i_0]);
                    arr_18 [(unsigned short)6] [i_1] = ((/* implicit */int) var_11);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)4777)))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_12);
}
