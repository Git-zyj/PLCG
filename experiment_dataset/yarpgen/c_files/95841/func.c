/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95841
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(var_7))), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))), ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((_Bool) var_0)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (arr_0 [i_2] [i_4 - 2])));
                            var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)20084)) : (((/* implicit */int) arr_6 [i_0] [8ULL] [8ULL])))) + (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_4 + 3]))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) var_10)))))));
                            var_19 = ((/* implicit */int) (short)-25);
                            arr_16 [8U] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [i_1] [i_1 + 3])) ? (arr_5 [i_3] [i_1 + 2] [i_1 - 2]) : (arr_5 [i_1] [i_1] [i_1 + 2])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [2] [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 1]))) <= (arr_0 [i_1 - 1] [i_1 - 1]))))));
                            var_21 = ((/* implicit */unsigned char) ((arr_1 [i_1 - 3]) ^ (arr_0 [i_1 + 1] [i_1])));
                        }
                        arr_20 [i_1] [i_0] [i_1] [i_2] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((((/* implicit */int) arr_12 [i_0] [i_1] [12LL] [i_0] [i_3] [i_0])) + (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_3] [i_3]))))));
                    }
                    var_22 = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)222)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((394263667U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
