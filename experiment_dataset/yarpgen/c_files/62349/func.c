/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62349
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), (max(((-((-(-5))))), (((/* implicit */int) arr_2 [(signed char)4]))))));
        arr_3 [i_0] = (+(((/* implicit */int) ((short) ((unsigned int) 4)))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_1])), ((~(((/* implicit */int) (unsigned char)130))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) : (((((/* implicit */_Bool) var_1)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28017)))))))));
        var_18 = ((/* implicit */unsigned char) max(((-(arr_1 [i_1]))), (((/* implicit */long long int) (~(((int) (signed char)44)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))) : (arr_8 [i_2] [i_2])));
        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-1)) ? (5) : (1837060701)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (short)-25387)), (-5))))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))));
        var_22 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))));
    }
    for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        arr_12 [i_3 + 1] [i_3] = (+(((/* implicit */int) (unsigned char)178)));
        var_23 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_10 [i_3 + 1])))));
        var_24 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_11 [i_3])))))), (((((((/* implicit */int) arr_10 [i_3 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_3])) + (15463))) - (24)))))));
        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)178)), (-5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3252329264U))))) : (((/* implicit */int) ((unsigned short) (-(25ULL)))))));
    }
    var_26 -= ((/* implicit */signed char) (-((+(var_3)))));
    var_27 = ((/* implicit */signed char) var_15);
}
