/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90701
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
    var_16 = ((/* implicit */int) (unsigned short)32767);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) ((15072723632525439733ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))))))));
                var_17 |= ((/* implicit */unsigned char) ((long long int) 2934763612U));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) (~(max((arr_5 [i_3] [i_1 - 1] [i_0]), (((/* implicit */int) (signed char)-44))))));
                            var_19 = var_9;
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]);
                                arr_18 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1])) : (((/* implicit */int) (signed char)-4))))));
                                var_20 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (min((((/* implicit */unsigned int) var_4)), (1360203683U)))))));
                            }
                            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                var_21 ^= (~(((int) arr_20 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])));
                                arr_22 [i_3] [i_0] [i_2] [i_5] [i_5] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_3] [i_2] [i_1] [i_1] [i_0])) <= (((/* implicit */int) var_14)))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0])))))));
                            }
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_2 [i_3]))));
                            var_23 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_2 [i_2])) && ((_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (int i_7 = 4; i_7 < 9; i_7 += 1) 
        {
            {
                arr_27 [i_7] = ((/* implicit */unsigned int) (short)-7776);
                arr_28 [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) (~(2205514986U))))), ((~(((((/* implicit */_Bool) arr_9 [i_7] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_6]))))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned char i_9 = 4; i_9 < 9; i_9 += 4) 
                    {
                        {
                            arr_33 [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned int) arr_29 [i_8] [i_8] [i_8] [i_8]);
                            arr_34 [i_7] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_21 [i_9] [i_7 - 1] [i_9] [i_9 - 3] [i_9] [i_7 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
