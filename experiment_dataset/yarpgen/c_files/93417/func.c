/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93417
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
    var_18 = var_1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 + 1])))))));
        var_20 = (unsigned short)65529;
        var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) (~(67108864)))) || (((/* implicit */_Bool) var_0)))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41371)) ^ (((/* implicit */int) (unsigned short)1))))) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
            arr_11 [i_2] = ((/* implicit */unsigned char) arr_0 [i_1]);
        }
        arr_12 [i_1] [i_1 + 1] = ((/* implicit */signed char) (unsigned short)1);
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)42)), (arr_0 [i_1 + 1])))) == ((-(((/* implicit */int) var_13)))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_23 [i_1] [i_4] [i_4] [i_1] [i_3] = ((/* implicit */int) ((arr_21 [i_4] [i_4] [i_4] [i_4]) == ((-(arr_21 [i_5 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                        var_25 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -1LL))))))), (min((arr_2 [i_3]), (((/* implicit */unsigned long long int) arr_4 [i_5 + 1] [i_5 + 1]))))));
                        arr_24 [i_1] [i_1] [i_3] [i_4] [i_4] [i_5 + 1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_5 + 1]))))));
                        arr_25 [i_1] [i_3] [i_4] [i_5] [i_4] [i_1] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
    }
}
