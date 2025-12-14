/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75573
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [1ULL] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) == (18446744073709551610ULL)))))), (min((((/* implicit */int) ((_Bool) arr_1 [i_1]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))))))))));
            }
        } 
    } 
    var_17 = (((+(var_6))) - ((-(min((var_6), (((/* implicit */int) (unsigned char)54)))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2]))))), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (unsigned short)23113)) : (2147483647))) : (((/* implicit */int) ((_Bool) arr_0 [i_2 - 1] [i_2]))))))));
                    arr_14 [i_2] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) != (18446744073709551610ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_2)))))))) : (((((/* implicit */_Bool) ((int) (unsigned char)92))) ? (arr_8 [9U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-8), (((/* implicit */signed char) (_Bool)0))))))))));
                    arr_15 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_7 [i_2] [i_2 - 2]), (arr_7 [i_3] [i_2 + 1])))), (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_2 - 2] [i_3] [i_2 - 2]) : (-1))))));
                }
            } 
        } 
    } 
}
