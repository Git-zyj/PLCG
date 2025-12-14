/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75087
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
    var_17 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */signed char) (-(((int) arr_4 [i_0] [i_1] [i_2]))));
                    var_18 *= ((/* implicit */_Bool) arr_4 [i_2 + 3] [i_2] [i_2 + 3]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_3])) * (((/* implicit */int) arr_5 [i_0] [i_3] [i_3]))));
            var_19 |= ((/* implicit */unsigned short) (-(-1773027823)));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((arr_4 [i_3] [i_4] [i_6]) >> (((1773027822) - (1773027808)))));
                            arr_18 [i_0] [i_3] [i_0] [i_5] [i_6] = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            } 
            var_21 -= ((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_3] [i_3])));
        }
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (arr_17 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [(_Bool)1])) + (2147483647))) >> (((arr_17 [i_0] [i_0]) - (14155641865333918287ULL)))))))))));
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((-1773027823), (((/* implicit */int) arr_2 [14ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) arr_1 [8ULL]))));
        arr_24 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_7])) | (((/* implicit */int) (unsigned char)226))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)9))))) % (max((((/* implicit */long long int) arr_11 [10] [i_7])), (var_10)))))));
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) min((((long long int) arr_19 [i_7])), (((/* implicit */long long int) var_14))));
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned short) 15674034903038104532ULL))) >> (((max((((/* implicit */unsigned long long int) (short)-25269)), (var_7))) - (18446744073709526330ULL)))))));
        arr_26 [i_7] = ((/* implicit */_Bool) ((var_13) ? (arr_10 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) > ((+(arr_17 [i_7] [i_7])))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_9] [i_10 - 1] [i_9])) | (((/* implicit */int) (short)25269)))))));
                        var_25 = ((/* implicit */short) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (-((-(9223372036854775807LL))))))));
                    }
                } 
            } 
        } 
        arr_37 [i_8] [i_8] = ((/* implicit */long long int) min(((unsigned char)0), ((unsigned char)238)));
    }
}
