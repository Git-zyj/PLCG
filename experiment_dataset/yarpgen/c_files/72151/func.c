/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72151
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1 + 1] [i_1]);
                                arr_18 [i_1] [i_3] [i_2] [(signed char)5] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [(unsigned char)3]);
                                arr_19 [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned char)242))))) + (671207423U))), (((/* implicit */unsigned int) max(((unsigned short)27), (((/* implicit */unsigned short) var_4)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(short)16])) | (((/* implicit */int) var_18)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 4; i_5 < 22; i_5 += 3) 
                    {
                        arr_22 [12ULL] [i_1] [12ULL] [(signed char)16] = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) ((short) var_13))), (((((/* implicit */int) var_18)) + (((/* implicit */int) var_10))))))) / (max((max((((/* implicit */long long int) (_Bool)0)), (2593824938555892053LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (-2723961465804841220LL)))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_6))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_21 [i_1] [(short)13])))))));
                    }
                    var_22 = ((/* implicit */unsigned int) arr_10 [i_2] [22ULL] [i_2] [i_0]);
                    var_23 |= ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_21 [i_1 + 1] [i_1 - 1])))));
                }
            } 
        } 
        arr_23 [17ULL] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) * (max(((((-9223372036854775807LL - 1LL)) / (9196931203125035370LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0)))))))));
    }
    var_24 += ((/* implicit */signed char) var_10);
}
