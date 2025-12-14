/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92130
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) | (var_3)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 *= ((((((/* implicit */int) (short)32767)) & (((/* implicit */int) (_Bool)0)))) ^ (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        var_21 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (_Bool)1)) * (max((-1475322616), (((/* implicit */int) (unsigned short)22220)))))));
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_18))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (short)32767);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (signed char)84))));
        var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((-(((unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_4))), (max(((signed char)-72), ((signed char)-98)))))))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_17))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            var_28 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_2])) >= (((/* implicit */int) arr_9 [i_2] [i_3]))))) : (((((/* implicit */int) var_13)) - (((/* implicit */int) (_Bool)1))))))));
            var_29 = ((/* implicit */_Bool) max((var_29), (((_Bool) (_Bool)1))));
            arr_11 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(13408172898838216735ULL)))) ? (min((((/* implicit */int) (unsigned char)250)), (166477574))) : (var_11))))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_18))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) (-(14828133582480342326ULL)));
            var_32 = ((/* implicit */unsigned char) ((14ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [5U] [i_2])))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
        {
            var_33 *= ((/* implicit */signed char) (+(((/* implicit */int) (short)19269))));
            arr_17 [19LL] [i_2] [19LL] = 16595344917021778909ULL;
        }
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_34 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_14 [12LL] [12LL]) ^ (arr_10 [i_2]))))));
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)-72)) ? (arr_13 [i_2]) : (arr_13 [i_6]))), (((/* implicit */unsigned int) arr_15 [i_2] [i_6] [18ULL])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [8ULL] [(_Bool)1]))))))));
        }
        arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))), ((~(var_12))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 430177022U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_2])))))) & (16595344917021778898ULL)))));
        var_36 = ((/* implicit */signed char) arr_21 [i_2] [i_2]);
    }
}
