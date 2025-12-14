/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73259
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
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-20327), (((/* implicit */short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_9))))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20343))) : (var_12))), (((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_2))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((var_11) ^ (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max(((signed char)66), ((signed char)127)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (short)32749))))))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 393216U)) ? (max(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_6)))) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-11)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32761))) : (((((/* implicit */_Bool) (short)16380)) ? (((/* implicit */long long int) 4294574102U)) : (-6987109150163456129LL)))))) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1])) : (var_5))))))));
                            var_17 = ((/* implicit */unsigned long long int) var_12);
                            var_18 = ((unsigned short) ((((/* implicit */_Bool) 3836555039U)) ? (((/* implicit */int) (signed char)-66)) : (1708418525)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_19 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((var_2) + (2147483647))) >> (((arr_15 [i_0]) + (8299996732865983142LL)))))) : (((/* implicit */unsigned short) ((((var_2) + (2147483647))) >> (((((arr_15 [i_0]) + (8299996732865983142LL))) - (4648836638682447874LL))))));
                    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_11 [i_0] [2] [i_1] [(unsigned char)7]))))) ? (((/* implicit */int) (unsigned char)96)) : ((~(((/* implicit */int) (short)4095))))));
                }
                var_21 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)65))) : (max((var_12), (((/* implicit */long long int) var_5))))))), (var_11)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_10);
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)20326)) % (((((/* implicit */_Bool) arr_17 [20U])) ? (var_2) : (((/* implicit */int) (signed char)-67))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)32490))));
                    var_25 -= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)47749)) ? (((/* implicit */int) (short)16033)) : (((/* implicit */int) (signed char)-127)))), ((~(((/* implicit */int) (signed char)-67))))))) : (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (signed char)-14)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-96))))) | (18ULL)));
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_1))));
                                arr_29 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (max((arr_28 [i_5] [i_9]), (((((/* implicit */_Bool) 33753818)) ? (-33753818) : (var_5))))) : (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        var_29 |= ((/* implicit */short) (+(-5652269143909188974LL)));
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned int) var_2);
        var_30 -= ((/* implicit */unsigned int) ((int) var_4));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (565955073U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) -554128799)) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 5652269143909188978LL)) : (34359738367ULL)))));
    }
}
