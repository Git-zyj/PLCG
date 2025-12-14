/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80054
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((3286862112U), (((/* implicit */unsigned int) 0)))))));
        var_14 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))) ^ ((-(15012027005780500676ULL))))), (((/* implicit */unsigned long long int) ((var_3) == (((/* implicit */unsigned long long int) var_2)))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1008105183U)) ? (((/* implicit */int) (short)-27500)) : (1210416686))), (((/* implicit */int) ((((/* implicit */int) var_0)) == (var_2))))))) ? (min((((/* implicit */int) (unsigned char)222)), (((((/* implicit */_Bool) 3286862085U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [10])), ((unsigned char)52))))))))))));
        var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (arr_2 [i_0] [i_0 - 2])))) ? (((/* implicit */int) (unsigned char)255)) : ((+(((/* implicit */int) arr_2 [(short)4] [i_0 - 1]))))));
        var_17 = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */int) (signed char)27)) > (((/* implicit */int) (unsigned char)255))))) * ((-(((/* implicit */int) (signed char)-1))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                {
                    var_18 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)10)))), (((/* implicit */int) (signed char)0))))));
                    arr_10 [i_1] [i_2] [(short)11] = (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) ^ ((+(((/* implicit */int) arr_8 [i_3 + 1] [i_2 + 1] [i_2 - 1])))));
                }
            } 
        } 
        arr_11 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)4] [(signed char)4])) ? (((/* implicit */int) ((((/* implicit */_Bool) -569866071)) && (((/* implicit */_Bool) (signed char)6))))) : (((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_1])), ((signed char)-16))))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = min((((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)236))))) < (var_8)))), (arr_8 [(signed char)14] [i_4] [i_4]));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_6 [i_4] [i_4])))), (((/* implicit */int) max((arr_14 [i_4]), (((/* implicit */short) arr_6 [i_4] [i_4])))))));
        var_19 = ((/* implicit */signed char) max((var_19), (arr_2 [i_4] [1LL])));
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_3))));
}
