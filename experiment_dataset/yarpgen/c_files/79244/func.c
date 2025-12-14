/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79244
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
    var_13 = var_8;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned short)5] [8] = ((/* implicit */signed char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) 10398676141993392471ULL)))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) 126976))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_1))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (max((((/* implicit */unsigned int) var_2)), ((-(var_5))))) : (((/* implicit */unsigned int) ((((var_5) >= (((/* implicit */unsigned int) var_10)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (1537233079) : (((/* implicit */int) var_12)))))))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            arr_15 [i_0] = ((unsigned short) var_2);
                            var_17 = ((/* implicit */int) 27U);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_5))));
                            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) var_1)) + (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (-1537233087) : (((/* implicit */int) var_12))))))))));
                            var_20 = ((/* implicit */unsigned int) (signed char)-66);
                        }
                        var_21 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16560083977310661265ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))))))));
                    }
                    var_22 = ((/* implicit */unsigned short) -1537233073);
                    arr_16 [22ULL] [9ULL] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
}
