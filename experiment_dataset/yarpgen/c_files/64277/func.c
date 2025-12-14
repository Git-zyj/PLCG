/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64277
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)46338)), (-1)))) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11625)) && (((/* implicit */_Bool) (-2147483647 - 1))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1126715698U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2798419921110327869ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_16 = ((/* implicit */long long int) var_10);
    var_17 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) var_7)) >> (((var_4) - (670812563)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (var_9)))) ? (max((max((((/* implicit */int) (short)12184)), (var_8))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))) : (var_2)));
                    var_20 |= ((/* implicit */long long int) ((((/* implicit */int) ((short) (_Bool)1))) <= (((max((1422936369), (((/* implicit */int) arr_3 [15U] [15U])))) - (((((/* implicit */_Bool) var_3)) ? (-1) : (((/* implicit */int) var_14))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((short) (unsigned short)7883));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */long long int) var_0)) : (max((var_6), (((/* implicit */long long int) arr_11 [i_5] [i_4] [i_3 - 2]))))))), (var_11)));
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) arr_17 [i_3 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 10983214623469326528ULL)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned short)16705)) ? (-1579879092) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) 74291197)) ? (((/* implicit */unsigned long long int) -693707488)) : (3621503021939389820ULL)))));
                                var_24 = ((/* implicit */unsigned char) ((unsigned short) arr_7 [(unsigned short)7] [i_3]));
                                var_25 -= max((9520836035665211459ULL), (((/* implicit */unsigned long long int) 1679413740)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 2])) || (((/* implicit */_Bool) var_4))))) <= (((/* implicit */int) ((((/* implicit */int) (short)24096)) >= (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_3))))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned short) arr_22 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) arr_22 [i_8])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8]))) / (var_9)))));
        var_28 ^= ((/* implicit */short) arr_20 [i_8]);
    }
}
