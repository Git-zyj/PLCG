/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61056
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_16)), ((short)-1751))))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((var_0), (((/* implicit */unsigned int) var_6)))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (short)18571))))) ^ (((/* implicit */int) arr_1 [i_0 + 1]))))) ^ (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1])), (var_5)))));
        var_22 = max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_23 = arr_0 [(unsigned char)8] [i_1];
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)74)) << (((/* implicit */int) arr_1 [i_1 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_9)))))))) : (((/* implicit */int) arr_1 [i_1 - 1]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_4 [i_2 + 1]))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27220))) : ((+(var_15))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1]))))))));
            arr_8 [i_3 + 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((arr_4 [i_2]), (arr_3 [i_2] [i_2])));
            arr_9 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (4735819976536984310ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)34)) >> (((((/* implicit */int) (short)-10421)) + (10448)))));
            var_29 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), ((+(((/* implicit */int) arr_1 [i_2 + 2]))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)9648)))), (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_17))))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_17 [i_4] [i_6]))));
                        var_32 &= ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        }
        var_33 &= ((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_2 + 1])), (((((/* implicit */_Bool) arr_13 [i_2 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)9662))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (signed char i_8 = 2; i_8 < 24; i_8 += 2) 
        {
            {
                arr_24 [i_7] = ((/* implicit */unsigned int) (unsigned short)18773);
                var_34 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (3056512853784324411ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
