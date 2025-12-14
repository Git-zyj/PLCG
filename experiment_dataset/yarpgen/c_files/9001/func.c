/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9001
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_5 [i_1])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))) - (max(((~(arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3] = ((/* implicit */short) min(((~(min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_5 [i_0]))))), (((/* implicit */unsigned long long int) (((~(arr_6 [i_0] [i_1] [i_2] [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [4U]))))))));
                                var_13 = ((/* implicit */long long int) arr_7 [i_3]);
                                arr_13 [i_0] [i_1] [i_2] [i_2] [(unsigned char)4] [i_4] = ((/* implicit */unsigned short) (~(arr_5 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1)) ^ (((int) -1626085771))))) * (4398046494720ULL)));
                    arr_21 [i_7] [i_6] = ((/* implicit */int) ((signed char) 18446739675663056914ULL));
                    var_15 = min((((/* implicit */long long int) arr_15 [i_5])), (arr_4 [i_5] [i_6] [i_5]));
                    var_16 = ((/* implicit */short) arr_0 [i_5] [i_5]);
                    var_17 = ((/* implicit */signed char) ((long long int) 18446739675663056895ULL));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_9), (var_2)));
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 13; i_8 += 2) 
    {
        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (((-(min((arr_11 [i_9] [i_8]), (((/* implicit */long long int) arr_9 [i_9] [i_9] [i_9] [i_8 - 1] [i_8])))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_8] [i_9 + 2])))))))));
                var_20 = ((/* implicit */long long int) arr_27 [i_8] [i_8] [(unsigned short)1]);
            }
        } 
    } 
}
