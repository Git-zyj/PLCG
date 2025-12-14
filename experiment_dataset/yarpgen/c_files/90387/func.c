/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90387
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
    var_18 = var_2;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (arr_5 [i_0 - 3] [i_0 - 3] [(short)18])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                arr_6 [i_0] [2ULL] &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_17))));
                arr_13 [i_2 - 2] [(signed char)7] = ((/* implicit */unsigned short) var_3);
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2 - 2]))) ? (((arr_7 [i_2 - 2]) ? (((/* implicit */int) arr_7 [i_2 - 2])) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned short)11401)) - (((/* implicit */int) (short)8192))))));
                                arr_21 [11] [(unsigned char)17] [2U] [i_6] = (!(((/* implicit */_Bool) var_13)));
                                arr_22 [i_2] [i_2] [(unsigned short)1] [i_2] [(_Bool)1] [(unsigned short)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))));
                                arr_23 [i_2] [(unsigned short)2] [i_4] [i_6] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967295U)), (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) - (4294967285U)))) ? (((/* implicit */int) arr_16 [i_2] [5ULL])) : (((/* implicit */int) (signed char)123))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((signed char) ((int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_0)))))))));
                                arr_31 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_19 [i_2] [i_3] [i_7] [(unsigned short)4] [i_8] [(unsigned short)4]);
                                arr_32 [i_9] [i_8] [i_7] [3ULL] [i_2] &= ((/* implicit */signed char) max(((+(4294967295U))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned int) (unsigned short)496)), (var_7))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_2))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
