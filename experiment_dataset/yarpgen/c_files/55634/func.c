/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55634
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((((int) var_8)), (min((((/* implicit */int) (signed char)-1)), ((((_Bool)1) ? (977453558) : (((/* implicit */int) (signed char)-30))))))));
                    arr_8 [i_2] [i_2 - 2] = ((/* implicit */short) min((max((977453558), (((/* implicit */int) (short)-1)))), (min((arr_2 [i_0] [i_0 + 1]), (arr_2 [i_0] [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)14))) ? (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) 1865375053)) : (-2823704413005635352LL))) : (max((((/* implicit */long long int) 566818961)), (var_15))))))));
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) (unsigned char)46))), (arr_13 [i_2 + 2] [i_1 + 1] [i_2] [i_3] [i_2 + 1])));
                                var_21 = ((/* implicit */_Bool) -2147483639);
                            }
                        } 
                    } 
                    var_22 = ((_Bool) (unsigned char)224);
                    var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) (signed char)-30))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            {
                arr_19 [i_6] [i_5] [i_6] = ((/* implicit */int) (!(arr_15 [i_5] [i_6])));
                var_24 = ((/* implicit */signed char) min((536838144), (((/* implicit */int) (_Bool)1))));
                arr_20 [i_5] [i_6] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_16 [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)58477))))) : (var_8))) > (((/* implicit */unsigned long long int) max((1099511496704LL), (((/* implicit */long long int) (short)-14858)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_12), (var_13)))), (var_11)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))) : (0U)));
    var_26 = ((/* implicit */signed char) var_0);
}
