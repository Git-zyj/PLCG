/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82824
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_0] [i_2] [i_2])))) ? (arr_1 [14ULL]) : (((/* implicit */int) (unsigned char)147))))) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)15), (((/* implicit */unsigned short) var_2)))))) >= (((var_1) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_3] = (short)16313;
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 1]))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 2])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */short) (~(0LL)));
                        var_14 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [(unsigned char)4] [i_0] [i_0 + 1] [i_1 + 2] [i_2 - 2] [i_2 - 2]))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_1 [i_0]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
            var_17 = ((/* implicit */short) var_5);
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_6]))));
        }
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (unsigned short)65521)) | (((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))))));
        var_20 = ((/* implicit */unsigned char) arr_1 [i_5]);
    }
}
