/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60555
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
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)248))))) ? (max((arr_0 [i_0]), (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (_Bool)0)))))))) ? (((min((var_17), (((/* implicit */unsigned long long int) (short)-20667)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (1052115552) : (var_10)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-1)), (((((/* implicit */int) arr_2 [7])) * (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((14829697226080436406ULL) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [(short)12] [i_0])) - (37441)))));
                                arr_14 [i_4] [i_4] [i_2] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((78407067), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [3LL] [3LL] [i_2 - 4])))))))) ? (((((/* implicit */int) ((8944361162703723513ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))) & (((/* implicit */int) (unsigned char)227)))) : (((((/* implicit */_Bool) 8758635309211151997ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)40245))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
