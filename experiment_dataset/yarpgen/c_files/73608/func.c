/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73608
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
    var_11 = ((/* implicit */short) ((var_9) << (((var_8) - (34262076693050444ULL)))));
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0] = var_3;
                        var_13 -= ((/* implicit */unsigned short) var_3);
                        var_14 = ((/* implicit */signed char) var_2);
                        arr_14 [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_3 - 3] [i_1 + 1])) >= (((/* implicit */int) var_10)))) || (((var_1) > (((/* implicit */int) arr_2 [i_3 - 2] [i_1 + 3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] = ((((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_20 [i_0])))) << (((var_8) - (34262076693050427ULL))))) + (((((/* implicit */int) arr_22 [(short)12] [i_5] [(unsigned char)10] [i_6])) / (((/* implicit */int) arr_11 [i_6] [i_6] [i_5] [i_5] [i_0] [i_0])))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((var_0) + (((/* implicit */int) var_6))))))) + (arr_7 [i_6 + 3] [i_5 + 2] [i_4 - 2])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 17; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_7);
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [6ULL] [i_5 + 2] [i_5] [i_6 + 3])) || (((/* implicit */_Bool) arr_11 [i_7] [11] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                        }
                        var_18 &= ((/* implicit */short) arr_9 [i_4 - 3] [i_0] [i_4 - 3]);
                    }
                } 
            } 
        } 
        arr_28 [i_0] [i_0] = arr_2 [(signed char)3] [i_0];
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) % (var_4))))));
        arr_29 [i_0] = ((/* implicit */int) arr_2 [(short)8] [i_0]);
    }
}
