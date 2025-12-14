/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79683
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
    var_18 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (-(min((((/* implicit */unsigned long long int) ((unsigned int) -1194553033))), ((-(13910773659369980502ULL))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0]);
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_3])), (arr_5 [i_3] [i_1])))) ? ((~(arr_12 [i_0] [i_0] [i_2] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))))))));
                                arr_13 [i_0] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (1194553028))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_0 [i_2] [i_4])) / ((+(((/* implicit */int) (short)32767)))))));
                                var_21 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_2]))))), (((((4535970414339571114ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1048575U)) ? (1194553049) : (990557028))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
