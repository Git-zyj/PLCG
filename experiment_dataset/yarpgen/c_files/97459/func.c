/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97459
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
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (-1LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_9))) != ((+(((/* implicit */int) (signed char)61))))));
        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) (-(arr_0 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] = ((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1]);
            var_21 = ((/* implicit */short) (~(arr_0 [i_2 - 1] [i_2])));
            arr_8 [i_2] = ((/* implicit */signed char) var_9);
            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-67))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_3)))))) : ((+(arr_4 [i_2 - 1])))));
        }
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)58137)))))));
    }
    var_24 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_25 = ((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) min((var_16), (((/* implicit */unsigned short) arr_12 [i_3])))))));
        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)3731)) * (((/* implicit */int) (unsigned short)27169)))) < (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3])))))) ? (((((((/* implicit */_Bool) (unsigned short)7398)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58156))) : (arr_11 [i_3]))) << (((((((/* implicit */_Bool) (unsigned short)58181)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)7366)))) - (235))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3])) && (((/* implicit */_Bool) (signed char)-85))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58170)))))) : (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3])))) + (((/* implicit */int) var_14))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_27 = ((/* implicit */long long int) (signed char)61);
        arr_18 [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) ((211471515226271491LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7377))))))) < ((-(arr_16 [i_4]))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_10 [i_4] [i_4])));
    }
    for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((var_7) * (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5 + 1])) != (((/* implicit */int) arr_14 [i_5 - 1])))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((min(((unsigned short)12114), (((/* implicit */unsigned short) var_14)))), (((/* implicit */unsigned short) arr_9 [i_5 - 1])))))));
            arr_25 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / ((-(((/* implicit */int) (unsigned short)7343))))));
            var_29 = (signed char)-2;
        }
        arr_26 [i_5] [i_5 - 1] = ((/* implicit */long long int) ((signed char) 4095U));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 15; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_8), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_30 [i_5 + 1] [i_9])), ((unsigned short)47771))))))) ? (((/* implicit */int) arr_9 [i_5 + 1])) : ((~(((/* implicit */int) (unsigned short)53422))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_10), (arr_11 [i_9]))) / (arr_22 [i_8 + 1])))) ? (((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_32 [i_5] [0] [i_5])) + (32368))))) : (max((2147483635), (((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
}
