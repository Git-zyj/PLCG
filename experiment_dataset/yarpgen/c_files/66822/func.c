/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66822
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
    var_18 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((var_4) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_4)))))))));
    var_19 = ((/* implicit */short) ((((_Bool) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_6))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) - (52)))))) : (min((((/* implicit */unsigned int) var_17)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_16)))))));
    var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (unsigned char)255))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [4LL] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_1] [i_1])), ((~(((/* implicit */int) arr_4 [i_1]))))));
        var_23 += ((/* implicit */short) ((unsigned int) (unsigned short)47570));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_1]) ? (((((/* implicit */int) arr_5 [i_1] [i_1])) ^ (max((1853343237), (((/* implicit */int) (unsigned short)30920)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10344)) ? (1174333330880720769LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_15), (((/* implicit */signed char) arr_4 [i_1])))))))));
        var_24 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) 1174333330880720741LL))), (2415905286840598952ULL)));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) -5108545350145972282LL))), (var_0)));
        var_26 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) : (max((arr_8 [2ULL]), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2]))))));
    }
    for (int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_27 ^= ((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)60067))))) >> (max(((~(((/* implicit */int) var_12)))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_15)))))));
        arr_12 [i_3 - 1] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_3 + 1] [i_3]))), (max((var_6), (((/* implicit */unsigned long long int) max((-1174333330880720769LL), (-2933679654319645527LL))))))));
    }
    var_28 = var_14;
}
