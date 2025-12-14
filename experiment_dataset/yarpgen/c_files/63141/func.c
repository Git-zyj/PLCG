/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63141
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)0]))) : (var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)10639)))));
        arr_3 [(_Bool)1] |= ((/* implicit */unsigned char) min(((short)-10639), (((/* implicit */short) (_Bool)1))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_13 |= ((/* implicit */signed char) (((!(var_2))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)127)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (_Bool)1)))))));
        arr_7 [i_1] [5] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [(signed char)20] [i_1]), (((/* implicit */unsigned short) arr_6 [i_1]))))) % (((((/* implicit */_Bool) 642829352U)) ? (((/* implicit */int) (short)-10639)) : (((/* implicit */int) (unsigned char)129))))));
        var_14 |= (signed char)40;
        var_15 = ((/* implicit */signed char) max(((~((((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) var_0))))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_4 [i_2]), (var_4))), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)20783)))))))) ? (max((((/* implicit */int) min((var_1), (((/* implicit */short) (unsigned char)61))))), (((((/* implicit */int) var_9)) - (((/* implicit */int) (short)19784)))))) : ((+(((/* implicit */int) var_5))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_0 [i_2]))));
                    var_17 = ((/* implicit */unsigned char) min(((signed char)55), ((signed char)0)));
                    arr_14 [i_3] [(short)7] [i_3 - 3] = ((((((/* implicit */int) arr_9 [i_3 - 2] [i_3 + 1] [i_3 - 2])) - (((/* implicit */int) arr_9 [i_3 - 3] [i_3 - 2] [i_3 + 1])))) >= (((((/* implicit */_Bool) arr_11 [i_3])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)42013)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) var_6)))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_4)))))))));
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) var_11))))) : (((/* implicit */int) max(((signed char)-63), (((/* implicit */signed char) var_8))))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
}
