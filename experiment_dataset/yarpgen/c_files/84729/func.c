/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84729
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
    var_12 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) -1930757158)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19769)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) arr_9 [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_1 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_11 [i_0 - 4] [i_1 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 1] [i_3 - 1] [i_4 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)527)))))));
                                arr_16 [i_0 + 2] [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_4 - 1] = ((/* implicit */unsigned short) arr_3 [i_3]);
                                var_14 = ((/* implicit */int) min((arr_4 [i_0] [i_1 - 1] [i_1 - 1]), ((-(18446744073709551610ULL)))));
                                arr_17 [i_2] = ((/* implicit */short) ((((((((var_4) + (2147483647))) >> (((((/* implicit */int) var_11)) - (20209))))) % (((((/* implicit */_Bool) var_8)) ? (-1930757134) : (((/* implicit */int) var_3)))))) + (min((max((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_3] [i_4 - 2])), (arr_5 [i_1] [i_2] [i_3 - 1] [i_3 - 1]))), (((((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1])) ^ (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_2]))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)5897))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)59638))))) * (min((8063907261477701369ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59629)) | (((/* implicit */int) (unsigned char)3)))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1 - 1] [i_1] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((long long int) var_5)), (arr_10 [i_0 - 1] [i_1 + 3] [i_1])))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2123456861U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59632)) >= (((/* implicit */int) var_3)))))) : ((-(var_8))))), (((long long int) (_Bool)1))));
    var_16 -= ((/* implicit */unsigned short) ((short) ((short) var_1)));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_8)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_10)) & (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_0)), (-2147483643)))) : (min((var_8), (((/* implicit */long long int) var_1))))))));
}
