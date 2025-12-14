/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98024
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 = (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((var_3) <= (((/* implicit */long long int) arr_0 [i_0] [i_0])))) ? (min((2025873880U), (2269093416U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(2025873880U)))) ? (((((/* implicit */_Bool) 2269093416U)) ? (((/* implicit */long long int) var_10)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (min((2025873880U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : ((-(2025873880U)))));
        var_13 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)7));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            var_14 = ((/* implicit */int) (~(var_4)));
            var_15 = ((/* implicit */unsigned char) ((var_8) >> (((((/* implicit */int) var_1)) + (19077)))));
            var_16 = ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (var_10)))), ((-(var_0))))) + (((/* implicit */long long int) (-(var_4))))));
        }
        for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
        {
            arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))) : (var_3))), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
            var_17 = ((/* implicit */unsigned char) var_6);
            var_18 = ((/* implicit */unsigned short) var_10);
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)7))))), (2269093415U))) <= (((((/* implicit */_Bool) max((var_10), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_9)))))) : (((2025873880U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            var_21 = ((/* implicit */_Bool) arr_13 [i_4 - 3]);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((arr_7 [8] [i_4 - 2] [i_4 - 2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [16U] [i_4 + 2] [i_1])))))));
        }
        arr_15 [i_1] = ((/* implicit */short) var_3);
        arr_16 [i_1] |= arr_13 [i_1];
    }
    var_23 *= ((/* implicit */unsigned short) (unsigned char)7);
}
