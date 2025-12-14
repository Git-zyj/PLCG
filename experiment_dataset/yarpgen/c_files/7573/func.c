/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7573
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1706618779387296113LL)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned char)44)))), (min((((/* implicit */int) (unsigned char)183)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5708234860654015722LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0 - 1])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0 - 1]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)16))))));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)221)) > ((+(((/* implicit */int) arr_4 [i_1] [7U] [i_1])))))))));
                    arr_10 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_7 [i_0 - 1] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_18 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 416982644U);
                    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)166))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (min((arr_23 [i_3] [i_4] [(unsigned char)9] [i_4] [(signed char)11]), (arr_13 [i_6] [i_6])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_4])), (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_17 [(unsigned char)3] [(unsigned char)3] [i_7])) : (((/* implicit */int) arr_12 [i_3]))))))) : (max((2948174393U), (3640379066U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_14 [i_3] [i_3])), (var_11)));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_3] [i_4] [i_3] [i_3] [i_9] [i_9])) == (((/* implicit */int) arr_11 [i_3]))));
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (654588205U)));
                                var_20 += ((/* implicit */signed char) max(((unsigned char)22), ((unsigned char)67)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
