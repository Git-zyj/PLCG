/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76786
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
    var_20 |= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((var_7) | (var_11))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (min((((/* implicit */unsigned long long int) ((arr_8 [10ULL] [i_1] [i_1] [i_1]) >= (((/* implicit */int) arr_7 [i_2] [i_1]))))), (min((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_0]))))) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (18014398509481983ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [i_1])))) >> (((arr_2 [i_1] [i_1]) + (664683770185642804LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 12021949398815262523ULL)) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1]) : (arr_1 [i_4 - 1] [i_4]))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))))) : (((/* implicit */int) ((arr_15 [4U] [4U] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_2]) == (arr_15 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_2]))))));
                                var_23 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_0 [10U])), ((-(arr_10 [i_4 + 2] [6LL] [i_1] [i_4] [i_4 + 2] [i_4 + 2])))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(arr_14 [i_0] [i_0] [4ULL] [i_3] [i_4]))))));
                                arr_16 [i_2] [(_Bool)1] [i_2] [7LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((long long int) -745382441055268623LL))) ? (arr_6 [i_0] [i_4 - 1]) : (arr_6 [i_4] [i_4 + 1])))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_0] [(short)1] [i_0] = ((/* implicit */short) ((var_11) % (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_0]))))));
                    var_25 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_0 [i_1]))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_18 [2] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) ? ((~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))))) : ((((~(((/* implicit */int) (unsigned char)255)))) % (((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_6) + (7334945291948004358LL)))))))));
                    var_27 = (+(((((/* implicit */_Bool) (-(var_8)))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2LL)) ? (var_17) : (var_16)))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_5 [i_0])), ((+(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_17 [5] [5] [i_5] [5])))))))))));
                        var_29 = ((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) -2087658563)), (276823793453621462ULL))) / (min((12972621709492430012ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((unsigned char) 10708390210432797492ULL)))));
                        arr_23 [i_0] [i_0] [8LL] [(unsigned char)0] = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
                    }
                }
                arr_24 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3164748386U)) - (10708390210432797492ULL)));
    var_31 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7931543816594618727ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))))) : ((+(var_14))))), (min(((+(var_7))), (max((var_9), (((/* implicit */unsigned long long int) var_3))))))));
}
