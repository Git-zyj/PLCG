/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92146
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
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0 - 1])), (((arr_0 [i_0 - 2] [i_0]) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0]))) : (min((1110118059), (((/* implicit */int) arr_2 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_7);
        var_15 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((int) arr_1 [(short)11]))));
        var_16 = ((((/* implicit */long long int) min((((((/* implicit */_Bool) 1110118059)) ? (((/* implicit */int) arr_1 [(signed char)3])) : (((/* implicit */int) arr_1 [i_0 + 1])))), (((((/* implicit */_Bool) -1110118078)) ? (-1110118060) : (((/* implicit */int) var_2))))))) / (3848740316778778199LL));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (signed char)-65);
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5605051396250967806ULL)) ? (1110118052) : (((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (short i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (var_10)))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1110118075)))))));
                                var_19 *= ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 + 2] [i_2]))) : (((((/* implicit */_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31084))) : (arr_15 [i_2 - 1] [i_3 - 1] [i_5 + 1] [i_5 - 1] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [(_Bool)1] [i_1] &= ((/* implicit */_Bool) max((min((arr_11 [i_1]), (arr_11 [i_1]))), (((/* implicit */long long int) ((arr_5 [i_1]) ? ((~(-1110118073))) : ((+(((/* implicit */int) (signed char)-74)))))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_14 [(_Bool)1])))) ? (((/* implicit */unsigned long long int) var_3)) : (max((arr_9 [i_1]), (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4323455642275676160LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))))) ? (min((((/* implicit */long long int) (_Bool)0)), (arr_17 [8]))) : (((/* implicit */long long int) ((arr_5 [i_1]) ? (32869038) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1415948578U))))) == ((+(arr_7 [i_1]))))))))))));
        arr_20 [i_1] = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))));
        var_21 &= ((/* implicit */long long int) var_4);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_9 [i_6]))));
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? ((-(((/* implicit */int) (signed char)-58)))) : (var_1)));
    }
}
