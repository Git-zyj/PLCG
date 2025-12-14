/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60051
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32643))));
                    var_11 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)32654)) > (((/* implicit */int) (unsigned short)32914))))), (((arr_4 [i_0]) ? (((/* implicit */int) (unsigned short)32893)) : (((/* implicit */int) arr_4 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_2 [i_1] [i_2] [i_1]))))) : ((+((~(127ULL)))))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(142ULL)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (unsigned short)52608)))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (+(var_8)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_14 = ((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_0]);
                var_15 = ((unsigned char) arr_3 [i_0 - 1]);
                arr_13 [i_0] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                arr_14 [i_4] [i_4] = ((/* implicit */long long int) arr_7 [i_4] [i_3] [i_0] [0ULL]);
            }
            for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_3])))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((127ULL) << (((((/* implicit */int) (unsigned short)32643)) - (32622)))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_5] [i_5]))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32864)))));
                arr_17 [i_5 + 1] = ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)209))))) % (((((/* implicit */_Bool) 137438953471ULL)) ? (((/* implicit */int) (unsigned short)32643)) : (((/* implicit */int) (unsigned char)255)))));
                var_18 ^= ((/* implicit */long long int) (-(arr_2 [i_3] [i_3] [i_3])));
                var_19 = ((_Bool) 10519689269585003863ULL);
            }
            arr_18 [i_3] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (unsigned char)0);
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != ((+(17ULL)))))), (18446744073709551488ULL)))));
                            arr_30 [i_0] [i_6] [i_7 - 1] [i_8] [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_9] [i_0 - 1])) ? (((/* implicit */int) ((_Bool) arr_15 [i_0 - 1]))) : ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            } 
            var_21 = var_1;
            var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32864)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_20 [i_6] [i_0])))) : (((unsigned long long int) (unsigned short)32864))))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) 3268978293483685487ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (0LL))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (-7714731482928800149LL)))))));
}
