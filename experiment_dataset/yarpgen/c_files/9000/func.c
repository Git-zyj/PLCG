/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9000
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) <= ((~(((/* implicit */int) (signed char)30)))))) ? ((-(min((((/* implicit */int) var_10)), (var_3))))) : (min((((/* implicit */int) var_12)), ((-(((/* implicit */int) (signed char)-70))))))));
    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)16)))), (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), ((signed char)95)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-1)), (524287U)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (signed char)-29);
        arr_2 [i_0] [i_0] = (+(524284U));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967294U)) ? (max((((/* implicit */unsigned int) var_2)), (arr_6 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)-90))) - (((/* implicit */int) var_8)))))));
        var_19 = ((/* implicit */_Bool) (~(min((max((((/* implicit */unsigned int) (signed char)-118)), (4294967295U))), ((-(614168673U)))))));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_20 = ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8289))) <= (var_11)))), (((short) var_4))))) ? ((+(15U))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)23)) >> (((549487378432ULL) - (549487378418ULL)))))) ^ (min((arr_21 [(_Bool)1] [(signed char)1] [i_4 + 1] [i_3] [i_6]), (((/* implicit */unsigned int) (short)-3733))))))));
                                arr_22 [(short)0] [i_3] [i_3] [i_4] [0ULL] [i_3] = ((524287U) <= (((/* implicit */unsigned int) (+(2113424765)))));
                                var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1385393844) : (((/* implicit */int) (signed char)95)))))));
                                var_23 *= ((((/* implicit */_Bool) 24576U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_28 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4611686018427386880ULL), (((/* implicit */unsigned long long int) (signed char)-96))))) ? (min((16515072U), (((/* implicit */unsigned int) (signed char)32)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192)))))) : ((-(max((0ULL), (((/* implicit */unsigned long long int) var_10))))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_2))));
                                arr_29 [i_4 + 2] [i_3] [1ULL] [i_7] = ((((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_4] [i_7 + 2] [i_2] [i_7 + 2] [(signed char)10])) ? (((12178605278062007802ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-1024)))))) >> (0U));
                                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) ^ (((((/* implicit */_Bool) 12178605278062007802ULL)) ? (12178605278062007802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15892449089936105311ULL)) ? (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) : (4294942695U)))) ? (max((arr_9 [i_2]), (((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1117342873U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) : (arr_17 [0] [i_2] [i_2] [(unsigned short)2])))))))));
    }
}
