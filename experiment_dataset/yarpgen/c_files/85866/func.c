/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85866
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
    var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)189)) : (1034089772))))) > (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = (~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_9)))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) /* same iter space */
                            {
                                var_18 ^= ((/* implicit */signed char) -1034089786);
                                var_19 = ((/* implicit */unsigned short) 5010854977533192671LL);
                                var_20 -= ((/* implicit */unsigned int) var_11);
                                arr_11 [i_0] [i_1] [i_2] [i_2] [i_4 + 3] = ((/* implicit */unsigned char) (-(var_2)));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                            {
                                var_21 ^= ((/* implicit */unsigned char) (_Bool)1);
                                var_22 = ((/* implicit */unsigned long long int) ((_Bool) var_8));
                            }
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [(signed char)0])) ? ((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [4ULL] [4ULL])) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) var_5)))))) + (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]))));
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)34828)) : (((/* implicit */int) (_Bool)1))))) : (max((-530776871543611032LL), (((/* implicit */long long int) var_6)))))) * (((/* implicit */long long int) ((((/* implicit */int) ((short) -1034089777))) + (((((/* implicit */int) var_15)) | (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_24 -= ((/* implicit */unsigned long long int) var_8);
        var_25 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)26))));
        arr_18 [16] |= ((/* implicit */unsigned char) min((var_4), (((/* implicit */short) var_5))));
        var_26 -= ((/* implicit */short) ((-593412142) != (((/* implicit */int) arr_17 [i_6 + 1]))));
    }
    for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
    {
        var_27 = ((/* implicit */long long int) ((min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))) % (((((((/* implicit */_Bool) (unsigned short)984)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) var_3))))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-67)) | (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (unsigned char)73))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((arr_20 [i_7]) - (7246282990182091921LL)))))) ? (((((/* implicit */_Bool) (unsigned short)64573)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [i_7])))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))))));
        arr_22 [i_7] = ((/* implicit */short) (unsigned char)221);
        arr_23 [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46181))))) ? (((/* implicit */unsigned long long int) 530776871543611032LL)) : (arr_19 [i_7 + 1])))));
    }
    var_29 = ((/* implicit */short) ((var_6) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9221256445976240011LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)0)) : (var_14)))));
}
