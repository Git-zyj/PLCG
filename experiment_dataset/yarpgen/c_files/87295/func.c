/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87295
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) var_8);
                        arr_12 [i_0 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1])));
                        var_18 = ((/* implicit */long long int) 1438081760);
                        arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (signed char)27);
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (+(10353861451056258854ULL)));
                        var_20 = ((/* implicit */long long int) arr_15 [i_1] [i_1]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_1] [(signed char)13] = ((/* implicit */unsigned short) ((9223372036854775807LL) > (((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_1])) / (var_14)))));
                        var_21 &= ((((/* implicit */_Bool) -1301229715)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                        var_22 = ((/* implicit */long long int) (-(4294967295U)));
                        var_23 = ((/* implicit */short) arr_5 [i_1] [i_0 - 1]);
                    }
                    arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
                    var_24 = arr_9 [i_0 + 1] [i_0 + 1] [(signed char)6] [i_0 + 1] [(unsigned short)16] [i_0 - 1];
                }
                for (unsigned short i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    arr_24 [4LL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_5);
                    var_25 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)23129)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1]))))));
                    arr_25 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_6 + 1]))));
                }
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)125)) : ((+(((/* implicit */int) (unsigned short)22682))))));
                var_27 = ((/* implicit */unsigned long long int) arr_8 [(signed char)8] [i_0] [(signed char)8] [i_0] [i_1]);
                arr_26 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53592)) ? (min((arr_19 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))))))));
                var_28 = ((/* implicit */unsigned int) 8092882622653292762ULL);
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)22942)))))));
}
