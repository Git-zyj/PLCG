/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73175
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 2638720827U))) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (4194304) : (((/* implicit */int) (short)692)))) : (((/* implicit */int) var_12))))) * (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((3203211945U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (var_10)))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) : (609678887790876024ULL)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_14)))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_1)))))));
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_18 ^= ((/* implicit */short) ((unsigned short) var_5));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) (unsigned char)0)), (-1250378167837791225LL))))) : (((((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_4 [i_4] [i_3] [i_2] [(short)3]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (912589929)))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 147129496U)) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_0 [i_0]))))) ? ((~(max((((/* implicit */int) var_8)), (arr_5 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned short)45537))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((long long int) (unsigned char)5));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46794)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7930))) : (0U)))) ? (((long long int) (+(17U)))) : (((long long int) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_0])), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_0])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_0] [i_1 - 2])) : (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_10);
}
