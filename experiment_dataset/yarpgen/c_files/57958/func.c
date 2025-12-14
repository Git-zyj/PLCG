/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57958
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) (((+((~(arr_2 [i_0] [i_0]))))) | (arr_2 [i_0] [i_0 + 1])));
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0 + 1]) : (((/* implicit */int) var_13))))))) + ((~(((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
        arr_3 [i_0 - 2] [i_0 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42438)) ? (((/* implicit */int) (unsigned short)65535)) : (-1999473231))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 2]))) < (((/* implicit */int) ((arr_4 [i_1 - 1]) > (arr_4 [i_1 - 2]))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+((~(max((var_3), (arr_4 [i_1]))))))))));
    }
    for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        var_21 ^= (-(((/* implicit */int) (((+(arr_5 [i_2] [i_2]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_0 [(unsigned char)8]) : (arr_0 [i_2]))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) arr_9 [i_2]);
                    arr_15 [i_2] = (+((+(((/* implicit */int) arr_10 [i_2] [i_2])))));
                    var_23 = ((/* implicit */unsigned int) ((int) min(((unsigned short)23098), (((/* implicit */unsigned short) (short)6144)))));
                    arr_16 [i_2 + 1] [i_3] [i_2] = ((/* implicit */int) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_2 + 1] [1U]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-6145)))))))))));
                                var_25 = ((/* implicit */unsigned int) (+((~(2849973593934021143LL)))));
                                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) (+(((((/* implicit */long long int) arr_7 [i_5] [i_3])) - (var_5)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)57)), ((unsigned short)63145)))) : (((/* implicit */int) ((unsigned char) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_2] = ((((/* implicit */_Bool) -1524786083)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23074))) : ((-9223372036854775807LL - 1LL)));
    }
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) ? (var_4) : (((/* implicit */int) ((-2849973593934021143LL) == (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) - (var_5)));
    var_29 = ((/* implicit */unsigned long long int) var_2);
}
