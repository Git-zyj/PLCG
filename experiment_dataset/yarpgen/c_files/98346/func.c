/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98346
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_0] [i_1 + 1])), (0)));
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (!(((/* implicit */_Bool) 22)))))))) >= (((((/* implicit */_Bool) 2084080501)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))))));
                                var_21 = ((/* implicit */unsigned long long int) (short)32762);
                            }
                            var_22 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_3] [i_1 - 4] [i_0] [i_3]);
                            arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3385221019720421799LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 0))))) >= ((+(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_2] [i_2] [i_1 - 1] [i_1] [i_0])) : (arr_12 [i_2] [i_1] [i_2] [i_3] [i_1])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_1] [i_1 - 3] [i_1]) >> (((arr_12 [i_0] [i_1 - 1] [i_0] [i_1 + 1] [i_0]) - (13761504600536868942ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)32)) >= (1235274402)))) / (((/* implicit */int) min(((short)32762), (((/* implicit */short) (signed char)32)))))))) : (max((((577086336054498738ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65474))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) : (arr_7 [i_1] [i_1 - 4] [i_1])))))));
                var_24 = ((/* implicit */int) ((min((((((/* implicit */_Bool) -8137565699662283831LL)) ? (17869657737655052877ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2]))))), (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_7 [i_1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15937))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 0)) / ((-(2405855742U))))))));
                var_25 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_1 + 1])), (arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])))) ? (min((arr_12 [i_1 + 1] [i_1] [i_0] [i_0] [i_0]), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-9223372036854775803LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1]))))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (14373318279149569227ULL) : (4272490116938065415ULL))))))))));
            }
        } 
    } 
    var_26 = ((unsigned long long int) var_6);
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_0), ((unsigned short)50073)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)15439)) : (((/* implicit */int) (short)4088))))))) ? (((/* implicit */int) (unsigned short)32726)) : (var_18)));
}
