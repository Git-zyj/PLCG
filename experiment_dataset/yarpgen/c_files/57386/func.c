/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57386
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (unsigned char)158))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */signed char) max(((-(((/* implicit */int) arr_6 [i_0 - 4] [i_0] [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) (!(((arr_4 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0 - 4] [i_1] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) (-(min((min((7422667401826611359ULL), (((/* implicit */unsigned long long int) 1457082652U)))), (arr_1 [i_4])))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0 - 2] [i_0] [i_0] [4]), (var_1))))) <= (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)50450))))) & (((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 3])) : (arr_9 [3LL] [i_2] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_11 [i_0 - 1] [i_1 + 2] [i_1] [i_2] [i_2]), (arr_8 [4ULL] [i_1] [i_1 - 1] [i_1] [i_1 + 3] [12ULL]))))));
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) 1599456506);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_1 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_1 + 3]))) : (((unsigned long long int) (unsigned short)27533))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [7ULL] [i_1 + 3] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))) : (max((((/* implicit */unsigned long long int) ((int) var_6))), ((+(var_4))))))))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned long long int) var_0);
}
