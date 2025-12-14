/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84377
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
    var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((_Bool) var_12))), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)104))))) || (((/* implicit */_Bool) ((long long int) var_2))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = min((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((var_11), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
        var_15 = var_3;
        var_16 &= ((/* implicit */signed char) ((int) min((((/* implicit */unsigned char) ((_Bool) arr_2 [i_0] [i_0]))), ((unsigned char)210))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_1) / (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (var_5))))))) + (((long long int) ((arr_2 [i_0] [i_0]) ? (var_11) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) arr_6 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [7U] [i_1] [i_1] [i_3]) + (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) arr_7 [i_1] [(short)6])))))))) ? ((+(arr_1 [i_1]))) : (((/* implicit */long long int) (((~(var_8))) + (((/* implicit */unsigned int) ((arr_2 [i_3] [i_2]) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_10))))))))));
                    var_20 = ((/* implicit */int) min((-723224317492613816LL), (min((((long long int) arr_11 [i_3])), (((/* implicit */long long int) arr_2 [i_2] [i_3]))))));
                    var_21 += ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned int) ((unsigned short) arr_5 [i_1] [i_1]))), (((unsigned int) arr_10 [i_1] [i_1] [i_1] [i_1])))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_22 -= ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_1]))))) == (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (arr_3 [i_1])))))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_6 [i_1])) : (var_8)))) : (max((((/* implicit */long long int) arr_6 [i_1])), (arr_11 [6]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */int) arr_2 [(_Bool)0] [(_Bool)0]))))) || (((/* implicit */_Bool) (~(var_2))))))))));
                        arr_15 [i_1] [i_3] [5ULL] [i_4] = (((((+(((/* implicit */int) arr_13 [i_4] [i_3] [i_1])))) + (((/* implicit */int) ((unsigned short) var_2))))) / (((/* implicit */int) ((((arr_2 [i_1] [i_2]) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6)))) <= (((/* implicit */int) max((arr_8 [i_1]), (((/* implicit */unsigned short) var_6)))))))));
                    }
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) 
                    {
                        arr_18 [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) var_12);
                        var_23 = ((/* implicit */int) min((((((/* implicit */long long int) max((((/* implicit */int) var_3)), (var_5)))) & (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_1 [i_2]) : (((/* implicit */long long int) var_7)))))), (arr_1 [i_2])));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36196))) : (((long long int) (_Bool)1)))), (min((((/* implicit */long long int) ((unsigned short) arr_5 [i_1] [i_2]))), (((var_12) + (((/* implicit */long long int) var_5)))))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_2])), (((unsigned long long int) var_0))))) ? (((arr_0 [i_6 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6 + 1]))))) : (((/* implicit */long long int) var_5))));
                        var_26 = (~(((((/* implicit */_Bool) arr_9 [3] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6 + 1] [i_6 - 1]))) : (arr_0 [i_6 + 1]))));
                        arr_21 [i_6 - 1] [i_2] [i_2] = ((int) ((((/* implicit */_Bool) 4503599090499584LL)) ? (-1715381993) : (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_3 [i_1]) * (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_3])))) : (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2])) ? (arr_10 [i_3] [i_6] [i_3] [i_6]) : (((/* implicit */unsigned long long int) var_1)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(var_7)))) / (((((/* implicit */_Bool) 2147483648U)) ? (8796092956672LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))))))))));
                        var_28 = (~(min((((((/* implicit */long long int) arr_12 [(signed char)5] [(signed char)5] [i_3] [i_3] [i_6] [i_6])) + (arr_1 [i_1]))), (((/* implicit */long long int) ((_Bool) arr_8 [i_1]))))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    var_30 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))))) | (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) (signed char)0)) ? (8837278469873117571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))))));
                    var_31 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(arr_23 [i_1] [i_1] [i_8])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_1] [i_1])), (var_4)))))), ((+(((/* implicit */int) arr_16 [i_7 - 3] [i_7 - 2] [i_7 + 1] [i_7 + 1]))))));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_23 [i_1] [(signed char)6] [(signed char)6])))) || (((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_7] [i_7] [i_8] [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37797)) && (((/* implicit */_Bool) max((arr_24 [i_8]), (((/* implicit */unsigned int) arr_16 [i_1] [i_7 - 2] [i_8] [i_8])))))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_33 += ((/* implicit */unsigned long long int) (+(((((long long int) var_9)) / (var_2)))));
                                arr_32 [i_1] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_10])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (1943817625) : (650483855)))) : (arr_10 [i_7] [i_7] [i_7 - 3] [i_7 - 3]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (arr_5 [i_1] [i_1])))) ? (((/* implicit */int) arr_16 [9ULL] [i_7] [i_8] [i_7])) : (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [(signed char)9] [i_8])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 2; i_11 < 8; i_11 += 2) 
    {
        for (int i_12 = 2; i_12 < 8; i_12 += 4) 
        {
            {
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_13 [i_11 + 2] [i_12] [i_11])), (arr_26 [i_11] [i_12] [i_12] [i_11]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11 - 1] [i_11])))))), (((((((/* implicit */_Bool) arr_28 [i_11] [(_Bool)0] [i_11 + 2] [i_11] [i_11 - 2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11 + 2] [i_12]))) : (arr_12 [i_11] [i_11] [i_12] [i_12] [0] [i_12]))) >> (((((/* implicit */int) var_6)) - (21))))))))));
                arr_40 [i_12] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_11 + 2] [(signed char)5] [i_11 + 1] [i_12 + 1] [i_12] [i_12 - 2])) || (((/* implicit */_Bool) arr_28 [i_11 + 2] [i_11] [i_11 + 1] [i_12 + 1] [i_12 + 2] [i_12 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_11]) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_11] [i_12] [i_11]))))) : (var_12)))));
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52478)) ? (((/* implicit */int) (unsigned short)33016)) : (-1943817626)));
    var_36 = ((/* implicit */_Bool) (~(min((((var_2) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_5))))));
}
