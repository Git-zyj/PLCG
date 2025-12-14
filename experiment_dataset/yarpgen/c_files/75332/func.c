/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75332
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(596033131)));
        arr_5 [i_0] = ((/* implicit */short) ((int) arr_2 [i_0]));
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28465)) ? (((var_9) ? (((/* implicit */int) (unsigned short)37061)) : (((/* implicit */int) (unsigned short)37085)))) : (((/* implicit */int) arr_3 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37079)) - (((/* implicit */int) var_8))))) + ((+(19U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned char) (unsigned short)65535)))))))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_4))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                arr_13 [i_3] [1U] [3] = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_1)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)206)), (arr_6 [i_2] [i_2])))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627369472LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)0))))))))));
                arr_14 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (6703134545480809414LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) arr_2 [i_2])), (var_7))))) < (((/* implicit */unsigned int) min((((var_9) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned short)37050)))), (((/* implicit */int) ((unsigned short) (unsigned short)0))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2])) / (min(((+(((/* implicit */int) (unsigned short)65529)))), (((/* implicit */int) ((_Bool) var_12)))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((((/* implicit */int) arr_10 [i_2])) + (((/* implicit */int) arr_8 [(unsigned char)7])))))) : (min(((+(((/* implicit */int) (unsigned short)59294)))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (arr_16 [i_3]))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) max(((unsigned char)255), ((unsigned char)14)))) : (((/* implicit */int) (unsigned short)0)))) + (((/* implicit */int) arr_2 [i_2])))))));
                                arr_23 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_9)), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)43)))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) arr_21 [4] [4] [(unsigned short)3] [i_5] [i_6])) ? (((/* implicit */int) arr_7 [(unsigned char)8] [i_6])) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((int) arr_7 [i_2] [i_2]))) ? ((+(var_7))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))));
                                arr_24 [i_6] [(unsigned short)3] [(unsigned short)2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) (unsigned char)231)), ((unsigned short)65523)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_3);
    var_21 = ((/* implicit */_Bool) ((((((0) <= (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)28465))))) : (max((30U), (var_11))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_9))))))));
}
