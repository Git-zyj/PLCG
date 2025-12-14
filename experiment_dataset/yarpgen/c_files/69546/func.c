/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69546
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), ((short)32767)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_3))))) : (min((var_1), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))) == (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_3] [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [7ULL] [i_2]))))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_3])))) * (((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_12 [i_4] [(signed char)0] [1] [i_0] [(signed char)3] [i_0])))) ? (((((/* implicit */_Bool) 1074465794)) ? (arr_12 [i_0] [i_1] [i_0] [i_4] [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) arr_14 [i_0] [(signed char)8] [i_1] [(signed char)8]))));
                        var_12 -= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [(unsigned short)7])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            var_13 = ((/* implicit */int) arr_15 [i_0] [7ULL] [i_0] [4] [i_6 + 1] [i_6]);
                            arr_19 [i_1] [i_1] [i_2] [i_0] [i_6 - 1] = ((/* implicit */int) ((unsigned char) var_1));
                        }
                        var_14 |= ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)43))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)27573)))) : (((((/* implicit */_Bool) arr_0 [6U] [i_2])) ? (((/* implicit */int) (short)5449)) : (((/* implicit */int) var_6)))));
                        var_15 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_0)))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_1] [(unsigned char)14])) : (((/* implicit */int) arr_1 [5ULL]))));
                    }
                    for (int i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) (~(min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) < (arr_0 [i_0] [i_7])))), ((+(((/* implicit */int) var_6))))))));
                        var_18 = ((/* implicit */unsigned char) ((((arr_9 [i_7 + 1] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2]) ? (((/* implicit */int) arr_9 [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7 + 2])) : (arr_14 [i_7 - 1] [i_1] [i_1] [i_7 + 1]))) >= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)2))))))));
                        var_19 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (var_5)))) ? (((/* implicit */int) var_4)) : (((var_5) & (-696662226))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (+(var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 825699993)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [(unsigned short)0] [(unsigned short)0]))) : (var_1)))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((min((var_7), (arr_0 [i_0] [i_0]))) > (((((/* implicit */_Bool) 825699993)) ? (((/* implicit */int) var_4)) : (arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [0] [i_1])) : (((/* implicit */int) var_0))))) || (((var_7) >= (((/* implicit */int) var_6))))))) : (((/* implicit */int) (((~(var_5))) >= (min((((/* implicit */int) var_8)), (var_7)))))))))));
                    }
                    arr_23 [i_0] [i_1] [i_2] [i_1] = max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_15 [(unsigned short)1] [i_0] [i_1] [(unsigned short)1] [(unsigned short)1] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2)))))), (((max((((/* implicit */int) arr_7 [i_0] [(short)7] [7LL])), (var_5))) / (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (unsigned short)13434)) : (var_7))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : ((~(((/* implicit */int) var_3))))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), ((~(var_1)))))));
}
