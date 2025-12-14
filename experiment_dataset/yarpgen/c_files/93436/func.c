/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93436
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
    var_18 = min((var_17), (((/* implicit */long long int) var_5)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [(unsigned short)2])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17223)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) max(((short)1991), (((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_3]))))))))));
                                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(137438920704LL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */long long int) 1432761029U)) > (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ^ (var_17))))))));
                    var_21 = ((/* implicit */short) min(((-(((((((/* implicit */int) arr_0 [i_0] [i_1])) + (2147483647))) << (((var_13) - (4451491324893444361LL))))))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2 + 1])) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
        arr_12 [6LL] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_7)))) ? (((((/* implicit */_Bool) arr_10 [3ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])));
    }
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) ((var_17) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (var_7)));
}
