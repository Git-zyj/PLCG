/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84243
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
    var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_6))) + (((int) var_8))))) : (var_13));
    var_17 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((50338062287586919LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9)))))), ((+(((/* implicit */int) (unsigned short)65526)))))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (144))))))));
        var_19 ^= ((/* implicit */int) arr_0 [(signed char)5] [1ULL]);
        arr_2 [1LL] |= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_1 [1U] [(short)0])) ? (((/* implicit */int) arr_0 [(_Bool)1] [10LL])) : (((/* implicit */int) arr_0 [4ULL] [(unsigned short)9])))), (((/* implicit */int) arr_1 [i_0] [i_0])))) | (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)250))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [11U])) && (((/* implicit */_Bool) arr_6 [12U] [i_1])))));
                        arr_10 [(_Bool)1] [(unsigned char)11] [(signed char)1] [9U] = ((/* implicit */_Bool) (+(var_13)));
                        var_22 ^= ((/* implicit */unsigned short) arr_7 [i_3] [(unsigned char)6]);
                        arr_11 [6LL] [(signed char)9] [12ULL] [(signed char)6] [(short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)55))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_7 [1] [(unsigned short)0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) arr_4 [(_Bool)0]))))))) : (min(((-(18446744073709551612ULL))), (((((/* implicit */_Bool) var_8)) ? (arr_8 [9LL] [(_Bool)1] [(signed char)10] [(short)1] [9]) : (((/* implicit */unsigned long long int) arr_6 [(unsigned short)3] [(unsigned short)1]))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_14 [9LL] [(unsigned short)11] = ((/* implicit */short) arr_12 [(signed char)4]);
        var_23 = ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_5 [3LL] [(unsigned char)5])) : (((/* implicit */int) ((short) arr_9 [8ULL] [(short)10] [(unsigned short)9] [(short)4] [(short)11])))));
        var_24 *= ((/* implicit */_Bool) min((((/* implicit */short) ((18446744073709551612ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))))), ((short)-10528)));
    }
}
