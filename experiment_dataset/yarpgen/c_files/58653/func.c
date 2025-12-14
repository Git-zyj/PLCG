/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58653
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
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (+(max((min((var_10), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((_Bool) (_Bool)1)))))));
                arr_7 [0LL] &= ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((-((~(((/* implicit */int) var_12))))))));
                var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1])) ? (748824349606094448LL) : (((/* implicit */long long int) var_7))))));
                arr_8 [(short)12] &= ((((/* implicit */_Bool) ((((arr_3 [(_Bool)1]) ? (((/* implicit */long long int) 33554431)) : (-748824349606094448LL))) | (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_8))))))))) ? (((/* implicit */int) (unsigned char)0)) : (max((((/* implicit */int) var_3)), (max((((/* implicit */int) (unsigned char)0)), (var_4))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_12 [0LL] [i_2] &= ((/* implicit */short) min((((int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) != (-748824349606094452LL)))), (((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (748824349606094448LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
        arr_13 [i_2] = ((/* implicit */_Bool) (((-(min((-748824349606094448LL), (((/* implicit */long long int) (_Bool)1)))))) + ((+(max((((/* implicit */long long int) var_3)), (-4377207043859623590LL)))))));
        arr_14 [i_2] [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_2)))), ((-(((var_7) / (arr_11 [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */_Bool) 748824349606094446LL);
        arr_17 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)15))));
        arr_18 [i_3] [i_3] = ((/* implicit */_Bool) ((int) ((_Bool) ((unsigned char) (_Bool)1))));
    }
    for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        var_17 = ((/* implicit */int) ((_Bool) max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))))))));
        var_18 = ((/* implicit */int) (((-(((/* implicit */int) ((unsigned char) -748824349606094434LL))))) == (((((/* implicit */_Bool) var_7)) ? (min((var_0), (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_6))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_27 [i_5] = ((/* implicit */_Bool) min((((((/* implicit */int) min(((short)19132), (((/* implicit */short) (unsigned char)255))))) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)209))));
        arr_28 [i_5 - 1] = ((/* implicit */int) ((((/* implicit */int) ((((var_8) ? (var_4) : (((/* implicit */int) var_3)))) >= (((/* implicit */int) ((arr_25 [i_5 - 1]) != (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))))) <= (var_4)));
        arr_29 [i_5 - 1] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))));
        var_19 = ((/* implicit */_Bool) (unsigned char)7);
        arr_30 [i_5 - 1] [i_5 - 1] = ((/* implicit */_Bool) ((((var_1) + (2147483647))) >> (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_12)) % (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) > (((/* implicit */int) var_3)))))))));
    }
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_34 [i_6] = ((/* implicit */unsigned char) min((-748824349606094441LL), (-748824349606094447LL)));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                {
                    arr_39 [i_6] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_6]), (((/* implicit */long long int) (unsigned char)4))))) ? (((((/* implicit */_Bool) arr_5 [i_8 + 3] [i_8 + 3] [i_8 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) (unsigned char)10))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_33 [4LL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)126))) ? (((((/* implicit */_Bool) arr_22 [i_7])) ? (var_7) : (((/* implicit */int) (short)-19125)))) : (((/* implicit */int) (short)-19125)))))));
                    var_20 *= ((/* implicit */_Bool) var_10);
                }
            } 
        } 
        arr_40 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_4))) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74)))))));
    }
}
