/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93439
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
    var_19 = max((var_12), (((/* implicit */unsigned char) ((min((var_11), (((/* implicit */unsigned long long int) var_7)))) > (((((/* implicit */_Bool) 15364687571654593630ULL)) ? (var_11) : (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1 + 3] [i_2 - 3] [i_3 + 2] [i_1] = ((/* implicit */long long int) arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 3]);
                                var_20 *= ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) var_4)), (var_1))), (((/* implicit */unsigned long long int) arr_13 [i_3 - 2] [i_3 - 2] [i_1 + 2] [i_3])))) >> ((((~(((/* implicit */int) (unsigned char)157)))) + (216)))));
                                arr_17 [i_0] [i_1 - 2] [i_2] [i_1] [i_4] = max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_1] [i_3 + 1] [(unsigned char)8] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_2 [i_0])))))), (min(((~(arr_7 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((int) arr_0 [i_3]))))));
                                var_21 += ((/* implicit */unsigned char) arr_15 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 3]);
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [(signed char)16] [i_1] = (signed char)-95;
                var_22 = ((/* implicit */int) max((((((/* implicit */int) arr_9 [i_0] [i_1])) < (((/* implicit */int) arr_9 [i_0] [i_1 + 2])))), (((((/* implicit */int) (signed char)-64)) != (((/* implicit */int) arr_9 [i_0] [i_0]))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3]))))) > (((unsigned long long int) ((((/* implicit */int) (signed char)40)) > (0))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_0);
    var_25 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-95)))), (((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)10)))))) << (((((((/* implicit */_Bool) var_17)) ? ((-(var_2))) : (min((var_11), (((/* implicit */unsigned long long int) var_0)))))) - (11430199149352386873ULL)))));
}
