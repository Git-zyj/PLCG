/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76184
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_15 += ((/* implicit */short) (~(((/* implicit */int) (unsigned char)60))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 3] [i_3] [i_3 - 1] [15] [i_4 + 1]))) ^ (((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1] [i_2] [i_3 + 1] [i_2] [i_0 + 2])) ? (var_8) : (33371528777143297ULL)))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_4 - 1])))))));
                                var_18 = ((((/* implicit */_Bool) (unsigned char)90)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) % (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) - (((/* implicit */int) (signed char)105))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned char) ((((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)255))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) < (524287))))) ^ (max((((/* implicit */long long int) arr_18 [(signed char)5] [i_1] [i_5] [i_6] [i_7])), (6637933978371947776LL)))))));
                                arr_20 [i_0] [i_1] [0] [i_6] [i_6] [i_7] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_12 [i_0 - 2] [i_7] [15])), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)109))))));
                            }
                        } 
                    } 
                } 
                var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 652405369443779547ULL)) ? (((/* implicit */int) (short)-24850)) : (((/* implicit */int) (unsigned char)63)))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)224)) ? ((((!(((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */int) arr_9 [i_0] [i_0 - 3] [i_1] [i_1])) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_10);
}
