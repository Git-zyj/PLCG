/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71258
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
    var_13 &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4095)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] = (-9223372036854775807LL - 1LL);
                arr_8 [i_1] [i_1] [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)95)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 9223372036854775807LL)))))) : (max((var_2), (17738940958559002206ULL)))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                            {
                                var_14 |= ((/* implicit */long long int) 707803115150549409ULL);
                                arr_18 [i_0] [i_3 + 2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((707803115150549407ULL) - (((/* implicit */unsigned long long int) 281406257233920LL))))) ? (((((/* implicit */unsigned long long int) var_8)) - (707803115150549424ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_5)))))));
                            }
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    arr_24 [i_0] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_5 - 1]);
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (var_3)))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) -547568497)))) ^ (((9223372036854775807LL) & (var_4)))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_22 [i_1])))), (9971736089717899141ULL))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_30 [i_7] [i_1] [i_1] [i_6] [i_6] [i_7] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((max((32512), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)4095))))), ((+(arr_3 [i_1] [i_7])))));
                            var_17 = ((/* implicit */unsigned short) 6492210154820994952ULL);
                            var_18 = ((/* implicit */int) (+(((long long int) arr_4 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
