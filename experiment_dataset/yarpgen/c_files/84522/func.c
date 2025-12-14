/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84522
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551602ULL)) ? (var_4) : (var_1))) != (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_7)));
                }
                var_11 = ((unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned char)3)))))));
                arr_9 [(unsigned short)24] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (var_1))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (var_8)))) ? (((((var_2) + (9223372036854775807LL))) >> (((((((/* implicit */unsigned long long int) var_0)) ^ (var_3))) - (3911821801325728820ULL))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                {
                    var_13 |= ((/* implicit */unsigned char) ((var_7) / (((/* implicit */unsigned long long int) var_2))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                    var_15 += ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)255)) - (241)))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    var_16 = ((/* implicit */unsigned int) ((unsigned short) var_8));
                    arr_17 [i_4] [i_4] |= (!(((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned long long int) 72057594037927928LL))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6 + 1] [i_6 + 1] [i_0] [4LL] [i_0] [i_6 + 1] [4LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((3285639004095455286LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((int) var_4)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((var_0) / (var_0)))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_2))))));
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)3))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))));
                                var_20 = ((/* implicit */unsigned short) (+((+(3285639004095455291LL)))));
                                var_21 = ((/* implicit */unsigned short) ((var_7) - (((var_1) + (((/* implicit */unsigned long long int) -3285639004095455289LL))))));
                                var_22 -= ((/* implicit */int) (-(-72057594037927929LL)));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_7] [i_7] [i_7 + 1] = ((((/* implicit */_Bool) (signed char)7)) ? ((+(((/* implicit */int) (unsigned char)248)))) : (var_9));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((short) var_9));
                arr_39 [i_11] [i_11] = ((/* implicit */unsigned short) (((~(var_0))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) ((var_7) != (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
            }
        } 
    } 
}
