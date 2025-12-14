/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72209
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
    var_13 = ((/* implicit */unsigned short) var_9);
    var_14 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_2))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (-1839553269)))))) ? (((((/* implicit */_Bool) ((2) >> (((var_8) - (6559213419685199287ULL)))))) ? (((/* implicit */int) ((unsigned short) var_10))) : (arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) 1659336603)) ? (((/* implicit */int) arr_5 [i_0])) : (arr_4 [i_0])))));
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1659336603))))) ^ (((int) var_4))))) ? (((/* implicit */int) arr_2 [i_0] [7])) : (((/* implicit */int) ((signed char) (unsigned short)65504)))));
            var_17 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2)), (var_4)))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_5 [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_0] [i_0] = ((unsigned short) (-(((/* implicit */int) ((var_3) <= (var_10))))));
            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2])))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_14 [i_0] [i_3] [i_4] = min((((min((2124468726), (-1659336592))) | (((/* implicit */int) ((unsigned short) var_9))))), (var_11));
                    var_19 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-(-2147483635)))) ? ((~(var_12))) : (((/* implicit */int) var_9)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            arr_18 [i_5] = ((/* implicit */int) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
            var_20 = ((/* implicit */short) ((unsigned long long int) 1659336592));
            arr_19 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((long long int) min((((((/* implicit */unsigned long long int) arr_13 [i_0] [4LL] [10] [(short)1])) ^ (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_11 [(unsigned short)1] [i_5])) : (((/* implicit */int) (signed char)67))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            arr_22 [i_6] = ((/* implicit */int) ((_Bool) var_6));
            var_21 = ((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) & (((long long int) arr_13 [i_6] [i_6] [i_0] [i_0])));
        }
        arr_23 [i_0] &= ((/* implicit */unsigned long long int) var_9);
        arr_24 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */int) (signed char)67)) | (var_12)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0])))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9)) ? (((/* implicit */int) (_Bool)0)) : (-1262548518)))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_6)) % (((/* implicit */int) var_7)))))))));
}
