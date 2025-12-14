/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77658
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26171)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [i_0] [i_0])))) / (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) arr_1 [i_0])))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_1 [i_0]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (4194303LL)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_14 ^= ((/* implicit */short) var_12);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -4194304LL)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) (~(var_9)))) : (var_0)));
        var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) var_10))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_6)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_2]) : (arr_1 [i_2])))))));
        var_19 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)52))));
        var_20 = var_5;
    }
    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (var_9)))), (((1419240888433231788LL) * (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)0))))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_1)) * (((/* implicit */int) var_12)))))))))));
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_23 = ((/* implicit */signed char) arr_4 [i_4] [i_4]);
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_1))) & (((/* implicit */int) (!(((/* implicit */_Bool) -1419240888433231789LL)))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_3 + 1])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) (signed char)-119))))) ? (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */long long int) arr_1 [i_3])) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))));
                    arr_16 [i_3 + 1] [i_4] [i_4] [i_5] = max((((4194284LL) * (4194284LL))), (-1419240888433231789LL));
                }
                var_26 *= min((((((/* implicit */_Bool) (signed char)90)) ? (0LL) : (((/* implicit */long long int) 3628435857U)))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)55)) - (((/* implicit */int) (short)-10574)))) << (((((/* implicit */int) var_1)) - (157)))))));
            }
        } 
    } 
}
