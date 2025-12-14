/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97820
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
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_1)))))))) - (var_10)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)102)), ((-(((/* implicit */int) (short)-8163))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) min((var_2), (((/* implicit */short) ((signed char) (signed char)-62)))));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_15 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_3] [i_2]))))) ? (((min((((/* implicit */long long int) var_9)), (var_7))) / (arr_9 [i_1] [i_1 - 2] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2]))))));
                    arr_12 [i_3] [i_3] [i_3] [(signed char)4] |= ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */short) var_5)), (((short) arr_4 [i_3])))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */signed char) var_4);
    }
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) min(((signed char)-30), ((signed char)102)))), ((~(((((/* implicit */_Bool) -4849829827893362158LL)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (signed char)124))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10)));
}
