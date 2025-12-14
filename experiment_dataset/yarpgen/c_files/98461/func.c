/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98461
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
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((var_16), (((/* implicit */long long int) var_2)))))) >= (((long long int) (+(var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) arr_3 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_20 = (-(((/* implicit */int) ((unsigned short) max((var_16), (((/* implicit */long long int) var_14)))))));
                            var_21 = ((/* implicit */unsigned short) min(((~(var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2 + 3])))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                            {
                                var_22 = ((/* implicit */short) arr_9 [i_2 + 2] [i_2 + 2]);
                                var_23 = ((/* implicit */unsigned short) var_9);
                                var_24 = ((((/* implicit */_Bool) max((((signed char) (_Bool)1)), (((/* implicit */signed char) arr_9 [i_1] [i_1]))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (8990902157677355359LL) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_1] [i_2 + 1] [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_4]) == (8990902157677355353LL))))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [0] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((_Bool) arr_12 [i_4] [i_2 + 4] [i_2 - 1] [i_3] [i_3]))), (((short) arr_4 [i_0] [i_2 + 1] [i_0]))));
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((14583954957818357522ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ^ (max((((/* implicit */long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((arr_8 [i_1]) + (830985962)))))), (((((/* implicit */_Bool) var_13)) ? (var_8) : (arr_11 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))))))));
            }
        } 
    } 
}
