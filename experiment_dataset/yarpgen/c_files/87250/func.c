/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87250
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 = ((((((((/* implicit */int) (short)-2217)) + (2147483647))) << (((var_7) - (1401231626))))) > (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_11))))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] &= ((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 2]);
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
    }
    for (int i_2 = 3; i_2 < 23; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2])) || (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) && ((_Bool)1)))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) * (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)122)))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) < (var_2)))))))));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_2 - 2] [i_3]);
        }
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) | (((((((/* implicit */int) (signed char)-67)) + (2147483647))) >> (((((/* implicit */int) (signed char)-81)) + (98)))))));
    }
    for (int i_4 = 3; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 2] [i_4 + 1])) ? (arr_17 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4 - 1] [i_4])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1391)))))))));
        arr_20 [i_4] [21U] = ((/* implicit */int) arr_18 [i_4] [i_4 - 1]);
        arr_21 [i_4] = ((/* implicit */long long int) (short)2217);
    }
    var_17 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
    {
        var_18 = ((/* implicit */short) (signed char)80);
        var_19 *= ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (short)-2217)))))))));
        var_20 -= ((/* implicit */int) arr_9 [i_5]);
    }
}
