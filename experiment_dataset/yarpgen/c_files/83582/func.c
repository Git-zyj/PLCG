/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83582
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
    var_11 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) (~((~(var_2)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_10)))) || ((!(((/* implicit */_Bool) var_6))))));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_9))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) var_8)))))))))));
        }
        var_15 = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) var_6)) > (var_8))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_7 [i_2] = ((/* implicit */short) ((4109457171U) << (((/* implicit */int) (_Bool)0))));
        arr_8 [i_2] = ((/* implicit */_Bool) (~((~(max((((/* implicit */unsigned int) (unsigned char)0)), (2208442325U)))))));
        var_16 -= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) arr_0 [(short)18])));
    }
    var_17 = ((/* implicit */_Bool) (~(var_10)));
    /* LoopSeq 4 */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((arr_6 [i_3]) != (((/* implicit */unsigned int) var_6))))) : (((/* implicit */int) ((short) var_6))))) >> (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))) / (2208442334U)))));
        arr_11 [10ULL] &= ((((((/* implicit */int) ((signed char) (short)32743))) + (2147483647))) << (((((var_2) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)6]))) + (var_10))))) - (2147089564U))));
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) * (var_10)))) ? ((+(var_6))) : (((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) - (((/* implicit */int) var_4))))));
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) ((var_7) + (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)20] [i_4] [i_4]))) : (var_8)));
    }
    for (unsigned int i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (+(max((arr_15 [i_5 - 2] [i_5]), (var_1)))));
        var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_5 + 1] [(unsigned char)5]) : (arr_15 [i_5 + 1] [i_5 - 3]))));
        arr_17 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_0 [i_5 + 2])))));
        var_23 = ((/* implicit */_Bool) ((max((var_6), (((/* implicit */int) var_0)))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)14] [i_5 + 2] [(unsigned short)14])) || (((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 + 2] [i_5 + 2])))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */short) (((-(((var_5) / (var_10))))) >> (((/* implicit */int) ((max((var_7), (((/* implicit */long long int) arr_13 [i_5 - 2])))) >= (var_1))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_5 - 1] [i_6] [i_6])) + (2147483647))) << (((((/* implicit */int) var_9)) - (31174)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_3 [i_5 - 1] [i_5] [i_6]))))))))));
        }
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) var_8);
        var_27 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (_Bool)0))));
    }
    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (((var_5) >> (((var_2) - (2094626937U))))))))));
}
