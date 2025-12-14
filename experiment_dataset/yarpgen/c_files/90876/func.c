/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90876
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_3 [18] [13ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) <= (min((8720769129319363927ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_0 [i_0 - 3])))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0 + 2] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
                    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [22LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [9]))) : (((((/* implicit */_Bool) var_13)) ? (arr_9 [i_2 + 2] [i_1] [(short)19]) : (((/* implicit */long long int) arr_8 [i_2])))))), (((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (unsigned short)44253))))))));
                    arr_11 [i_1] = ((/* implicit */long long int) ((signed char) var_8));
                }
            } 
        } 
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)44253))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(16522248157391863828ULL)))) ? ((+(var_13))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32248)) : (var_12)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (var_13)))) ? (var_6) : ((-(((/* implicit */int) var_11))))))));
    var_17 += ((/* implicit */long long int) var_4);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) var_12)))));
    var_19 |= ((/* implicit */_Bool) var_11);
}
