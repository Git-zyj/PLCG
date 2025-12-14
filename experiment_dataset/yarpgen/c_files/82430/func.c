/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82430
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
    var_16 = ((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_14)))))) ^ (((long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) ((((long long int) ((unsigned long long int) (unsigned short)30881))) - (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) ^ (arr_0 [i_1]))) / (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) (unsigned short)54284)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) - (var_9))))) ? (((((/* implicit */int) (_Bool)1)) * (-2114287822))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_12))))))));
                                arr_12 [i_3] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */int) arr_11 [i_2] [i_1] [i_1] [i_3] [i_1])) * (((/* implicit */int) (unsigned char)43)))))));
                                var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned short)34654)) : (-2114287800))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2 - 3]))))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) (unsigned short)11265)))))) && ((!((!(((/* implicit */_Bool) var_12))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_22 [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_7 + 3])) | (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_8)))))));
                    arr_23 [i_7 + 2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)34655)) != (((/* implicit */int) (unsigned short)34654))));
                }
            } 
        } 
    } 
}
