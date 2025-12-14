/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86640
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_0 [i_0]) ? (max((((/* implicit */unsigned long long int) var_2)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                arr_12 [i_3] [(short)12] [i_1 - 2] = ((/* implicit */unsigned int) (+(arr_3 [i_1] [i_2])));
                var_11 = ((/* implicit */unsigned char) -683446445238923415LL);
            }
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [i_2 + 1] [i_4] [i_4] = ((/* implicit */unsigned char) var_7);
                var_12 = ((/* implicit */_Bool) ((unsigned char) -1913306497));
                arr_17 [i_4] = ((/* implicit */unsigned char) var_6);
                var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (67108863U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1]))) : (var_4)));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_20 [i_1 + 1] = var_8;
                arr_21 [i_5] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((unsigned char) arr_13 [i_1] [i_1] [(short)12] [(short)12])))));
                var_14 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_13 [i_1] [i_1] [(_Bool)1] [i_1 - 2]))))));
            }
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (4294967280U) : (((/* implicit */unsigned int) 2147483624))));
        }
        var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_1])) * (((/* implicit */int) arr_8 [6] [(_Bool)1] [(_Bool)1])))) * (((/* implicit */int) arr_6 [i_1]))));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-114));
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_18 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_6]))))));
        var_19 += ((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_6])), ((+(((/* implicit */int) (unsigned char)76))))));
    }
    var_20 = var_6;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((int) min((var_8), (((/* implicit */unsigned short) var_0)))))) : ((-(((var_7) + (var_4)))))));
    var_22 = ((/* implicit */_Bool) var_3);
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1024)) ? (531416256U) : (1369683994U)))) * ((+(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_5))))))))));
}
