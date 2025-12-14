/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6709
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_5)))));
            var_12 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? ((+(((981823517251167604ULL) - (4538936281757835231ULL))))) : (min((arr_3 [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [(signed char)9])))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_2] [i_1] [12] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) 304657494U)), (arr_2 [i_0]))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (signed char)42))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_3 + 1])) : (((/* implicit */int) arr_10 [i_3] [i_1] [i_3 - 1])))) != (((/* implicit */int) (((+(4538936281757835231ULL))) > (((/* implicit */unsigned long long int) var_1)))))));
                            var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (3238517961U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_6))))) : (((long long int) -1823551776)))), (((/* implicit */long long int) var_4))));
                            var_14 = ((/* implicit */unsigned int) (~(min((-1823551776), (((/* implicit */int) (unsigned short)53829))))));
                            arr_15 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) var_10);
                        }
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_1] [i_0])))) ? (((arr_1 [(unsigned short)3] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32583))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)86))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 4043095575U)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0])) ? (((((arr_2 [i_0]) + (9223372036854775807LL))) << (((9728571855258195035ULL) - (9728571855258195035ULL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_0]))))))))));
                    }
                } 
            } 
        }
        var_16 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned short) (unsigned short)53820))), (var_1)));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 3238517961U)) / (-5769624215610405692LL)));
        var_18 = ((/* implicit */_Bool) max((((unsigned short) arr_8 [i_0])), ((unsigned short)18016)));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) ((unsigned short) 2116622403U));
        arr_21 [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_5]))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_8 [7U]);
    }
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6] = var_8;
        var_19 *= ((/* implicit */unsigned short) (+((-((~(var_2)))))));
        var_20 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) arr_16 [11] [11])));
        var_21 -= ((/* implicit */_Bool) ((unsigned int) (+((-(((/* implicit */int) var_3)))))));
        arr_27 [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-15564))));
    }
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
}
