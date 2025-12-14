/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99107
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
    var_18 |= (~(((/* implicit */int) var_10)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned int) 3840))))) : (max((3835), (((/* implicit */int) (_Bool)0))))))) ? (5U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)32266)) : (-1019789984))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_1] [(unsigned short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)496))) : (var_4)))) ? (((/* implicit */int) arr_2 [i_1 + 1] [(unsigned short)10] [i_0])) : (min((((/* implicit */int) max(((unsigned short)482), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (arr_9 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))));
                                arr_14 [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-29))));
                                arr_15 [i_0] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_3]);
                                var_19 = (!(((/* implicit */_Bool) max((max((-1019789984), (-1019789984))), (((/* implicit */int) (signed char)28))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [(signed char)2] |= ((/* implicit */long long int) ((unsigned short) var_15));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1 - 1] [i_0] [i_5] [(unsigned short)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 27U))));
                            arr_22 [i_5] [i_0] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) var_17)) / (((/* implicit */int) (unsigned short)33277)))), (((/* implicit */int) (!((_Bool)1))))))));
                            arr_23 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) max((min((var_16), (var_16))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_0 [i_0])), (var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
