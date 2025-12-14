/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8106
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_2]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_1 [i_2]))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (signed char)61))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (signed char)127))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0])) - (32))))) : (((/* implicit */int) (signed char)-113))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)11))));
                    }
                    var_19 = ((/* implicit */unsigned short) (unsigned char)221);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) max(((unsigned char)255), (((/* implicit */unsigned char) var_9)))))))) ? (((((/* implicit */_Bool) (unsigned char)101)) ? (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)155), ((unsigned char)3)))) || (((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_6 = 2; i_6 < 22; i_6 += 4) 
                {
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (((((~(((/* implicit */int) (unsigned char)104)))) + (2147483647))) << (((((/* implicit */int) max((arr_12 [i_4]), (var_11)))) - (39591)))));
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)178)) << (((((/* implicit */int) (signed char)-98)) + (119)))))) ? (((((/* implicit */int) min(((signed char)-125), (var_5)))) + (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-85)))))) : (((/* implicit */int) ((signed char) (unsigned short)1)))));
                                var_23 = ((/* implicit */unsigned char) arr_19 [i_5 - 1] [i_7 + 3] [i_7 + 2] [i_7 + 3]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) (signed char)-123);
                            var_25 = ((/* implicit */unsigned short) (signed char)-1);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] [i_9 + 2] [i_9 + 1])) ? (((/* implicit */int) arr_21 [i_4] [i_5 + 1] [i_4] [i_10 + 2])) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-65)), ((unsigned short)65414)))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [(unsigned char)2] [i_5])) : (((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
