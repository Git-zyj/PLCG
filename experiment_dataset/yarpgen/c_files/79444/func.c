/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79444
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
    var_11 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])), (((unsigned long long int) arr_6 [i_1 + 1]))));
                            arr_9 [i_2] [i_2] [(short)15] [i_2] [i_2] [15U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */long long int) arr_4 [i_1] [i_1 - 1] [i_1 - 1])) : (2047LL)));
                            var_13 = arr_0 [(signed char)0] [(unsigned char)0];
                            var_14 = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) 4920216048934438896LL)) ? (-1523085070) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [(unsigned short)2])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1])))), ((-(min((((/* implicit */int) (unsigned char)199)), (arr_4 [i_0] [(unsigned short)1] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((7784584747994448020ULL), (((/* implicit */unsigned long long int) var_6)))) : (var_4))))))));
    var_17 = ((/* implicit */signed char) var_2);
}
