/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8005
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
    var_12 = ((/* implicit */long long int) (((+(((/* implicit */int) var_1)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_4)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) 764420921);
        var_14 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) arr_1 [i_0 - 1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_0] [i_4 - 1] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-111))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1] [(signed char)1] [i_0]))) & (min((var_4), (arr_3 [i_0])))))));
                            arr_15 [i_0] [i_0] [i_0] = (signed char)-111;
                            var_15 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(arr_3 [i_0])));
            var_16 = ((/* implicit */long long int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
        }
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_12 [(unsigned short)17] [(unsigned short)17] [i_5]) : ((~(arr_12 [i_5] [i_5] [i_5]))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_9 [i_8] [i_7] [i_7])) && (((/* implicit */_Bool) arr_1 [i_5]))))));
                            arr_34 [i_5] [i_6] [i_6] [i_8] [i_9] = ((/* implicit */unsigned short) arr_28 [i_5]);
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [i_8] [i_8] [i_7] [i_6])) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_26 [i_5] [17ULL] [i_7] [i_8])) > (((/* implicit */int) arr_18 [4]))))) - (1)))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_1 [i_5])))), (((/* implicit */int) arr_4 [i_5] [i_5]))));
        }
        arr_35 [(signed char)1] [i_5] = ((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5] [i_5]);
    }
}
