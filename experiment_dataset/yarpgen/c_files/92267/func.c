/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92267
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
    var_18 = ((/* implicit */unsigned long long int) (~(max(((-(var_0))), (((/* implicit */int) var_4))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) (short)-32745))))));
        var_19 = ((/* implicit */long long int) (+(1819160325U)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 7; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) (-(var_7)));
            var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) arr_8 [i_2 + 3] [i_2 + 2] [i_2 + 3])) ? (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 2])))))));
            var_22 |= ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2])))) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1])) + (29636)))));
            var_23 = ((/* implicit */signed char) ((((long long int) 3961495593U)) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 + 2]))) : (var_5)))));
            var_24 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_15) : (((/* implicit */long long int) 1850240114)))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (12085)))));
        }
        var_25 = ((/* implicit */unsigned int) (((~(arr_7 [i_1] [i_1]))) ^ (((/* implicit */int) var_4))));
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (11781640862444381791ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1]))));
        var_27 -= ((/* implicit */int) arr_4 [i_1] [i_1]);
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_17 [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) -1571091433);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_7] [i_7 - 1] [i_7 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_7 - 3] [i_7 + 1] [i_7 - 3])) + (155)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7 - 1] [i_7 - 1]))))) : (((((/* implicit */_Bool) arr_14 [i_7] [i_7 + 2] [i_7 - 3])) ? (((/* implicit */int) arr_14 [i_7] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1]))))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = arr_19 [i_3] [i_3];
    }
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_30 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_26 [i_8]) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8])))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_26 [i_8]), (arr_26 [i_8]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) arr_25 [i_8])) : (var_9))))));
        var_31 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_8]))))) ? (((/* implicit */int) arr_25 [i_8])) : ((-(((/* implicit */int) arr_25 [i_8]))))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_25 [i_8])) >> (((333471703U) - (333471677U)))))))), (max((((/* implicit */unsigned long long int) ((var_10) >> (((/* implicit */int) arr_26 [i_8]))))), (((1718270323418132ULL) >> (((/* implicit */int) var_1)))))))))));
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 19; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    var_33 ^= ((/* implicit */unsigned char) ((long long int) arr_30 [i_8] [i_8] [i_8] [i_8]));
                    var_34 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((6272492693147666661LL) << (((((/* implicit */int) arr_25 [i_8])) - (3019)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_31 [i_10] [i_8] [i_8])))) : (arr_27 [i_9 - 2] [i_9 + 3]))) >> (((1819160325U) - (1819160323U)))));
                }
            } 
        } 
    }
    var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (var_13) : (var_13))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_17))));
}
