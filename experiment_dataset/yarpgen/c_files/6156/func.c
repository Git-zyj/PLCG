/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6156
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((~(var_19))), (((var_3) ? (((/* implicit */long long int) var_8)) : (-2300986018393666467LL)))))) & (min(((+(5400553567661517345ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)43))) & (var_19))))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (signed char)-30)))), (((/* implicit */int) (signed char)-20)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [(signed char)9] [(signed char)9] [i_2 + 1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) (signed char)30)), ((short)2735))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [2U] [i_0] [i_1] [i_2 + 1] [i_3] [i_2 + 1] = ((((/* implicit */_Bool) (~(0LL)))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((arr_12 [i_2 + 1] [(unsigned short)9] [i_2 + 1] [i_2] [(short)1] [i_1 - 1] [i_1 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                                var_22 *= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)73))) ? ((~(var_9))) : (((/* implicit */long long int) -1253211251)))));
                                var_23 = ((/* implicit */unsigned int) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
