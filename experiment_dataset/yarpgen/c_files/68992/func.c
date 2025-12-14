/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68992
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
    var_13 = ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) (unsigned short)38415)) | (var_5))) : ((~(0))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_14 = var_5;
            var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : ((~(var_8))))))));
            var_16 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_1 [i_0] [i_0])))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_11 [i_0] [i_2 - 2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) 270277009)))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */unsigned int) (~(arr_7 [i_3] [i_5])));
                            arr_18 [i_0] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)127)) ? (8813112363470001320ULL) : (((/* implicit */unsigned long long int) 242067449U))));
                            arr_19 [i_3] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) (unsigned char)125)));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2 + 1] [i_2] |= ((/* implicit */long long int) ((arr_15 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((int) -1448631617)))));
                var_18 = ((/* implicit */unsigned char) ((long long int) (-(var_5))));
            }
            for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                arr_23 [(short)1] [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_5)) * (arr_9 [i_6 - 1] [i_6 - 2] [i_6 - 1])));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_6 + 1] [i_2] [i_6] [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((short) 1976027612973832324ULL))) : ((+((-2147483647 - 1))))));
                var_20 ^= ((/* implicit */unsigned int) var_2);
            }
            arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) << (((arr_21 [i_0] [i_2 - 2]) - (1208508477U)))));
            var_21 = ((/* implicit */short) ((unsigned short) (short)3848));
        }
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (var_5)))))))))));
    }
    /* vectorizable */
    for (short i_7 = 4; i_7 < 10; i_7 += 2) 
    {
        var_23 += ((/* implicit */int) ((unsigned char) (unsigned char)255));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((unsigned char) ((((/* implicit */int) var_11)) + (var_5))))));
    }
    var_25 &= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)0)) ? (3318276176U) : (var_6)))))));
}
