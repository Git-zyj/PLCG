/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96906
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (arr_2 [i_0])));
                var_12 = ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((long long int) (short)(-32767 - 1))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32757))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 14; i_2 += 2) 
    {
        var_13 = ((/* implicit */short) min((max(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (2147483634))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned char)109), ((unsigned char)220)))) : (((((/* implicit */int) arr_4 [i_2] [i_2])) ^ (((/* implicit */int) arr_2 [i_2]))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_16 [i_3 + 1] [i_4 - 2])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_16 [i_3 - 2] [i_4 - 3])) : (((/* implicit */int) var_2))))));
                        var_15 = ((/* implicit */long long int) 1064993637);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1064993622)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967279U)))))) ? (((/* implicit */unsigned long long int) 1064993622)) : (max((arr_12 [i_2 - 3] [i_4 + 1] [i_3 - 1]), (arr_12 [i_2 - 1] [i_4 + 3] [i_3 - 1])))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min(((-(max((((/* implicit */long long int) var_2)), (arr_5 [i_2] [i_2] [15ULL]))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))), ((+(1064993622))))))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_2 - 2] [i_2 - 2]))))) ? ((-(((int) (short)32767)))) : (((int) max((576460752303423487ULL), (((/* implicit */unsigned long long int) (short)-19088)))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_5))));
    }
    var_20 = ((/* implicit */unsigned long long int) (short)-32761);
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))));
    var_22 = ((/* implicit */unsigned int) var_6);
}
