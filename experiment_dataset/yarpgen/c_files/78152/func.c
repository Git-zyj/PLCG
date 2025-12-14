/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78152
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27722))) : (18058646552535406035ULL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_11 [i_1] [i_3] [i_2] [i_1 + 1] [i_1] = ((/* implicit */short) 4767352356526083899ULL);
                                arr_12 [i_1] [i_1 - 2] = ((/* implicit */signed char) arr_6 [i_4] [i_3] [i_2]);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1 - 3] [i_1 - 1] = ((/* implicit */unsigned int) 481036337152ULL);
                    arr_14 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1 - 2]);
                    arr_15 [i_1] [i_1 - 2] [i_1 + 2] [i_2] = (signed char)-105;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 123532763U)), (388097521174145580ULL)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_1)))))))));
    var_17 = ((/* implicit */short) 2179052761031709119ULL);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) arr_26 [i_5] [i_5]);
                            arr_27 [i_5] [i_6 + 1] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (1139509437U)))) ? (arr_4 [i_5] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(arr_7 [i_5] [i_8] [i_5] [i_8]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            arr_34 [i_9] [i_6 - 2] [i_9] [i_10] [i_5] [i_10] = 18446743592673214471ULL;
                            var_19 = ((/* implicit */unsigned int) min((var_19), ((+(arr_23 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                arr_42 [i_5] [i_6 + 1] [i_11] [i_13] = ((/* implicit */unsigned long long int) (unsigned char)78);
                                arr_43 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_41 [i_5] [i_6 - 2] [i_13] [i_11] [i_13] [i_6 - 2] [i_5]))))))), (4957015597944308345ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
