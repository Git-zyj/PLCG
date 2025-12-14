/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76550
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_5)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_5)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_17), (arr_1 [i_1])))) ? ((((!(((/* implicit */_Bool) var_0)))) ? ((~(((/* implicit */int) arr_1 [i_1])))) : ((-(((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (short)-18419)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) 
        {
            var_21 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_2 - 1] [i_2]))));
            arr_8 [i_1] [i_2 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1] [i_2 - 2] [i_2]))));
            var_22 = ((/* implicit */unsigned char) (((_Bool)1) ? (3958244560U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62992)))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) var_17))))), (max((var_16), (((/* implicit */long long int) max((((/* implicit */signed char) var_7)), (var_13))))))));
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_4)), ((+((-(336722751U)))))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_13 [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_0 [i_4]), (arr_0 [i_4])))), ((~(3958244560U)))));
            arr_14 [i_3] [i_4] [(_Bool)1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 336722736U)) ? (3958244548U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_0))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1])), (min((((/* implicit */unsigned short) var_8)), (var_5)))))) ? (min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (1910446554578969364ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_15)))))) : (((/* implicit */unsigned long long int) max((arr_10 [i_4] [i_3]), (((/* implicit */long long int) var_5)))))));
            arr_15 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-26072)))))));
            var_26 = ((/* implicit */unsigned int) arr_2 [i_3]);
        }
        for (short i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            arr_20 [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_3])) : ((~(((/* implicit */int) (short)8160))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
                        var_27 = ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (short)-8162)) : (((/* implicit */int) (signed char)-40)));
                        arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-103)), (arr_17 [(unsigned char)8]))))));
        arr_29 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-12560)) : (((/* implicit */int) var_17)))), ((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) min((var_0), ((signed char)34)))) : ((~((+(((/* implicit */int) var_14))))))));
    }
    var_30 = max((var_8), ((signed char)-6));
}
