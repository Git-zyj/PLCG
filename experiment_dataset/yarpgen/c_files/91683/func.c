/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91683
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
    var_19 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((max((((((/* implicit */int) arr_2 [i_0] [i_0])) <= (1358607391))), (min((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -1358607392)) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))))) : (((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((arr_1 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) : (arr_0 [i_0])))))));
            arr_6 [i_0] = min((((((/* implicit */_Bool) arr_0 [i_1])) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) (!(arr_2 [i_0] [i_0])))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_2]) ? (((int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (min((((((/* implicit */_Bool) 1524758185)) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (arr_4 [i_0] [i_2]))), (((arr_8 [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0])))))) : (min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((arr_4 [i_0] [i_0]) > (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
            var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0])))) ? (max((((/* implicit */int) arr_3 [i_2] [i_2])), (arr_4 [i_0] [i_2]))) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_8 [i_0]))))))));
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_12 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) arr_11 [i_0] [i_3])) : (((/* implicit */int) arr_10 [i_3])))));
            var_22 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (arr_0 [i_0]))) <= (max((((/* implicit */long long int) arr_1 [i_3] [i_3])), (arr_0 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162))) : (arr_0 [i_3])))) ? (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_8 [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            var_23 += ((/* implicit */unsigned char) ((min(((+(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_3])))))) != (((/* implicit */int) arr_3 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_17 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) ((unsigned char) (+(((/* implicit */int) (short)-5487))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_0 [i_5]))));
                        arr_18 [i_3] [i_3] [i_0] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_5 + 3] [i_5 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4] [i_3]))))))), (((/* implicit */long long int) (short)31561))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) + (61))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (arr_4 [i_0] [i_0])))) - (arr_7 [i_6]))) : (((/* implicit */long long int) max((((arr_14 [i_0] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) (short)-1)))), (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0])))))))));
            arr_21 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_6] [i_6])) <= (((/* implicit */int) arr_8 [i_0]))))) % (((/* implicit */int) max(((short)511), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0])))))))) ? ((~(((/* implicit */int) max((arr_10 [i_0]), ((signed char)38)))))) : (((/* implicit */int) ((unsigned char) ((arr_8 [i_0]) ? (((/* implicit */int) arr_13 [i_6] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_6] [i_0]))))))));
        }
        arr_22 [i_0] = ((/* implicit */short) min((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) (signed char)-78))))));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((var_15) - (2116718563)))))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_17))))) : (var_0))) : ((+(((/* implicit */int) ((short) var_16)))))));
}
