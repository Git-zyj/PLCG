/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61440
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((max((var_2), (var_6))), (((long long int) arr_5 [i_0] [i_0] [i_1]))));
                var_13 = ((/* implicit */signed char) ((_Bool) max((max((((/* implicit */long long int) var_0)), (var_11))), (((/* implicit */long long int) ((signed char) var_4))))));
                var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (unsigned short)19605))))), (((((/* implicit */_Bool) (unsigned short)61755)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) var_5);
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_4] [i_5] [i_4] [i_3] [i_4] [(unsigned short)9] = ((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6]);
                                arr_22 [1ULL] [i_2 + 1] [i_2] [i_4] [i_4] = ((/* implicit */long long int) arr_2 [i_2]);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((-7449576033790948258LL), (((/* implicit */long long int) (unsigned short)54569))))), (458260573056484953ULL)))) ? (((/* implicit */unsigned long long int) ((arr_20 [i_3] [i_3 + 1] [i_2] [(unsigned short)0] [i_2]) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_11 [i_3])))) : ((+(((/* implicit */int) arr_16 [i_2] [i_2] [i_3] [(unsigned short)10] [(_Bool)1]))))))) : (((((/* implicit */_Bool) var_2)) ? ((-(458260573056484973ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
