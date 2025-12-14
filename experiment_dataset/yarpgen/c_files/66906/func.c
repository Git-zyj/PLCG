/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66906
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((unsigned int) arr_0 [(unsigned short)15] [(unsigned short)15])) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_2] [i_3] [i_4])) | (((/* implicit */int) var_2))))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_4] [i_1]))))))))));
                                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(short)14] [i_3] [i_4]))) : (arr_2 [i_4] [i_2] [i_1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_21 [i_5] &= ((/* implicit */unsigned short) var_8);
                            var_15 *= ((/* implicit */short) ((arr_2 [i_5 + 1] [i_5 + 1] [i_5]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 166911249)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_9 [i_6] [i_1] [i_0]))))) : (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0]))) : (arr_14 [(short)13] [(unsigned short)7] [i_6]))))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_6))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 16098881708614006115ULL)))))))), (var_5)));
}
