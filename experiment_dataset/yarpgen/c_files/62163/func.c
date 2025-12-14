/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62163
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)51115)) - (((((/* implicit */int) (unsigned short)51115)) % (((/* implicit */int) (unsigned short)65535))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
            {
                arr_7 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) var_7);
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)0] [i_0] [i_0] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [8] [i_1 - 1] [(_Bool)1]))) : (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (arr_6 [(_Bool)1] [10ULL] [i_2 - 2] [i_2]) : (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
            }
            for (short i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
            {
                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_3 - 2]))))) ? (((/* implicit */int) ((short) 18446744073709551615ULL))) : (((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_3 - 1]))))));
                /* LoopNest 2 */
                for (long long int i_4 = 4; i_4 < 11; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned long long int) var_8);
                            var_18 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51133))) : (2577664486864533855LL)))) ? (min((4294967277U), (((/* implicit */unsigned int) (unsigned short)51142)))) : (((/* implicit */unsigned int) 1065353216)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-31253)), ((+(1241843898)))))) : ((((_Bool)0) ? (18136183993160433686ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15499)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))))))));
            }
            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(short)5] [(signed char)2] [(short)5])) ? (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])))) : ((+(arr_14 [i_1 - 1] [i_0] [12LL])))));
        }
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7] [i_6 + 1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_5 [i_0] [i_6 - 2] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0] [i_6 + 4] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                    var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [10LL] [i_6] [10LL]))));
                    var_23 = ((/* implicit */long long int) (+((~(arr_18 [i_6 + 1] [i_6] [i_6] [i_6 - 1])))));
                    arr_22 [5U] = arr_12 [i_6 - 2] [i_0] [i_6 - 1] [i_6 + 2];
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) (~(arr_18 [i_0] [i_0] [i_0] [i_0])));
    }
    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)1536))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14421)) < (2147483647)));
    var_27 = ((/* implicit */unsigned long long int) var_12);
}
