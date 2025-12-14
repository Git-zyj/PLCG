/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69012
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
    var_16 += ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) (unsigned short)64473)) || (var_12))))) ? (((/* implicit */int) ((unsigned short) min((-5888603634007199561LL), (6754727620307943627LL))))) : (((((_Bool) (short)9373)) ? (-303465227) : (((/* implicit */int) var_12))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_18 ^= 502696908643393705LL;
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1 - 2]))));
        var_20 = ((/* implicit */signed char) var_9);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_21 = ((/* implicit */short) ((((((((/* implicit */int) (short)-12269)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1 - 2])) + (24195))))) << (((((((/* implicit */int) arr_4 [i_1 + 1])) + (3771))) - (26)))));
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                var_22 ^= ((/* implicit */signed char) 12058688328409663895ULL);
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) ((5392082622035355249ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1])) | (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_15 [i_4] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [11LL]))) == (-6754727620307943621LL)));
                            arr_16 [i_4] = ((/* implicit */unsigned char) arr_2 [i_6]);
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 2 */
                for (unsigned char i_7 = 3; i_7 < 24; i_7 += 1) 
                {
                    arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_17 [8] [(short)2] [i_7 - 3] [i_7 - 1] [i_7] [(short)2])) : (((/* implicit */int) arr_17 [i_7] [i_7 - 2] [i_7] [i_7 - 3] [6LL] [i_7 + 1]))));
                    var_26 = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_4])) != (((/* implicit */int) (short)25938))));
                    var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31885)) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) var_2))));
                    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1LL))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_23 [i_1 + 1] [i_2] [i_4] [14] = var_10;
                    var_29 = ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_1] [i_4] [i_2])) ? (arr_7 [(_Bool)1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))));
                }
            }
        }
        arr_24 [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1495153674)) ? (((((/* implicit */int) (short)9679)) << (((var_3) - (4009208215U))))) : ((-(((/* implicit */int) arr_13 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1]))))));
    }
}
