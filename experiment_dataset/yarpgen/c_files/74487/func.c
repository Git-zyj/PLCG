/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74487
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
    var_17 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((532676608LL) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0])))) & (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3])) : (17114772264847134931ULL)))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -532676612LL)) ? (((/* implicit */int) arr_13 [i_3 + 3] [i_3 + 3] [i_1] [i_4 - 2])) : (((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 3] [i_4 + 1] [i_4 - 2] [i_1] [i_4 - 3])))) & (((int) arr_9 [i_3 - 3] [i_3 - 1] [i_4 - 2] [i_4 - 3]))));
                                var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((unsigned long long int) (_Bool)0)) < (((/* implicit */unsigned long long int) ((var_10) ? (879908746) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0]))))))))));
                                var_21 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) ((_Bool) 557426713U))));
                                arr_15 [i_2] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((arr_10 [i_0] [i_2] [i_3] [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_4 - 3] = ((/* implicit */short) (+(arr_12 [i_0] [i_2] [i_1] [i_0])));
                            }
                            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)127))))) ^ ((~(2515610659U)))))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_0))))));
                                arr_19 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                            }
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3]))))), (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((0ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_10))))))))));
}
