/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67945
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (short)-2536))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) min((var_1), (((/* implicit */short) (unsigned char)88)))))))) == (((/* implicit */int) ((short) var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [2U] &= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) (signed char)45)), ((unsigned short)32007))), (var_11)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (signed char)-26)), (((((/* implicit */_Bool) (unsigned char)174)) ? (arr_1 [i_3]) : (arr_1 [5ULL]))))) / (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32007)) & (((/* implicit */int) (unsigned char)101))))), (arr_7 [(short)7] [i_2 + 2] [i_0 - 1] [i_0])))));
                            arr_10 [i_0] [i_1] [i_0] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 + 1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)174)), (var_11))))))), ((-(arr_7 [i_1] [i_1] [i_1] [i_2 + 2]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) ((signed char) ((((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) ^ (((/* implicit */int) var_12)))) ^ (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
