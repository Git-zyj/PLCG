/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94930
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
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)153))))) ? (((/* implicit */long long int) -771252474)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9)))))) : (var_1)))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_15 &= ((/* implicit */unsigned char) max((((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [i_0] [i_1])))), (-3121246438105882095LL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_1]))) : (3276907647053605774LL)))));
                    }
                }
                for (short i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((short) ((unsigned int) var_8)));
                    arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_0)));
                    arr_17 [i_0] [(short)3] [(short)3] = ((/* implicit */long long int) var_8);
                    arr_18 [i_1] [i_0] = ((/* implicit */int) -4052112150031336032LL);
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_21 [i_0] [1LL] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2])) ? (((/* implicit */int) (unsigned short)16282)) : (((/* implicit */int) (short)2047))));
                    arr_22 [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)233))))) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16282))))) : (((/* implicit */unsigned long long int) ((long long int) 510620369U)))));
                    var_17 ^= ((/* implicit */unsigned short) ((long long int) -6107951178242187826LL));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((long long int) -3276907647053605774LL)) != (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15892))) : (3897856558483225089LL)))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) 262080U)) != (var_9))))));
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((int) 12576208786584014877ULL)) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16272)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_9)))) ? (((((/* implicit */_Bool) var_12)) ? (var_13) : (3897856558483225090LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)23)))))))));
}
