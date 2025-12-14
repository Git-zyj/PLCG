/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72789
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
    var_10 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_4))))))));
    var_11 = ((/* implicit */unsigned char) (((-(((((/* implicit */int) var_0)) - (((/* implicit */int) var_0)))))) % (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)1023)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 7; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) var_3);
                        arr_12 [i_0 + 2] [9LL] [i_1] [7ULL] [(unsigned short)2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_1]))) >> (((((var_1) | (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])))) - (18446744072518238187ULL)))));
                        var_13 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 + 2] [(unsigned char)3] [i_0 - 1])) < (arr_10 [i_3 + 2] [(signed char)1] [i_0 - 1] [i_2 - 1]))))));
                        var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? ((+(arr_4 [i_0] [(unsigned short)1]))) : (arr_1 [i_0 - 1])))) ? (((((/* implicit */int) max((var_0), (var_0)))) % (((/* implicit */int) arr_7 [i_0] [i_1] [8LL] [(unsigned char)5])))) : (((/* implicit */int) ((((((/* implicit */int) (short)1029)) > (((/* implicit */int) arr_5 [2U] [(short)0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 743918150)) ? (-1663738047) : (((/* implicit */int) (short)-2))))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */short) (+((+(10472055674704857493ULL)))));
    }
}
