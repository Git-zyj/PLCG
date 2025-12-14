/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56907
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
    var_20 -= ((/* implicit */short) ((var_14) - (((/* implicit */int) (unsigned short)55868))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_21 ^= ((/* implicit */short) var_16);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) (unsigned char)246);
                    var_23 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40148))) == (max((6184673901823221098ULL), (((/* implicit */unsigned long long int) (unsigned char)57))))));
                }
            } 
        } 
        arr_8 [i_0 - 1] = ((/* implicit */unsigned char) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 3]);
        arr_9 [i_0 - 4] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)30958)) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) var_17))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)22))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) var_8)) : (2085563722)))) ? (((((/* implicit */_Bool) (unsigned short)25166)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) ((unsigned short) arr_10 [i_3]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (var_2)))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_7))));
        var_25 = ((/* implicit */unsigned char) min(((unsigned short)37455), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 12262070171886330532ULL)) ? (((/* implicit */int) arr_11 [i_3])) : (var_14)))))));
    }
    for (short i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_15 [i_4 + 2] [i_4])) % (((/* implicit */int) arr_11 [i_4 + 2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (arr_11 [i_4 - 1])))))))));
        arr_16 [i_4 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -1342919497)) - (max((((/* implicit */unsigned long long int) arr_11 [i_4 + 1])), (6184673901823221089ULL)))));
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_11 [i_4 - 1]), (arr_13 [i_4])))) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 1]))) / (6420908870385758914ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_15)))))))));
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_4))))) & (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)230)))))))) : (((min((arr_14 [i_4]), (((/* implicit */unsigned int) var_15)))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_4 + 2] [i_4]), (((/* implicit */unsigned short) (short)4402))))))))));
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_28 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -443552362)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned char)239)))), (((/* implicit */int) var_10))));
                    var_29 = var_3;
                }
            } 
        } 
        var_30 &= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)57699));
        var_31 = min(((unsigned char)101), ((unsigned char)246));
    }
}
