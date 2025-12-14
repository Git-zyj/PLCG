/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95756
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3380754745U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (5U)));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4)))) : (((/* implicit */int) ((short) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = arr_2 [i_0] [i_0];
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((arr_2 [i_1] [i_0]), (((/* implicit */long long int) (short)-24646))))) ? (((/* implicit */int) arr_0 [i_1])) : (min((((/* implicit */int) (_Bool)1)), (arr_1 [i_0] [3ULL])))))));
                arr_5 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_1 [i_1] [i_1])))) ? (((min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_0] [i_0]))) >> (((((unsigned long long int) (unsigned short)36289)) - (36229ULL))))) : (((/* implicit */long long int) min((min((arr_3 [i_0]), (((/* implicit */int) (_Bool)1)))), ((-(arr_1 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)13949), ((short)-13961))))))), (((14321919930299044707ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43410)))))));
                            arr_10 [i_0] [(short)0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) var_13);
                            var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)237))))));
                            var_19 = ((/* implicit */unsigned short) ((unsigned char) var_6));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) var_8)), (((long long int) (_Bool)1)))))));
}
