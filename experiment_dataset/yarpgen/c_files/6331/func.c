/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6331
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
    var_20 += ((/* implicit */int) (_Bool)1);
    var_21 |= (!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] = ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)));
                    var_22 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)45282))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_23 &= ((/* implicit */unsigned char) (+(var_15)));
                        arr_11 [i_0] [(short)16] [i_0] [i_0] = ((/* implicit */long long int) ((short) 6331097502676122018LL));
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)46980));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            arr_16 [i_3] [i_0] [i_0 - 2] = ((((unsigned long long int) 650687387U)) >= (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-2LL)))));
                            arr_17 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 15950253715276925897ULL))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)53647))))));
                            arr_18 [i_4 + 1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4360072687680669921ULL)) ? (((var_13) ? (16538929837090782555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) -6331097502676122013LL))));
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_4] [18LL] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1])) + ((-(arr_5 [12U] [12U])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] [i_0] = var_2;
                            arr_22 [i_0] [i_0] [i_1] [(unsigned char)14] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) var_16);
                            var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12523))) | (11652487686059227528ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_15)))))));
                            var_26 += ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (unsigned short)53647);
                            arr_27 [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2)))) ? ((~(((/* implicit */int) var_13)))) : ((+(((/* implicit */int) (unsigned char)194))))));
                        }
                        var_28 = (_Bool)1;
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                arr_33 [i_0 - 2] [6] [i_2] [6] [i_8] |= ((/* implicit */unsigned char) var_6);
                                var_29 *= (-(((var_13) ? (10464826535535519060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64894))))));
                                arr_34 [(unsigned short)15] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_0] = ((/* implicit */long long int) var_3);
                                arr_35 [i_1] [i_7 - 1] [i_0] = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)180)) ? (((((/* implicit */_Bool) arr_20 [i_9] [i_1] [i_1] [i_0 + 1])) ? (arr_9 [i_1] [i_1] [i_1]) : (2496490358432625718ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1073741823ULL) == (((/* implicit */unsigned long long int) 1682617876))))))));
                    var_31 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65535));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) (signed char)(-127 - 1));
                                arr_43 [i_0] [i_1] [i_9] [i_10 + 1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11366)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (-7174614316757469214LL)));
                                arr_44 [i_11] [i_11 - 1] [12U] [i_9] [i_1] [12U] [i_0 - 2] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) % (-7174614316757469214LL)));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((var_15) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                }
                var_35 = ((/* implicit */unsigned int) (~(arr_19 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])));
            }
        } 
    } 
}
