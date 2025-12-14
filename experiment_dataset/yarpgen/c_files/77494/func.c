/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77494
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 4294967295U))) ? (((/* implicit */long long int) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14)))))) : (3832595672865981710LL)))))))));
                var_18 = ((((/* implicit */_Bool) (unsigned short)65499)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) / (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) min((var_14), (((/* implicit */int) (unsigned char)243))))) < (1U))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) var_12);
                            var_20 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))))), (((/* implicit */int) (unsigned char)224))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) * (5U))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_16)) ? (arr_10 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3 - 3] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_4)) : (arr_12 [i_0] [i_0] [i_3 + 1] [i_4] [i_4])));
                            }
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (4294967295U)))) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3]))))))))));
                                var_24 = ((/* implicit */int) arr_0 [i_0]);
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3 + 2] [i_3 - 3] [i_3 - 3] [i_3 - 2] [i_3 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 - 2] [i_0] [i_0] [i_3] [(signed char)15] [i_3])))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */int) var_8))))) & (var_6)))));
                                var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_3] [i_3] [i_3])) & (((/* implicit */int) (unsigned char)66))))) ? (((260046848U) & (4294967273U))) : (4294967295U));
                                arr_16 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) (unsigned short)65535))), (((unsigned int) 2223602692U))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) (unsigned short)65513);
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            {
                var_28 = ((/* implicit */long long int) (~(arr_11 [(unsigned char)18] [(unsigned char)18] [i_6] [0] [i_6])));
                var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (22U) : (((/* implicit */unsigned int) (+(var_9)))))) | (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6])));
                var_30 = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) (unsigned char)249)) : (-266488293)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_31 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_8]));
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_8]), (((/* implicit */long long int) arr_3 [i_8] [i_8]))))) || (((/* implicit */_Bool) ((unsigned short) var_4)))));
        var_33 &= min((((long long int) min((-232810977), (((/* implicit */int) (unsigned short)48))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)28)) & (((/* implicit */int) (unsigned short)26))))));
    }
    var_34 = ((/* implicit */signed char) var_7);
}
