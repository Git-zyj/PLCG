/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83595
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_20 = (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned long long int) 7)) : (arr_0 [i_0] [i_0]))))))) : (((24) / (7))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (arr_1 [i_0]))))));
            var_22 = ((/* implicit */_Bool) (+((-(2)))));
            arr_6 [i_1] = ((/* implicit */unsigned short) ((int) (+(arr_0 [(signed char)5] [i_0 + 1]))));
        }
    }
    var_23 = ((/* implicit */long long int) var_15);
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (+(min((var_4), (((/* implicit */unsigned long long int) 25))))));
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16322519126198369687ULL)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) -3)) ? (-8) : (161746070))), (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        arr_19 [i_4] [5] [i_3] [i_4 - 3] [5] [i_4] = ((/* implicit */signed char) (unsigned char)250);
                        var_25 -= (~(((((4329323216686978899ULL) * (((/* implicit */unsigned long long int) arr_5 [i_3 + 1])))) * (var_15))));
                        arr_20 [i_4] [i_4 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 3] [i_4])) ? (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 3] [i_4])) : (((/* implicit */int) var_1)))))));
                    }
                } 
            } 
            arr_21 [i_3] [8] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1262282204)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))), (4201127984U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_16)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))))) : (var_2)));
        }
    }
    for (unsigned char i_6 = 3; i_6 < 9; i_6 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6 + 1])) ? (arr_0 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_6])) ? (var_5) : (((/* implicit */unsigned int) arr_7 [(_Bool)1] [(_Bool)1])))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_15 [i_6] [i_6]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned short i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                {
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_17)))) ? (((((/* implicit */_Bool) arr_12 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)62766)), (var_5)))) : (((((/* implicit */_Bool) arr_0 [i_6] [i_6 - 3])) ? (var_4) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_17 [i_6 - 3] [2ULL] [(_Bool)1] [i_7] [i_7] [2U])) : (0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6 - 3] [i_6] [i_6 - 3]))) : (arr_18 [8U] [(unsigned short)2] [i_8 + 1] [i_7]))))));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_8 - 1] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_14))))) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_15))))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) var_19);
}
