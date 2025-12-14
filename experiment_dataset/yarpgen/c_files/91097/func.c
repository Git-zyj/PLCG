/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91097
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
    var_19 *= ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned short)25907)) : (((/* implicit */int) (unsigned char)136)));
                                var_22 = ((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_1] [i_1] [(signed char)7]);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [15ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39629))) : (13174789015718729844ULL)))) ? (((((/* implicit */_Bool) (unsigned char)122)) ? (arr_10 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) arr_6 [(unsigned short)2] [i_1] [i_1])) & (((/* implicit */int) var_6)))))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [(unsigned short)8] [(unsigned short)8] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1] [i_0])) : (((/* implicit */int) (unsigned short)39613))))))));
                var_24 |= ((/* implicit */unsigned short) (-((((((~(((/* implicit */int) (unsigned char)120)))) + (2147483647))) >> (((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [15ULL] [i_1]) - (2336540628U)))))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) ((unsigned char) var_3)))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */_Bool) 3875003963U)) ? (((/* implicit */int) arr_3 [14U] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_3 [i_0] [5LL])) ? (var_15) : (((/* implicit */int) var_8))))))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((-4984316102736013276LL), (((/* implicit */long long int) (unsigned char)126)))) == (((/* implicit */long long int) arr_2 [i_1])))))) : (arr_13 [i_0] [i_1] [i_1] [i_5]))))));
                    var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned short)25907), (((/* implicit */unsigned short) var_2)))))))), (var_9)));
                }
                for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_13 [i_0] [i_1] [i_6 + 1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34254)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_6 + 3]))) : (((((/* implicit */_Bool) arr_5 [0LL] [0LL])) ? (arr_13 [7] [i_1] [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34264))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_17 [i_0] [i_1] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) arr_6 [i_0] [(signed char)14] [i_6])))) : (((/* implicit */int) (unsigned char)164))))) == (((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_6 - 1])) ? (arr_13 [i_6] [i_6] [i_6] [i_6 - 1]) : (arr_13 [i_6] [i_6] [i_6] [i_6 - 1])))));
                }
            }
        } 
    } 
}
