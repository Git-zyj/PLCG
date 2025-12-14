/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67294
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
    var_20 *= ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_1 - 1] [i_0 - 1] [i_0])))) : (var_18)));
                var_22 = ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_2 + 1])))), (((/* implicit */int) min((var_0), (var_15))))))) ? ((+((+(arr_6 [i_0] [i_2] [i_0]))))) : (((((/* implicit */_Bool) max((arr_5 [1LL] [1LL] [i_3]), (arr_5 [i_1 + 1] [i_1 + 1] [i_2 + 1])))) ? (min((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1] [(unsigned char)9])), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-79))))))));
                            var_24 |= ((/* implicit */signed char) (+(((((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))) / ((-(((/* implicit */int) arr_4 [4]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_4 = 4; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_11)))) >= (var_10))) ? ((-(max((var_7), (((/* implicit */int) arr_13 [i_4 - 4])))))) : (((/* implicit */int) ((short) max((((/* implicit */int) arr_13 [i_4 - 1])), (var_8)))))));
        var_26 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_14)))), ((((!(((/* implicit */_Bool) arr_12 [8])))) || (((/* implicit */_Bool) ((unsigned int) arr_14 [i_4 - 2])))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 4; i_5 < 18; i_5 += 1) 
        {
            for (int i_6 = 4; i_6 < 17; i_6 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((arr_19 [(unsigned char)4] [(unsigned char)4]) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_20 [i_5])))))))));
                    var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (arr_12 [i_4 - 2])))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_15))))))), (((/* implicit */int) ((((/* implicit */int) ((var_15) && (((/* implicit */_Bool) var_3))))) == (((/* implicit */int) min((arr_18 [i_4] [i_5 - 3] [(unsigned short)4]), (((/* implicit */unsigned short) arr_11 [(_Bool)0] [(unsigned char)10]))))))))));
                }
            } 
        } 
        var_29 |= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_16 [i_4 - 2] [i_4 - 3])))) : (((((_Bool) arr_20 [i_4])) ? (((unsigned int) arr_20 [5LL])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))))));
        var_30 = ((/* implicit */unsigned int) ((int) ((unsigned char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) && (((/* implicit */_Bool) arr_19 [i_4 - 3] [(unsigned char)13]))))));
    }
    /* vectorizable */
    for (signed char i_7 = 4; i_7 < 18; i_7 += 3) /* same iter space */
    {
        var_31 ^= ((/* implicit */_Bool) ((int) arr_16 [18] [i_7 - 1]));
        var_32 = ((/* implicit */unsigned char) arr_22 [i_7 - 1] [i_7 - 1]);
        var_33 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_21 [i_7])))));
        var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_25 [(unsigned char)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7]))) : (arr_15 [i_7 + 1] [(unsigned short)9])))));
    }
    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
    {
        var_35 = max((((/* implicit */long long int) ((unsigned char) var_7))), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (arr_27 [(unsigned short)10])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (504U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) arr_27 [(short)10])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_26 [i_8]))))));
        var_36 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_26 [i_8 + 1])))));
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) arr_27 [0U])) ^ (((((var_16) + (9223372036854775807LL))) >> (((var_18) - (4202884303U)))))))))));
        var_38 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5611785181991100275ULL)) ? (arr_27 [i_8]) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : (arr_27 [i_8])))));
        var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_17)) >= (var_12)))), (((((/* implicit */int) var_13)) / (arr_27 [10ULL])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_15))))) : (max((((/* implicit */long long int) var_12)), (arr_26 [i_8])))));
    }
    var_40 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((unsigned int) var_12))))));
}
