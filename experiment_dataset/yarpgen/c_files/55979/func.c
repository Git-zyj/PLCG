/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55979
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
    var_14 = ((((/* implicit */int) (short)16657)) / (min((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65535)))), (var_11))));
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) arr_6 [i_1]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_17 -= ((/* implicit */short) (!(((((/* implicit */_Bool) 126976)) || (((/* implicit */_Bool) arr_2 [i_3 - 1]))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_8))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(var_3)));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((arr_0 [i_0] [i_1]) - (arr_0 [i_4] [(short)10]))) + (((/* implicit */unsigned int) (+(126976)))))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        arr_15 [i_1] = ((/* implicit */signed char) (-(arr_13 [i_1 - 2] [i_1 + 1] [i_1 + 1] [14ULL] [i_1 - 1] [(signed char)6])));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_14 [i_5]))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            var_21 -= (((-(arr_5 [i_0] [i_2] [i_5] [i_6 - 1]))) ^ (min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 2]))) : (3826636897U))), (((((/* implicit */_Bool) -126949)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [17] [(_Bool)1]))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [0] [12LL]), (((/* implicit */long long int) var_8))))) ? (((arr_2 [i_0]) - (arr_2 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_12)) % (arr_11 [i_0] [i_1] [(unsigned char)17] [i_5] [i_6] [i_6 + 1]))))));
                            var_23 = ((/* implicit */unsigned long long int) arr_17 [11]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + (((/* implicit */int) arr_1 [i_1 - 2]))))) <= (max((max((((/* implicit */unsigned int) var_12)), (var_3))), (arr_5 [(_Bool)1] [i_5 + 1] [(_Bool)1] [(short)16])))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) arr_16 [(unsigned char)13] [i_5] [(short)10] [(short)10] [(unsigned char)13]);
                            var_26 = ((/* implicit */unsigned long long int) ((((arr_11 [i_5 + 1] [(_Bool)1] [(short)4] [(_Bool)1] [(unsigned short)4] [i_1 + 1]) & (arr_11 [i_7 + 2] [i_1 + 1] [i_7 + 2] [i_5 + 1] [i_1 + 2] [i_7]))) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_1] [i_7 + 1])))));
                        }
                        var_27 = ((/* implicit */_Bool) arr_9 [0U] [i_2] [i_5 - 1] [5ULL]);
                        arr_21 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1] [i_5 - 1])) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_5 + 1])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_5 + 1])))), (((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_5 + 1]))));
                    }
                }
            } 
        } 
    } 
}
