/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70026
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
        var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32767))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_11 [(unsigned short)9] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -8759447851000759249LL)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */_Bool) max((var_11), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_12 = (_Bool)0;
                            var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_3] [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)-1)))) : ((-(((/* implicit */int) (unsigned char)250))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */short) (_Bool)1);
                            var_15 ^= ((long long int) (unsigned char)98);
                            var_16 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [(short)19])))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_3] [i_2 + 1]))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (_Bool)0))));
                        }
                        var_18 = ((/* implicit */long long int) (((((_Bool)1) ? (arr_9 [6ULL] [i_1] [i_2 - 1]) : (arr_9 [i_0] [i_0] [i_3]))) != (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((short) arr_14 [i_0] [i_0] [i_0] [i_0]));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) + (((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
}
