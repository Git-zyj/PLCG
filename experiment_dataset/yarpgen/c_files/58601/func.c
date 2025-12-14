/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58601
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * ((~(((/* implicit */int) var_17))))));
    var_21 = var_16;
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10351))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 8796496221879733744LL)) > (4ULL)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_23 += ((/* implicit */long long int) arr_2 [i_0]);
        arr_4 [i_0] |= (-(arr_0 [i_0 + 2]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 24; i_1 += 2) 
    {
        var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) & (18446744073709551601ULL)));
        var_25 = ((/* implicit */long long int) arr_5 [(unsigned short)9]);
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1 - 2])))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21346))) & (6ULL))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned char)0))))));
        var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)-30591)), (((((/* implicit */_Bool) 16602692776706156069ULL)) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                {
                    var_29 = ((/* implicit */int) ((18446744073709551594ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_15 [i_3]) ? (arr_13 [i_2] [i_4] [(unsigned short)15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) > (arr_13 [i_2] [i_2] [i_2])))))));
                    arr_16 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3] [i_2]))))) && (((/* implicit */_Bool) arr_14 [i_2]))));
                    arr_17 [10ULL] &= ((/* implicit */unsigned short) arr_6 [i_2]);
                    var_30 = ((/* implicit */unsigned short) ((max((var_14), (((/* implicit */unsigned int) arr_15 [i_4 - 1])))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) arr_15 [i_4 + 1]))))))));
                }
            } 
        } 
    }
    var_31 ^= ((/* implicit */unsigned long long int) 1688408659U);
}
