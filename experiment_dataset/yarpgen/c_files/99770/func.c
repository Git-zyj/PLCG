/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99770
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
    var_10 = ((/* implicit */short) max((((/* implicit */unsigned short) var_3)), (var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_7)) / (arr_1 [0]))) * (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_12 = ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 2])) ? ((-(var_6))) : (0));
            var_13 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */long long int) 0)) : (arr_1 [i_1 + 1])));
            arr_4 [i_0] [(unsigned char)5] |= ((/* implicit */unsigned long long int) (signed char)-6);
            var_14 = ((/* implicit */long long int) arr_2 [i_1 + 1] [14U] [i_1 + 2]);
        }
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
        {
            var_15 = ((/* implicit */short) ((((((((/* implicit */_Bool) ((unsigned int) 0))) ? (min((0), (((/* implicit */int) (signed char)8)))) : ((~(882427922))))) + (2147483647))) >> (((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (signed char)-22)))) + (33)))));
            var_16 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_3]))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) min(((short)1977), (((/* implicit */short) (unsigned char)255))));
            var_17 |= ((/* implicit */unsigned int) min((((arr_11 [i_2] [i_2]) * (arr_11 [i_2] [i_4]))), (arr_11 [(unsigned short)5] [i_4])));
        }
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            arr_15 [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(arr_10 [i_2] [i_2] [i_5]))), (((/* implicit */unsigned int) arr_14 [i_5] [i_2]))))) ? (((((((/* implicit */_Bool) (unsigned short)59999)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)253)))) & (min((((/* implicit */int) (unsigned char)53)), (-403078806))))) : (max((-1), (((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) arr_6 [i_5])) : (-1129829845)))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
            {
                var_18 ^= ((/* implicit */unsigned char) max((min(((-(((/* implicit */int) arr_2 [i_2] [i_2] [i_6])))), ((-(((/* implicit */int) var_1)))))), ((-(((/* implicit */int) (short)-22575))))));
                var_19 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_6])) || (((/* implicit */_Bool) arr_8 [i_2])))));
            }
            for (long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_17 [i_2] [i_5] [i_7]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [(unsigned short)12] [i_5] [0U])) & (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) : (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)4]))) : (7657914502556320489LL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_8] [i_7]))) % (var_4)));
                    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-1465382632)))) ? (arr_13 [i_7]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)21184)))))));
                }
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    arr_26 [i_2] [i_5] [i_5] [(_Bool)1] [i_7] [(short)6] = max((((/* implicit */int) ((((/* implicit */_Bool) 1465382631)) && (((/* implicit */_Bool) -1))))), (min((((/* implicit */int) min(((signed char)48), ((signed char)28)))), (min((arr_3 [2LL] [i_7] [i_9]), (((/* implicit */int) arr_9 [i_2])))))));
                    var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (min((4095), (((/* implicit */int) var_1))))))));
                    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)4284)) : (-3)));
                }
                arr_27 [i_5] [i_7] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_6 [i_2])))));
                arr_28 [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_7] [i_5] [i_2]))))) ? (max((((/* implicit */unsigned int) ((unsigned short) arr_0 [i_2] [i_5]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))));
                arr_29 [i_7] [1] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((-11), (((/* implicit */int) (short)-25883)))))));
            }
        }
        var_25 = ((/* implicit */signed char) min((max((-9003871375925371354LL), (((/* implicit */long long int) 0)))), (((/* implicit */long long int) max(((unsigned short)9010), (((unsigned short) (_Bool)0)))))));
    }
}
