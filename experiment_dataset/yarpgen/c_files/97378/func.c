/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97378
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)118))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)40890)) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */int) var_4);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_2 - 1] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_1] [i_1]))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0]))) > (var_1)))) : (((arr_13 [i_0] [i_1] [i_2 - 1]) ? (((/* implicit */int) var_3)) : (arr_1 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 &= (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 1]))));
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3254058514160130283ULL)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_2))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 6; i_5 += 2) /* same iter space */
    {
        var_19 &= ((/* implicit */unsigned char) (-(min((((/* implicit */int) var_3)), ((-(arr_17 [i_5 + 2] [(short)9])))))));
        /* LoopSeq 2 */
        for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            arr_21 [i_6] [(_Bool)1] [i_6 - 3] = (!((!(((/* implicit */_Bool) var_3)))));
            var_20 += ((/* implicit */signed char) (+(((arr_9 [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)251)))))) : (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) -904707377));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)161)))) : (((arr_20 [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12880523747335326497ULL)) ? (((/* implicit */int) arr_2 [i_5] [i_6 - 3])) : (513737547)))) : ((~(7112476138820394849ULL)))))));
            arr_22 [i_6] = ((/* implicit */signed char) (~((~(((((/* implicit */int) var_2)) << (((arr_4 [i_5] [i_5 + 3] [i_5 + 1]) + (570695185)))))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_23 = ((unsigned char) ((((/* implicit */_Bool) (unsigned short)16)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            var_24 = ((/* implicit */_Bool) ((arr_20 [i_5 + 3] [i_5 + 4]) ? (((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) (short)19718))));
            var_25 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5 + 4] [i_7])) || (((/* implicit */_Bool) var_0)))))));
        }
        var_26 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_9 [i_5]))))));
    }
}
