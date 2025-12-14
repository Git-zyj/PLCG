/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64546
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
    var_17 += ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)61)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)61)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)6117)) : (((/* implicit */int) (signed char)61))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) ((arr_0 [10LL] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : (((/* implicit */int) var_5))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        var_20 = ((/* implicit */unsigned char) (-(min((6534289173265812242LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) arr_3 [(unsigned char)7])) : (((/* implicit */int) var_14)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_1)))) ? ((~(max((arr_5 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2]))))))));
            var_21 = ((/* implicit */short) arr_8 [i_1] [i_2]);
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) -2074017926))));
                        var_23 = ((/* implicit */signed char) 5054391502728262497LL);
                        var_24 *= ((/* implicit */unsigned char) ((_Bool) var_5));
                    }
                } 
            } 
        }
        var_25 = 8811552667763251468LL;
        arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) ^ (arr_8 [i_1] [i_1]))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((6922952668274461100ULL) - (6922952668274461096ULL))))))))) : ((~(var_13)))));
        var_26 = ((/* implicit */unsigned char) min((var_26), ((unsigned char)229)));
        arr_20 [(_Bool)1] &= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) & (8658654068736LL));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((arr_18 [i_5] [(unsigned char)8] [i_5]) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)197)) : (-1173029837)))) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned short)62847)))) - (158)))));
        var_28 *= ((/* implicit */unsigned short) arr_13 [i_5] [i_5] [(unsigned char)4] [i_5]);
    }
}
