/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78725
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_17))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_12))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) 3684182567U)) ? (((/* implicit */unsigned int) -193353467)) : (3684182571U))), (min((((/* implicit */unsigned int) (unsigned char)125)), (3919088845U)))));
                                var_22 = ((/* implicit */unsigned char) min((min(((unsigned short)24048), ((unsigned short)4024))), (((/* implicit */unsigned short) ((_Bool) ((int) (signed char)8))))));
                                var_23 *= ((/* implicit */unsigned short) arr_4 [i_0] [(short)8] [(unsigned char)6]);
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (signed char)16))));
                                arr_13 [i_4] [i_3] [i_2] [(signed char)5] [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((10715263817121793655ULL) >> (((3684182582U) - (3684182555U)))))) ? ((+(33550336U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5908838549642255111ULL)) ? (((((/* implicit */_Bool) arr_11 [2ULL] [(short)4] [(_Bool)1] [i_3] [i_3])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_4])))) : (((/* implicit */int) (unsigned short)58974)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
