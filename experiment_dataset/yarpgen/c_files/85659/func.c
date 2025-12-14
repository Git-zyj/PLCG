/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85659
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (arr_1 [i_0] [i_0])))))), (((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [13ULL] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), ((+(arr_1 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) var_1);
        var_20 = ((/* implicit */signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_7)))) ? (max((arr_4 [i_2]), (arr_4 [i_2]))) : (min((((/* implicit */long long int) arr_7 [i_2])), (arr_1 [i_2] [i_2])))));
        var_22 += (+(((((/* implicit */_Bool) ((long long int) (unsigned char)170))) ? (max((((/* implicit */long long int) var_13)), (var_0))) : (((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) : (((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))))));
        var_23 += ((((/* implicit */_Bool) ((max((var_1), (((/* implicit */long long int) var_8)))) >> (((var_9) - (4853128386052595892LL)))))) ? (arr_4 [17U]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_3] [i_3]))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (short i_5 = 4; i_5 < 23; i_5 += 1) 
        {
            for (short i_6 = 4; i_6 < 24; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_16))))))))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((int) max((arr_19 [22LL] [i_6]), (((/* implicit */int) var_15))))))))));
                    arr_23 [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [(short)16])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) var_4))))) || (((_Bool) var_7)))))) : ((~(arr_22 [i_6 - 3] [i_5 - 3] [i_6 + 1])))));
                    arr_24 [i_6] [i_5] [20LL] = ((/* implicit */short) var_13);
                    var_26 -= ((/* implicit */unsigned short) -1LL);
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) 536870784U)), (((var_2) << (((((((/* implicit */int) var_16)) + (2505))) - (20))))))) : (min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) var_5)), ((-9223372036854775807LL - 1LL))))))));
}
