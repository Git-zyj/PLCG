/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66562
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
    var_13 = ((/* implicit */signed char) min((var_13), (var_8)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = var_10;
        arr_2 [i_0] = var_12;
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [16U] [i_1 + 1] [16U])))) << (((((/* implicit */int) var_9)) - (19)))));
            var_15 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)70)) < (((/* implicit */int) var_2)))))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) var_8);
                            var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 3916238387U)) ? (2461644507U) : (((/* implicit */unsigned int) 21411111))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (-1)));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)6)) ? (-21411098) : (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (_Bool)1)))))))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) max((var_0), (((/* implicit */signed char) arr_0 [i_0] [i_0]))))))))));
            var_22 = ((/* implicit */_Bool) 2358421672U);
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_11 [i_2 + 3] [i_2 + 3] [i_2]), (arr_11 [i_2 + 3] [i_2 + 3] [i_2])))) << (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_0)))))));
        }
        for (int i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_4)))) << (((((/* implicit */int) ((((/* implicit */int) (signed char)-39)) >= (-318508293)))) / (((/* implicit */int) var_10))))));
            var_25 *= ((/* implicit */signed char) (!((!((_Bool)1)))));
            var_26 = ((/* implicit */unsigned long long int) min((arr_18 [i_0] [i_0]), (var_10)));
        }
    }
    var_27 = var_4;
}
