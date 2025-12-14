/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70125
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
    var_16 = ((/* implicit */short) (-(var_1)));
    var_17 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-64))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [5ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)20484)) || (((/* implicit */_Bool) -519228614))));
                                var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (short)23877)), ((-(519228621))))) <= (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned short)65535))))));
                                var_20 = ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_0] [i_0] [(unsigned short)8]))) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (short)23898)) ? (((/* implicit */unsigned long long int) 615539267)) : (arr_3 [(signed char)7] [i_2 - 2] [(short)6]))));
                            }
                        } 
                    } 
                    arr_16 [(signed char)8] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (2106890499)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((894602680) == (((/* implicit */int) (unsigned short)40992)))))) : (((((/* implicit */_Bool) (short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23898)))))));
                    var_21 = ((/* implicit */unsigned short) var_13);
                    arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31744))))) ? (arr_9 [9ULL] [i_1] [i_2]) : (arr_9 [i_2 - 2] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 711790510)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned short)16256)) : (((((/* implicit */_Bool) var_4)) ? (112351706) : (((/* implicit */int) (short)23908)))))))));
}
