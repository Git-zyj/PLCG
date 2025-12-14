/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84605
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
    var_10 = ((/* implicit */unsigned char) var_1);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48837)) ? (((/* implicit */int) (_Bool)1)) : (1551181381)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((_Bool) ((_Bool) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_3]));
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((((/* implicit */int) (_Bool)1)) >= (1551181400))))))));
                        }
                        arr_14 [i_0] [i_3] = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (signed char)0)))));
                        var_13 *= ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) 329768215181586627ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])) : (2585227315U)))))));
                        var_14 ^= ((/* implicit */int) 6880907502204670564LL);
                        arr_15 [i_3] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) 1798963325664281689LL)) || (((/* implicit */_Bool) 2047627208U)))) && (((/* implicit */_Bool) 1501951880044391110ULL))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_1] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_1] [i_1] [i_1]), (1551181389)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-18)) < (-1224305402))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (2585227315U) : (3500598772U)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)511))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                            var_15 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0]);
                        }
                        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_5] [i_1] [i_1] [i_5]))))), (max((((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_5])), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (2585227330U)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((int) var_8)), (((/* implicit */int) arr_10 [i_7 - 2] [i_0] [i_0] [i_5 + 1]))))) ? (max((((/* implicit */int) (signed char)121)), (((1203779923) | (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_1))));
                            arr_24 [i_7] [i_2] [i_5] [i_7] = ((/* implicit */signed char) arr_10 [i_0] [i_2] [i_7] [i_7]);
                            var_18 = ((/* implicit */signed char) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (signed char)91))));
                            arr_25 [i_0] [i_7] [i_1] [i_2] [(signed char)2] [i_5] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2])) ? (((/* implicit */int) (signed char)127)) : (max((max((arr_18 [i_2]), (arr_18 [i_7]))), (arr_7 [i_7] [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_7 - 3] [(unsigned char)8])))));
                        }
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        var_19 = (!(((/* implicit */_Bool) arr_3 [i_0])));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) ((short) arr_27 [i_8] [i_8] [i_8 + 1] [(unsigned short)5]))) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [(unsigned char)0] [1] [i_0])))))));
                }
            } 
        } 
    } 
}
