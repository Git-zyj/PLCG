/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6147
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(8313507561770916091ULL)));
        var_10 = ((/* implicit */long long int) (~(max((10133236511938635538ULL), (min((8313507561770916087ULL), (((/* implicit */unsigned long long int) (short)32764))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10133236511938635524ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)47725)) ? (8313507561770916077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)-46))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) ? (10133236511938635538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28434)))));
                    var_11 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((10133236511938635521ULL), (((/* implicit */unsigned long long int) var_9))))) ? ((-(((/* implicit */int) (short)-12535)))) : (((/* implicit */int) var_6)))))));
                    arr_11 [i_0] [i_1] [(signed char)2] [i_2 - 1] = ((/* implicit */signed char) (+(max((max((((/* implicit */long long int) (_Bool)0)), (-1LL))), (max((0LL), (((/* implicit */long long int) -2147483634))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28437))) : (var_3)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))))))));
                        arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
                        arr_16 [i_0] [i_0] [i_0] [1ULL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) (signed char)-5))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-10208)) : (((/* implicit */int) (signed char)-24)))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_5] [7ULL] [i_4] [5] = ((/* implicit */long long int) (-(min(((-(var_5))), (((/* implicit */unsigned long long int) -25))))));
                                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) 2147483642)) : (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)195)))) : (var_4))) : (min((((/* implicit */int) min(((short)32764), ((short)20066)))), (var_4)))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */unsigned long long int) (short)31578))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) var_6))))) ? (((/* implicit */int) (short)16642)) : (((/* implicit */int) var_6))))));
                                var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_8)) : ((+(32767))))), (((/* implicit */int) (short)16))));
                                var_17 ^= ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)-1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_18 -= ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5173)) ? (((/* implicit */unsigned long long int) 24)) : (14496466454008827179ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 0LL)) ? (var_0) : (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) max((-1), (((/* implicit */int) (unsigned short)30044))))) : (var_1)))));
        var_19 ^= ((/* implicit */unsigned short) (signed char)-48);
    }
    var_20 = ((/* implicit */unsigned char) var_4);
}
