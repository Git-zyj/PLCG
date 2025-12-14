/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93745
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [8LL] [8LL] [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) (signed char)19))))) ? (((arr_3 [i_0] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19603))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -815362186309993498LL))))))))) ? (((((((/* implicit */int) arr_8 [i_2] [i_1] [i_4 - 1] [i_4 - 1])) + (2147483647))) << (((((unsigned long long int) (short)-23)) - (18446744073709551593ULL))))) : (((/* implicit */int) arr_1 [14LL]))));
                                arr_13 [i_3] [i_1] [i_2] = (((((~(((((/* implicit */_Bool) (short)23)) ? (((/* implicit */long long int) arr_11 [i_1] [i_0] [i_1] [i_0] [i_4])) : (-7965413108602267123LL))))) + (9223372036854775807LL))) >> ((((~(((var_6) >> (((((/* implicit */int) (short)-18)) + (53))))))) - (18446744073249906484ULL))));
                            }
                        } 
                    } 
                    arr_14 [(short)17] = ((/* implicit */long long int) (+(((16182536066690487269ULL) / (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_1 + 2]))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (~(var_12)))) || (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_2]))))), ((~(((/* implicit */int) (unsigned short)65527))))));
                        arr_18 [i_1] [i_2] [i_5] = ((/* implicit */short) ((unsigned long long int) arr_2 [i_5] [i_5] [i_2]));
                    }
                    arr_19 [i_0] [(unsigned short)15] [(unsigned short)15] [(unsigned short)15] = ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12))) < (arr_15 [i_0] [i_1 + 2] [i_2] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18))) < (min((var_6), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0 + 2] [i_1 + 3] [7U] [i_6] [17ULL] = ((/* implicit */long long int) (~(2723955288U)));
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] [i_0] = ((((((/* implicit */int) max(((short)-12), ((short)24)))) < (((((/* implicit */_Bool) -8032258327684105967LL)) ? (arr_11 [i_0] [i_1 + 2] [i_0] [i_0] [i_0]) : (0))))) ? (((long long int) arr_22 [i_0] [i_0] [i_2] [i_7])) : ((+(min((var_5), (((/* implicit */long long int) var_14)))))));
                                arr_28 [i_0 + 1] [i_1 + 4] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) (short)12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (((~(((/* implicit */int) ((var_3) || (((/* implicit */_Bool) (unsigned short)19585))))))) < (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((((/* implicit */int) var_2)) <= (var_13)))))))));
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            {
                arr_35 [11U] [i_9] [i_8] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) ^ (4294967295U))));
                arr_36 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_8] [i_9] [i_9] [i_9])) % (((/* implicit */int) var_4))))) ? (max((0LL), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [(short)3] [i_9] [i_9] [i_9])) >> (((/* implicit */int) (signed char)19))))))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65527)), (arr_11 [i_8] [i_9] [i_8 - 1] [i_9] [15ULL]))))));
                arr_37 [4] [18ULL] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((9068427554818205070LL) | (-8032258327684105967LL)))) || (((/* implicit */_Bool) ((unsigned short) var_9))))))));
            }
        } 
    } 
}
