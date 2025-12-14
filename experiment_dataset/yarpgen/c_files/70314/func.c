/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70314
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
    var_17 = ((/* implicit */unsigned int) var_3);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((932919534U) | (var_8))))) && (((/* implicit */_Bool) 16U))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            var_19 += ((unsigned int) (-(((/* implicit */int) (unsigned char)26))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)57004)) : ((~(var_2)))));
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) < ((-(min((((/* implicit */int) var_12)), (var_2)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            arr_9 [i_0] = ((/* implicit */unsigned char) (unsigned short)42434);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)16640)))));
        }
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 1) 
        {
            arr_13 [i_0 - 1] [i_0] [i_0] = 5424935521925840865ULL;
            var_23 = ((/* implicit */unsigned long long int) var_7);
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)149), ((unsigned char)255))))) > (min((var_10), (((/* implicit */unsigned int) arr_3 [2ULL] [2ULL]))))))), (((13208067172090043231ULL) << (16U))))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18217076072363060967ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(4083671747U))))));
        var_26 ^= ((/* implicit */_Bool) arr_4 [0ULL]);
        arr_17 [i_4] [i_4 - 2] = ((/* implicit */unsigned char) arr_7 [i_4] [i_4] [i_4 + 1]);
    }
    var_27 = ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) ((unsigned char) 4042494733U)))), (var_9)));
}
