/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68726
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
    var_11 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) var_4)) != (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_10))))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((unsigned int) var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [2U] [i_0 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (var_2))))) ^ (max((var_9), (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */unsigned long long int) max((((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((var_2) == (var_5))))))) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_9))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_12 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) var_0)) ? (var_2) : (var_9)))))), (((short) ((unsigned int) var_0)))));
                    var_13 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_1))))), ((-(var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_5))))) : (max((((/* implicit */unsigned int) var_1)), (var_9)))))));
                    var_14 = ((/* implicit */long long int) ((short) ((signed char) var_10)));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_10))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_7)))) & (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_1))))))) : (((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_0)))) - (((/* implicit */int) var_8))))));
                }
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_16 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_1))))))));
                    var_17 ^= max((((((unsigned int) var_9)) + (var_5))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : ((-(((/* implicit */int) var_4))))))));
                    var_18 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + ((~(var_9))))));
                    arr_13 [6U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_2))), (((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))) ? (max((max((var_2), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) - (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_3), (((/* implicit */signed char) var_6)))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0)))))) : ((((~(((/* implicit */int) var_7)))) & (((/* implicit */int) var_7))))));
                }
            }
        } 
    } 
    var_20 = ((((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (((max((((/* implicit */unsigned int) var_8)), (var_2))) >> (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7)))))));
    var_21 |= ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) var_1))) + (((((/* implicit */int) var_7)) - (((/* implicit */int) var_3)))))) & (((/* implicit */int) ((signed char) max((var_9), (((/* implicit */unsigned int) var_0)))))))))));
                /* LoopNest 3 */
                for (unsigned char i_6 = 3; i_6 < 8; i_6 += 3) 
                {
                    for (unsigned char i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 6; i_8 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */long long int) (((~(((((/* implicit */int) var_4)) - (((/* implicit */int) var_4)))))) | ((+(((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                                var_24 = ((/* implicit */long long int) (+(max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))))))));
                                arr_30 [i_4] [i_5] [i_6 + 2] [i_6] [i_7] [i_6] = ((((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_1)))) + (2147483647))) >> ((((~(((/* implicit */int) var_0)))) + (116))));
                            }
                        } 
                    } 
                } 
                var_25 ^= ((/* implicit */int) var_9);
            }
        } 
    } 
}
