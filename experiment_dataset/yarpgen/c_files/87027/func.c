/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87027
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((1216823110U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7378))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_5)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((~(min((((/* implicit */unsigned int) arr_0 [i_0])), (1757576967U))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3ULL))))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                }
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-9)) && ((_Bool)0))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_10 [i_0] [i_3] [i_0])))) ? (((/* implicit */unsigned int) ((int) 329527763))) : (min((((/* implicit */unsigned int) var_6)), (arr_11 [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)80)), (var_12)))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)44929)) : (((/* implicit */int) (short)-3227))))) : (16915479418984854314ULL))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) (unsigned short)20606)));
                        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20606)) ? (9169416868485945903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((((/* implicit */_Bool) (short)25029)) ? (1019057340603610091LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6308))))) : (((/* implicit */long long int) (~(1625359675U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32672))) + (var_3)))) ? (arr_10 [i_1] [i_0] [i_1]) : (arr_10 [i_1] [i_1] [i_1]))));
                    }
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_13 [i_3] [i_1] [i_0])))) ? ((((~(((/* implicit */int) var_7)))) - (((/* implicit */int) ((short) (short)-17550))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */unsigned int) ((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)4137)))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61399))) | (3580423159U)))))));
                    arr_24 [i_0] = var_11;
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_30 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (~(arr_28 [i_6] [i_6] [2LL] [i_6] [i_6] [i_6])))) ? (((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_16)) - (1))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))));
                        arr_31 [i_0] [i_1] |= ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [(short)11]);
                        var_25 = ((/* implicit */signed char) var_17);
                    }
                    arr_32 [i_6] [i_0] [i_1] = ((/* implicit */signed char) (short)17555);
                }
            }
        } 
    } 
}
