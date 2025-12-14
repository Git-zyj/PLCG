/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89616
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
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29073))) : (var_0)))) ? (var_9) : ((-(var_6)))))));
    var_12 = (~(((/* implicit */int) ((1111458440U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_2), (var_5)))) ? (((((/* implicit */_Bool) 1111458440U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_6)) : (arr_2 [i_1])))) : (((((/* implicit */_Bool) (unsigned char)57)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))))))) : (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) 1068987815)), (((((unsigned int) var_6)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 2] [i_1] [i_2] [10U] [i_0 - 3])))))));
                                var_14 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) var_6)) / (3183508862U))))))));
                                arr_14 [i_0] [8] [i_0] [i_1] [(signed char)11] [i_0] [16U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -682440804)) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_0 - 4])) : (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (unsigned char)149);
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-52)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 + 1] [i_1 - 1] [i_2] [i_1] [i_6]))) : (arr_2 [i_1]))) : (((arr_2 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                arr_25 [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_21 [i_7] [i_7])) ^ (7U)))) ? (min((var_10), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) -699428397))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17611)) ? (((/* implicit */int) arr_24 [i_8])) : (-682440804)))) ? (((((1651276577) / (((/* implicit */int) var_2)))) / ((((_Bool)1) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_24 [i_7])))))) : (var_6))))));
            }
        } 
    } 
}
