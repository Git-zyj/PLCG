/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80743
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) max(((unsigned short)24576), (((/* implicit */unsigned short) var_5))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)32767))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_8)))))), (((((_Bool) (unsigned short)47670)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)110)), (var_4)))) : ((+(((/* implicit */int) var_8))))))));
        var_14 *= ((/* implicit */unsigned int) max((((unsigned long long int) max(((_Bool)0), ((_Bool)1)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_11)))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_4 [i_1] [i_1])))) * (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] [i_1] = max((((unsigned short) max((((/* implicit */int) (_Bool)1)), (arr_5 [i_1])))), (((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_19 [17] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_15 [i_2] [i_2] [i_5])), (((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_13 [i_3] [i_2])))))), (arr_11 [i_4] [i_2])));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            arr_23 [i_2] = max((((int) arr_11 [i_2] [i_6])), (((((/* implicit */_Bool) arr_11 [i_2] [17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_2] [i_6])))));
            var_15 -= ((/* implicit */short) arr_16 [(_Bool)1] [i_6] [(_Bool)1] [i_6] [(_Bool)1]);
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_28 [i_2] [i_7] = ((/* implicit */int) arr_16 [i_2] [i_2] [i_7] [i_7] [(_Bool)1]);
            arr_29 [i_2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            arr_30 [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!((_Bool)1)))))), (max(((+(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_13 [20] [i_2]))))))));
        }
        for (int i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            var_16 = ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (arr_14 [i_2] [i_8 + 1] [i_8] [i_8])))) & ((((_Bool)1) ? (var_0) : (var_1))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_6))))));
            arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) max(((+((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_8 - 1])))))), (((/* implicit */int) ((((((/* implicit */int) arr_26 [i_2])) * (((/* implicit */int) (_Bool)1)))) > (((arr_24 [i_2] [i_2]) + (arr_14 [i_2] [i_2] [i_2] [i_2]))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            arr_38 [i_2] [i_2] = ((/* implicit */short) max(((((_Bool)1) ? (var_0) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_16 [i_2] [i_9] [(short)6] [i_2] [i_9]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_36 [i_2]) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_32 [i_2] [i_9])) : (((/* implicit */int) (_Bool)1)))))))));
            arr_39 [i_2] = ((_Bool) max(((((_Bool)1) || (((/* implicit */_Bool) arr_26 [i_2])))), ((_Bool)1)));
            var_17 -= ((max((((/* implicit */int) arr_15 [i_2] [(short)6] [i_2])), ((-(((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) arr_37 [8])));
        }
    }
}
