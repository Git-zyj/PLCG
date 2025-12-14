/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97388
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
    var_13 = ((/* implicit */signed char) var_1);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned char) ((((((_Bool) 15445001412614136557ULL)) ? (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)18)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max(((unsigned char)205), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) ((short) 345395195816174075ULL)))))));
        var_15 = ((/* implicit */unsigned char) var_8);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((((((/* implicit */_Bool) arr_1 [(unsigned char)8])) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [(unsigned short)2])), ((unsigned char)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned short)4071)) : (((/* implicit */int) (short)-63)))))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) 16075947710966468994ULL)) ? (16779758173509071440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) 0))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) var_6);
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1]))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_11 [i_1] [i_2]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_2 + 2]))));
            arr_18 [i_1] [(short)2] [i_2 + 1] = ((/* implicit */unsigned char) ((int) var_11));
            var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)7304))));
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_22 [0] = ((/* implicit */short) (+(((/* implicit */int) arr_15 [i_6] [i_6] [(unsigned char)11] [i_6] [i_6]))));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0))));
    }
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) var_9);
        arr_25 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_20 [i_7] [i_7]), (((/* implicit */unsigned char) arr_0 [i_7])))))));
    }
}
