/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94858
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [(unsigned short)20] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)32767)) == (((/* implicit */int) var_1)))))))) ? (1703600823) : ((~(((/* implicit */int) arr_1 [i_4]))))));
                                var_20 = ((/* implicit */unsigned char) (((~(arr_6 [i_2] [i_1] [i_4 + 1] [i_3]))) ^ (((-2712093158258340132LL) ^ (-2712093158258340135LL)))));
                                var_21 = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_4 - 1] [21LL] [i_2] [(unsigned short)11] [17LL] [13LL])) - (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                                arr_14 [i_3] [i_1] [17ULL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (((/* implicit */int) arr_12 [12LL] [7] [i_1] [(_Bool)1] [i_3] [i_4])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-19))))))) ? (((((/* implicit */int) var_7)) >> (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))) ? (max((var_5), (((/* implicit */int) var_3)))) : (((/* implicit */int) ((signed char) 2712093158258340112LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0] [22ULL] [i_1] [(signed char)7] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)2723))));
                        arr_19 [i_1] = var_9;
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (int i_7 = 3; i_7 < 23; i_7 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) % (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 14208547427185277024ULL))))));
                arr_24 [11ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) (unsigned char)243))) ^ (3014822767647255522ULL)));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)-1))));
    var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned short) var_8))))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (((unsigned long long int) var_1)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(14208547427185277033ULL))))))));
}
