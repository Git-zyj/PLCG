/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85147
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
    var_16 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (((((/* implicit */_Bool) 917384999)) ? (17473504614610496074ULL) : (77438428975918376ULL))))) - (((/* implicit */unsigned long long int) ((917384985) + (917384985))))));
    var_17 = ((((/* implicit */_Bool) var_12)) ? (max((max((var_8), (((/* implicit */unsigned long long int) 917384994)))), (((/* implicit */unsigned long long int) ((_Bool) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned char)240)), (var_8))), (((/* implicit */unsigned long long int) (unsigned short)43364))))) ? (((((/* implicit */_Bool) max((arr_1 [0U]), (((/* implicit */int) arr_0 [2ULL] [i_0]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -917384980)) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [0])))))) : (((unsigned long long int) (unsigned char)59)));
        var_19 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (unsigned char)197)) ? (arr_1 [(_Bool)1]) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (arr_1 [i_0]))) < (((/* implicit */int) ((((arr_1 [i_0]) | (((/* implicit */int) var_1)))) <= (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_14 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)184)) == (((/* implicit */int) (short)30055)))) && (arr_4 [i_1 + 1])));
                                var_20 = ((((/* implicit */_Bool) ((var_11) << (((var_15) + (7788346060475928150LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)2])))))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))));
                                arr_15 [i_1] [17U] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_3])) && (((/* implicit */_Bool) ((int) (unsigned short)233)))));
                                var_21 = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                    arr_16 [(unsigned short)5] [22] [(short)13] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_3 + 1] [i_1] [i_3])) : (var_10)));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_19 [(unsigned short)15] [i_1] [i_2] [16U] [(short)0] [i_6] = ((/* implicit */_Bool) ((unsigned char) arr_11 [11ULL] [i_1 - 2] [i_3 - 1] [i_3]));
                        arr_20 [i_6] [5ULL] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-30055)) <= (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [9U] [6ULL])) >= (((/* implicit */int) arr_4 [(_Bool)1]))))) : (((/* implicit */int) ((short) arr_4 [i_1])))));
                        var_22 = ((/* implicit */_Bool) arr_8 [i_1 - 1] [i_3 - 1] [i_3]);
                    }
                    var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_3 + 2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_1 + 2]))));
                }
            } 
        } 
        arr_21 [i_1] [13ULL] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_5 [15ULL] [(_Bool)1])) % (((/* implicit */int) (unsigned char)73)))));
    }
}
