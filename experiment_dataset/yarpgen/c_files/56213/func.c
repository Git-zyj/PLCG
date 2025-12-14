/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56213
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
    var_11 -= ((/* implicit */_Bool) ((int) (unsigned short)23199));
    var_12 = ((/* implicit */_Bool) var_1);
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 985886356147376505ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42323))) : (10462417123505379846ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7984326950204171770ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (18446744073709551598ULL)));
        var_15 -= (signed char)69;
        arr_3 [(unsigned short)2] [i_0] = ((/* implicit */unsigned short) (short)19624);
        var_16 += ((/* implicit */_Bool) ((unsigned char) var_3));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] [9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)24))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_7)))))) ? (((/* implicit */int) ((_Bool) ((short) arr_4 [i_1])))) : (((/* implicit */int) (signed char)-86))));
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)72)) || (((/* implicit */_Bool) (signed char)86))));
                        arr_15 [i_1] [i_3] [(unsigned char)6] [i_1] = ((/* implicit */short) (signed char)-114);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [4LL])) ? (((/* implicit */unsigned long long int) ((arr_11 [i_3] [i_3] [i_2 + 1] [i_3]) + (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_0 [(_Bool)1])))))))) : (min((((/* implicit */unsigned long long int) ((long long int) arr_13 [i_1] [i_3] [i_3] [i_4]))), ((-(var_6)))))));
                        var_19 = (short)-11960;
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)215)))) ? (((/* implicit */int) max(((short)5884), (((/* implicit */short) arr_9 [i_1] [i_1]))))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))) ? (((unsigned int) ((((/* implicit */int) (short)-15978)) <= (((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_1] [i_1]))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((signed char) 2855911363U))), (((unsigned short) 1067199786))))))))));
        arr_16 [(short)2] = ((/* implicit */long long int) (unsigned char)209);
    }
}
