/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71065
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */int) var_11)) + (((/* implicit */int) (signed char)-55)))) * (((/* implicit */int) arr_1 [i_0])))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (((unsigned int) arr_5 [i_1]))))) ? (2147483647) : (((/* implicit */int) arr_1 [i_2]))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned long long int) (signed char)-125);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_3])), (var_4)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_3])) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_10 [i_3] [3ULL]))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3935818416U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) var_7)) : (min((arr_12 [i_3]), (((/* implicit */unsigned int) arr_10 [i_3] [i_3]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_19 = ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)));
                    arr_16 [i_5] = ((/* implicit */_Bool) ((3935818402U) - (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))) : (3935818418U)))));
                }
                var_20 = ((/* implicit */unsigned int) ((arr_14 [i_4] [i_4] [(short)17] [i_4]) != (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_2))));
}
