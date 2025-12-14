/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67506
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
    var_15 = ((/* implicit */signed char) min((4035222523891369296LL), (-5401226801217438227LL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */long long int) (unsigned short)37826))))) - ((((_Bool)1) ? (arr_0 [i_0 + 1]) : (14925347946371726030ULL)))));
        arr_3 [i_0] = ((/* implicit */_Bool) 4201962472901218282ULL);
        arr_4 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) (~((~(var_9)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_2);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_8 [10ULL] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_4))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)220))))))), (((((/* implicit */_Bool) (short)-32454)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3597052828347740648LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) : (var_12)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32459)) ? (max((var_0), (((/* implicit */long long int) (_Bool)1)))) : (var_13)))) ? (((/* implicit */unsigned long long int) 2057013764)) : (((unsigned long long int) ((short) (unsigned char)19)))));
                    arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32442)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [9])) : (658878679)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [8ULL] [i_2] [i_3]))) + (567213417880999185LL)))));
                    arr_17 [i_3] [(unsigned char)9] [3U] [(_Bool)1] = ((/* implicit */short) (_Bool)1);
                    arr_18 [i_1] [(signed char)3] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                }
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */_Bool) var_3);
    }
}
