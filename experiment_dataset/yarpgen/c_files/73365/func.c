/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73365
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((short) var_15))) | (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */_Bool) (unsigned char)93);
            var_21 ^= ((/* implicit */unsigned long long int) ((_Bool) (-(arr_0 [i_0 + 2] [i_1]))));
            arr_6 [i_1] = ((/* implicit */short) (unsigned char)163);
        }
        var_22 = ((/* implicit */short) ((_Bool) ((short) ((signed char) (_Bool)1))));
        arr_7 [i_0] [i_0 - 2] = ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 3] [i_0]))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) max((((short) (_Bool)1)), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_2] [i_2])) >= (-30660729))))));
        var_24 ^= ((/* implicit */short) ((((_Bool) var_3)) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-8252)))))) : (((((/* implicit */_Bool) (-(-2823201792243256824LL)))) ? (min((arr_1 [i_2]), (((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) (_Bool)1))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 30660741))));
    }
    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (_Bool)1)))) : (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-1899)) : (((/* implicit */int) (unsigned char)7)))) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483625))) + (50)))))));
        var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2086192511U)) ? (2086192485U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41774)))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (1984143217) : (((/* implicit */int) (unsigned char)213)))))))));
        var_26 ^= ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) min(((short)32759), (((/* implicit */short) (signed char)90))))) : (((int) var_16)))) >> (((((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (9490268821895038599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))))) - (9490268821895038586ULL)))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) var_12);
        /* LoopNest 3 */
        for (unsigned char i_5 = 4; i_5 < 15; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_25 [i_4] [i_5 - 2] [i_4] [i_6] = ((/* implicit */unsigned char) ((int) (!((_Bool)1))));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_9)))))) ? (((/* implicit */int) ((signed char) min(((unsigned short)162), (((/* implicit */unsigned short) arr_19 [i_7])))))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)65382))) ? (((((/* implicit */_Bool) (signed char)109)) ? (var_8) : (var_14))) : (((/* implicit */int) arr_16 [i_5 - 2] [i_4]))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) (unsigned char)182))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 596135658226040293LL)))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) (short)1905))), (((((/* implicit */_Bool) 12115142754867014925ULL)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (_Bool)1))))))) : (min((max((((/* implicit */unsigned int) var_4)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_4])) : (var_8))))))));
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */int) var_3);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (int i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                {
                    arr_36 [i_8] [i_8] [i_10 - 2] = ((/* implicit */unsigned short) (short)(-32767 - 1));
                    var_29 |= ((/* implicit */short) var_3);
                    var_30 = ((/* implicit */unsigned int) (-(((9005814436326325614LL) + (((/* implicit */long long int) arr_12 [i_10 - 2]))))));
                }
            } 
        } 
    }
}
