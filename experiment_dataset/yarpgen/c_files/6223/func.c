/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6223
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
    var_19 |= ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_20 = ((/* implicit */long long int) ((max((((/* implicit */long long int) var_7)), ((~(arr_0 [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) var_11);
                        arr_15 [i_1] [i_1] [(short)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 72057594037927920ULL)) ? (-162915486) : (((/* implicit */int) (short)6144)))))) : ((~(min((var_11), (2092150789177147917LL)))))));
                        var_22 += (((~((~(13447206622820867898ULL))))) >> (((18374686479671623702ULL) - (18374686479671623652ULL))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_5] [i_6] [1U] [i_7])) && (((/* implicit */_Bool) var_18)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)219)))))));
                        var_24 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_5] [i_5] [i_7])) & (arr_11 [17LL] [17LL] [i_7])))), (var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_20 [12ULL] [i_7] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1]))))))))));
                        arr_22 [i_1] [i_5] [15] [i_7] = ((/* implicit */int) arr_7 [i_7] [i_5]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_20 [i_1] [i_1] [i_1] [10] [i_1] [10])) & (arr_4 [i_1 + 1]))) << (((arr_8 [i_1] [i_1]) - (2104488145))))))));
    }
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((short) ((unsigned char) var_11))))));
}
