/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93201
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((arr_1 [i_0]) ? (((/* implicit */int) ((unsigned short) (unsigned char)41))) : (((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned short)56576)) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_18 += ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]));
        var_19 &= ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (((/* implicit */int) var_4))))) : ((~(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] &= ((/* implicit */int) ((unsigned short) (unsigned char)207));
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned int) ((int) (unsigned char)58))) : (3618357496U))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1442197212)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58215)))), (((/* implicit */int) (unsigned char)214)))))));
        arr_9 [i_1] = ((unsigned char) max((var_12), (((/* implicit */unsigned short) arr_5 [i_1] [i_1]))));
        arr_10 [i_1] = ((/* implicit */unsigned short) ((arr_0 [i_1] [21U]) | (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (((unsigned short) (unsigned char)43)))))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_3 + 1])) : (arr_0 [i_2 + 2] [i_3 - 2]))) ^ (((/* implicit */int) ((2772966892U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_20 &= min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 3] [i_2 + 3]))) | (arr_13 [i_2 + 1] [i_2 + 3] [i_3 - 2]))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((((_Bool) arr_1 [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_12 [i_1] [i_2 - 1])))) : ((-(((/* implicit */int) (unsigned char)45)))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)48)) && (arr_1 [i_1])))), (arr_0 [i_1] [i_2])))));
            }
            var_22 = ((/* implicit */unsigned int) arr_2 [i_1] [(_Bool)1]);
        }
    }
    for (int i_4 = 3; i_4 < 13; i_4 += 1) 
    {
        arr_18 [i_4 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((arr_13 [i_4 - 3] [i_4] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))))))))));
        arr_19 [i_4 + 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4])) ? (arr_0 [i_4] [i_4]) : (((/* implicit */int) arr_2 [i_4] [i_4]))))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_16 [i_4 + 3])))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) max((var_8), (var_5))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(-420074897)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3450574359U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (max((4230240738U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) 820961474)))) - (4230240721U)))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((-1442197218) - (((/* implicit */int) (unsigned short)9276)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)91)) > (((/* implicit */int) (unsigned short)65535)))))))) >> (((((((/* implicit */int) var_12)) - (((/* implicit */int) arr_22 [i_5])))) / (((((/* implicit */_Bool) var_12)) ? (-420074897) : (((/* implicit */int) arr_2 [i_5] [i_5]))))))));
        var_25 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))) ? (((/* implicit */int) ((_Bool) arr_21 [i_5]))) : (((var_16) ? (((/* implicit */int) (unsigned char)44)) : (var_10))))) == (((/* implicit */int) (!(max((var_16), (var_7)))))));
    }
}
