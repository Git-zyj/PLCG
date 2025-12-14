/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81480
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
    var_11 = ((/* implicit */unsigned long long int) (-(var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_6))));
                    arr_8 [i_2] [i_2] [8ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)14]))))) : (-206637096)));
                    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((15404173132323862916ULL) >> (((-32890102) + (32890158))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) != (((/* implicit */long long int) var_6))))))))), ((+(4197718810U)))));
                    arr_9 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(-32890091)));
                    var_14 = ((/* implicit */signed char) var_2);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -32890098)) ? (-4243299388617116919LL) : (((/* implicit */long long int) -32890102))));
                                var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) arr_3 [i_5] [i_1 + 1])) + (((/* implicit */int) (unsigned char)112))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_9)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 23; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_23 [i_0] [i_6 - 1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((4805126027617501387ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
                            arr_24 [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 32890117))));
                            arr_25 [i_0] [i_0] [i_6] [i_7 - 1] [2ULL] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_6 + 1] [i_7 - 1])) / (((/* implicit */int) arr_7 [i_1 - 3] [i_6 - 1] [i_7 + 1])))));
                            arr_26 [i_1] [i_7] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 497212990U)) ? (32890117) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_4)) : (var_8))) >= ((-((~(var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (var_1)));
    var_18 = ((/* implicit */short) var_0);
    var_19 = ((/* implicit */unsigned int) -32890115);
}
