/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81015
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
    var_16 = ((/* implicit */signed char) ((unsigned char) (~(3739125980518006975ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 7; i_2 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [(_Bool)1] [4ULL] [4ULL] [i_0 + 2])), (var_6)))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (4LL)))), (((((/* implicit */_Bool) arr_6 [6] [6])) ? (var_4) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [4])))));
                    arr_9 [5ULL] [(_Bool)1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) : (max((var_2), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_18 = ((arr_10 [i_3] [1ULL] [i_0] [i_1 - 1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))) : (4LL))));
                        var_19 = ((/* implicit */short) -22LL);
                    }
                }
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    arr_15 [i_1 + 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (min((((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4 - 3] [i_1 - 1] [i_0 - 1])), (arr_12 [i_0] [i_0] [i_1 - 1] [i_4])))))), (arr_0 [i_1 + 1])));
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_0 + 1])) && (((_Bool) arr_11 [i_0] [i_0] [i_4] [i_4])))), (((arr_3 [i_0]) || (((/* implicit */_Bool) var_9))))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_1 - 1]));
            }
        } 
    } 
}
