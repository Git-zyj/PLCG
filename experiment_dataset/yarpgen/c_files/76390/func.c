/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76390
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_7), (var_0)))) & (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = max((min((((/* implicit */unsigned long long int) max((1964187724U), (1964187736U)))), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [i_0]))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 2330779574U)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))) ? (((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_11)))) % (((((/* implicit */_Bool) 1964187737U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) | (arr_0 [i_0]))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_0))));
                    var_16 += ((long long int) min((min((arr_5 [i_1]), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3])))))));
                    arr_13 [i_3] [i_3] |= min((2146959360U), (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)43594))))))));
                    var_17 |= ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_4 [i_2 + 1])))), (((((/* implicit */int) var_2)) == (arr_4 [i_2 - 1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % (arr_4 [i_1]))))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_19 -= ((((/* implicit */_Bool) 1964187734U)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))));
                arr_18 [i_1] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_15 [i_1] [i_4] [i_1]))) ? (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1] [i_4] [i_5]) : (arr_15 [i_1] [i_1] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_15 [i_4] [i_4] [i_4])))));
            }
        }
    }
    var_20 = ((/* implicit */_Bool) ((int) var_1));
}
