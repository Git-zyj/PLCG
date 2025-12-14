/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99531
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
    var_14 += ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((signed char)-119), (((/* implicit */signed char) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (16383ULL))) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_13))));
    var_15 = ((/* implicit */unsigned char) min((((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (short)-20209))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((unsigned char) 198682024));
            arr_7 [i_1] = (signed char)-1;
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                arr_12 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])))))) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) -198682024))));
                var_17 += ((/* implicit */unsigned char) arr_10 [i_0 - 1]);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_1 [i_2]))));
            }
        }
    }
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) var_0);
        var_19 += (~(((/* implicit */int) (signed char)65)));
    }
}
