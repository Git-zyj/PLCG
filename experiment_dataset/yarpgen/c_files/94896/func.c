/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94896
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_3])) != (((/* implicit */int) (_Bool)1)))))));
                        var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)43456)))) % (((((/* implicit */int) arr_7 [i_0] [i_0])) + (((/* implicit */int) arr_4 [(short)2]))))));
                        var_13 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_3 + 2] [i_0]);
                        arr_12 [(unsigned short)2] &= ((/* implicit */short) ((_Bool) ((long long int) arr_8 [i_0] [i_1] [i_2] [i_3 + 3])));
                        var_14 += ((/* implicit */_Bool) var_0);
                    }
                } 
            } 
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (unsigned short)47225))));
            var_17 = ((/* implicit */int) var_7);
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_18 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) max((((/* implicit */unsigned short) (_Bool)0)), (arr_1 [i_0] [i_5])))));
                var_19 *= ((/* implicit */signed char) (~(((((/* implicit */long long int) (+(var_10)))) / ((~(arr_9 [i_0] [i_0] [i_5] [i_5])))))));
            }
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) arr_10 [i_7] [i_4] [i_6] [i_7]);
                    var_21 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (unsigned char)89)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_0])) : (((/* implicit */int) var_7)))))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) 2305843009213169664LL)))))));
                }
                arr_23 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [(short)5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
                var_22 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_6] [i_6] [i_4] [(_Bool)1])), ((unsigned short)28044)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (825965056U)))))));
            }
        }
        arr_24 [i_0] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)20804)))) == (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned char) ((short) var_2));
        var_23 = ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_6)) ? (1152358554653425664LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))))));
        arr_28 [i_8] |= ((/* implicit */unsigned long long int) ((((int) max((var_0), (((/* implicit */int) var_3))))) > (((/* implicit */int) ((unsigned short) var_3)))));
    }
    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) /* same iter space */
    {
        arr_31 [i_9 + 2] [i_9] = ((/* implicit */signed char) arr_29 [i_9 + 3] [i_9]);
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_9]))));
    }
    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((_Bool) arr_33 [i_10 + 4] [i_10 + 2]));
        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)20804)) ? (((unsigned int) arr_30 [i_10 + 3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_29 [(unsigned short)7] [i_10])) ? (((/* implicit */int) (short)12835)) : (var_6))))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10] [i_10]))) / (-191009778185580363LL))))) ? ((-(((/* implicit */int) arr_32 [i_10 - 2] [i_10 + 3])))) : (((/* implicit */int) (signed char)0))));
        var_28 = (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-30794)));
    }
    var_29 *= ((/* implicit */_Bool) var_2);
}
