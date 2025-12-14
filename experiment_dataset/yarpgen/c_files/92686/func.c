/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92686
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) var_9);
                    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_0]))))))))));
                    arr_7 [(unsigned char)8] [i_1] [(signed char)11] [i_0] = (-(min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((var_12) != (var_9))))) | (((((/* implicit */long long int) ((/* implicit */int) var_17))) * (var_3))))) << (((var_1) - (7375761053209881478ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_11 [i_3]), (arr_11 [i_3])))) - (((((/* implicit */int) arr_10 [i_3 + 2])) + (((/* implicit */int) var_2))))));
                        var_23 = ((/* implicit */unsigned char) ((((unsigned int) var_4)) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4] [(unsigned short)13] [i_3]))))))));
                        var_24 = ((/* implicit */short) min((min((((/* implicit */int) arr_13 [i_4 - 1] [i_3])), (var_14))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (min((var_13), (var_15))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (min((((/* implicit */unsigned long long int) arr_12 [i_3 + 1])), (var_1))) : (((/* implicit */unsigned long long int) ((int) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [(short)9] [i_3])) && (((/* implicit */_Bool) (+(arr_18 [i_3 + 1] [i_3 + 2]))))));
        arr_22 [i_3] = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) ((unsigned short) 3376899228U))))));
        var_27 = ((/* implicit */long long int) ((short) ((arr_9 [i_3]) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3 - 1])) | (((/* implicit */int) arr_13 [i_3] [i_3]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_3] [i_3] [i_8] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)64900))));
                    var_28 = ((/* implicit */signed char) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                }
            } 
        } 
    }
}
