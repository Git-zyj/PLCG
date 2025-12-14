/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58686
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
    var_13 = ((/* implicit */signed char) var_4);
    var_14 = ((/* implicit */unsigned char) max((var_2), (((/* implicit */short) var_6))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)4)))), (((/* implicit */int) min((((/* implicit */short) var_1)), (var_7))))))) ? (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-100)), (var_1)))) * ((+(((/* implicit */int) var_8)))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_2 - 2]), (((/* implicit */long long int) (short)-8618))))) ? (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) ((unsigned short) var_7))) - (51982))))) : (((/* implicit */int) var_3))));
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_2 [i_2 + 1] [i_2 - 1]), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)16069)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [1LL])))))));
                        var_17 = ((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_0])), ((-(((/* implicit */int) arr_4 [i_0]))))));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */signed char) (-((+(((/* implicit */int) max((var_2), (((/* implicit */short) var_1)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0]))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_4 + 1] [i_4 + 1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)16069)) : (((/* implicit */int) var_6))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4]))) : (arr_12 [i_4] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_4] [(signed char)4])) + (((/* implicit */int) var_6))))))))));
            var_21 = ((/* implicit */long long int) arr_4 [i_0]);
        }
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */int) (unsigned char)123)) * (((/* implicit */int) arr_4 [i_5])))) : (((((/* implicit */int) arr_0 [i_5])) | (((/* implicit */int) var_6)))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)23348), (var_7))))))), (min((((/* implicit */unsigned int) (_Bool)1)), (67108863U))))))));
        var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_5] [7U])) || (((/* implicit */_Bool) min((var_6), (arr_5 [(_Bool)1] [i_5] [i_5])))))), (((((/* implicit */_Bool) ((arr_3 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8618)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_22 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6])) ? (310651688U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))))) ? (max((((/* implicit */int) arr_6 [i_6] [i_6] [i_6])), ((+(((/* implicit */int) arr_8 [i_6] [i_6])))))) : (((/* implicit */int) arr_16 [i_6])));
        arr_23 [i_6] = ((/* implicit */signed char) (-(((arr_0 [i_6]) ? (((/* implicit */int) min(((signed char)-124), (arr_5 [i_6] [i_6] [i_6])))) : (((/* implicit */int) arr_8 [i_6] [i_6]))))));
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_0 [i_6])), (0LL)))));
    }
}
