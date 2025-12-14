/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63062
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_13 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 2147483647)) & (8402194449999090655ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [(short)6] [i_0]), (arr_3 [(_Bool)1] [(_Bool)1])))))));
                var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) max((-1298051902), (((((/* implicit */int) arr_8 [i_2 - 1] [i_2])) * (((/* implicit */int) var_7))))));
                var_16 |= ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_6 [(signed char)1])), (min((((/* implicit */unsigned int) arr_8 [i_3] [(unsigned char)4])), (571754776U))))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    var_17 ^= arr_12 [i_2] [i_2];
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)106)))) - ((+(((/* implicit */int) arr_13 [i_2 - 1] [i_4 - 1] [i_4]))))));
                    var_19 = ((/* implicit */signed char) ((max((((var_8) & (var_0))), (((/* implicit */unsigned long long int) 4294967295U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2])), (arr_7 [i_2])))) | (((/* implicit */int) arr_13 [i_3] [18U] [i_4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)-4535), (((/* implicit */short) (unsigned char)0))))) >> ((((~(((/* implicit */int) (unsigned short)0)))) + (12)))));
                                var_22 = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (signed char)-126)))))) - (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)2)), (-2094590882)))) ? (((arr_11 [i_2] [i_3] [i_2] [i_3]) - (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31459))))));
                }
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [i_2] [i_2 + 1]))))) : (((((/* implicit */unsigned long long int) 5778680260209842184LL)) - (var_8))));
                    var_25 = ((/* implicit */short) (-((-(((((/* implicit */int) arr_6 [i_3])) / (((/* implicit */int) (signed char)-59))))))));
                    var_26 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_19 [i_7] [i_2] [i_2]), (((/* implicit */short) (_Bool)1))))))))));
                    var_27 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 5778680260209842184LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14708))) : (140737488224256LL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 2) 
                    {
                        var_28 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_2 + 1] [i_3] [i_8 + 1] [i_8 - 1]))))) : (((arr_9 [i_8 + 2] [i_2 - 1] [(unsigned char)6]) ? ((-(4632076832980688047ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) (signed char)-1)))))))));
                        var_29 = ((/* implicit */unsigned long long int) ((signed char) arr_14 [i_2] [i_2] [i_2] [i_2 - 1]));
                    }
                }
            }
        } 
    } 
}
