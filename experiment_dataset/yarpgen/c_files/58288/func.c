/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58288
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
    var_11 ^= ((/* implicit */unsigned long long int) var_8);
    var_12 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (-(((int) min((11643130333430872220ULL), (((/* implicit */unsigned long long int) var_9)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [(unsigned char)16] [i_0] = ((var_1) >> (((((/* implicit */int) ((signed char) (unsigned char)232))) + (54))));
                        arr_13 [i_3] [i_1] [i_2 + 1] [i_0] = ((/* implicit */long long int) var_10);
                    }
                } 
            } 
            var_14 += ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) var_6)))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_0)) >> (((1679668418U) - (1679668391U))))))) ? (((((/* implicit */unsigned long long int) (~(-1LL)))) - (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 13142979758018027275ULL)))))) * (280953358U)))))))));
                var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) : ((+(var_8)))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) var_3)), ((-(((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) arr_9 [i_4 + 3] [i_5] [i_5] [i_5])) : (var_1)))))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((short) arr_4 [6LL]));
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_19 [i_4 - 3] [i_4] [i_4 - 2])), ((~(((((/* implicit */_Bool) 3989590506U)) ? (8411817680019599374LL) : (((/* implicit */long long int) var_8))))))));
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) arr_6 [i_4 - 2] [i_4])) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18021))))))) / (((/* implicit */unsigned long long int) var_1))));
                }
            }
        } 
    } 
}
