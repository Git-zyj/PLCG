/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66970
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
    var_17 = var_16;
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-16))))) ? (max((((((/* implicit */_Bool) (unsigned char)255)) ? (var_7) : (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) ((long long int) 0LL))))) : (arr_5 [i_0] [i_2])));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((unsigned int) (unsigned short)63895)))))));
                }
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)0);
                    arr_13 [(unsigned short)12] [(unsigned short)12] [i_0] = ((/* implicit */unsigned int) var_9);
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))) <= (var_7)));
                    arr_16 [i_0] [i_1] [7ULL] [(signed char)0] = ((/* implicit */unsigned int) (signed char)0);
                    arr_17 [i_0] [(signed char)0] [i_4] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
                }
                arr_18 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_13)) ? (-1LL) : (-910585339213171683LL)))))));
                arr_19 [i_0] [(unsigned short)11] = ((/* implicit */signed char) var_9);
                arr_20 [(signed char)3] [i_1 + 1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_1]))) : (arr_9 [i_0] [1U] [i_0]))))))));
            }
        } 
    } 
    var_22 = var_6;
}
