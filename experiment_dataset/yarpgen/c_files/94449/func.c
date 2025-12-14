/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94449
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
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 -= ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((signed char) arr_1 [i_1])))));
            }
        } 
    } 
    var_13 = var_0;
    var_14 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) min((-514838680), (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [i_2] [(short)0]))) | (min((arr_6 [(_Bool)1]), (((/* implicit */unsigned int) arr_4 [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19705))) : (((long long int) arr_14 [i_4 + 2]))));
                                var_16 = (i_4 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((max((arr_13 [i_2] [i_3] [i_4] [i_4]), (((/* implicit */int) (unsigned short)19705)))), (((/* implicit */int) (unsigned short)45830))))) % (((((arr_6 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_4] [i_4] [i_4] [i_2]))))) >> (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_4])))) - (14840)))))))) : (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((max((arr_13 [i_2] [i_3] [i_4] [i_4]), (((/* implicit */int) (unsigned short)19705)))), (((/* implicit */int) (unsigned short)45830))))) % (((((arr_6 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_4] [i_4] [i_4] [i_2]))))) >> (((((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_4])))) - (14840))) + (11861))))))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((arr_5 [i_4 - 4]) ? ((+(((/* implicit */int) arr_5 [i_4 - 1])))) : (((/* implicit */int) max((arr_5 [i_4 + 3]), (arr_5 [i_4 - 4])))))))));
                            }
                        } 
                    } 
                } 
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_2] [i_3] [i_2]))))) % (((/* implicit */int) arr_7 [i_2] [i_3]))));
                arr_20 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_6 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_3])))))) % (((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_18 [i_2] [i_2] [i_2] [(signed char)20] [(short)10]))) % (((((/* implicit */int) arr_12 [i_2])) % (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
            }
        } 
    } 
}
