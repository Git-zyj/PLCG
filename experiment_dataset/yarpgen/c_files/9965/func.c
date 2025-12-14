/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9965
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
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0 - 2]), ((signed char)-106))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [(signed char)1])) ? ((~(((/* implicit */int) (unsigned char)193)))) : ((-(((/* implicit */int) (unsigned char)193))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 17587891077120LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0 + 1])), ((unsigned char)63))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551603ULL))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [(short)5] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0 + 1])) - (var_6)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -17587891077120LL)) ? (((/* implicit */int) arr_2 [i_0] [(short)17] [i_0])) : (((/* implicit */int) (unsigned char)193)))))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            var_21 = ((/* implicit */long long int) var_18);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((int) var_15));
    var_23 = ((/* implicit */short) var_18);
}
