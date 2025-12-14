/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93467
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
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            var_11 = ((/* implicit */_Bool) 2325100610U);
            var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) ((unsigned char) 2018612569U)))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_4))))) ? (max((((/* implicit */unsigned long long int) 1152851135862669312LL)), (11306994543145714775ULL))) : (((/* implicit */unsigned long long int) -1LL))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [24U] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_2 [i_1 + 2] [i_1]), (arr_2 [i_1 + 2] [i_1]))))));
                        arr_12 [i_1] [i_1 + 1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */signed char) var_4))))) ? (((/* implicit */long long int) ((int) (unsigned short)4645))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((unsigned long long int) var_2))));
                        arr_13 [i_0 + 1] [i_1] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */short) (-(((/* implicit */int) ((short) arr_2 [i_1 + 2] [i_1 - 2])))));
                    }
                } 
            } 
            var_13 += ((/* implicit */unsigned long long int) 144115188075790336LL);
        }
        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) % (((max((-144115188075790326LL), (((/* implicit */long long int) 1741962969U)))) - (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0]))))))));
        arr_14 [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) ((arr_10 [i_0]) % (arr_4 [i_0] [i_0] [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            arr_25 [i_6] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)253))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15673)) ? (((/* implicit */int) arr_15 [i_0 - 4] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_6]))))) ? (((long long int) -144115188075790336LL)) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                            arr_26 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15673))) + (-1LL)))), (max((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                            var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_16 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_16 [i_0 - 1])))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 144115188075790327LL)) ? (-1327600235) : (((/* implicit */int) (_Bool)1))));
                            arr_27 [i_6] [i_4] [(unsigned short)18] [i_6] [(unsigned short)18] = ((/* implicit */unsigned short) arr_22 [i_0 - 4] [i_6] [i_0 - 1] [i_6] [i_7]);
                        }
                    } 
                } 
            } 
            var_17 &= ((/* implicit */unsigned long long int) var_5);
            arr_28 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)32762)) ? (144115188075790336LL) : (-1LL)))));
            arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0 - 1] [i_4] [i_0] [i_4] [i_0 - 2]))))) == (max(((~(var_8))), (((/* implicit */long long int) arr_22 [i_4] [i_0] [i_0 - 2] [i_0] [i_0]))))));
        }
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((1969866686U), (((/* implicit */unsigned int) (unsigned char)0))))), (var_8)));
    }
    var_19 = ((/* implicit */short) var_8);
}
