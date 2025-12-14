/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92682
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
    var_10 = ((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_7))), (var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */_Bool) ((unsigned char) var_7));
                                var_11 -= ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1]))) : (arr_7 [(_Bool)1] [i_1 + 1])));
                                arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_3] [i_0 - 1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_2 [i_0])))), (max((647378265), (((/* implicit */int) min((arr_11 [i_0] [i_1 + 1] [i_2] [8ULL] [i_4]), (((/* implicit */unsigned short) arr_1 [i_4])))))))));
                            }
                        } 
                    } 
                } 
                var_12 = max((((/* implicit */unsigned int) arr_5 [i_0 - 1])), ((~(var_2))));
            }
        } 
    } 
}
