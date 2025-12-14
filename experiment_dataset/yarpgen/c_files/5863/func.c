/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5863
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) ((signed char) var_7)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */short) arr_6 [i_0]);
                    var_17 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)38418)), (((((((/* implicit */long long int) 25165824)) < (var_10))) ? (((((/* implicit */int) arr_2 [i_0] [i_1])) << (((var_8) - (6873467628001661123LL))))) : (((/* implicit */int) arr_7 [i_2] [(_Bool)1] [(_Bool)1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_4] [5LL]);
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_0])) && (((/* implicit */_Bool) arr_15 [i_0])))) ? ((+(((/* implicit */int) arr_6 [i_2])))) : (((((/* implicit */_Bool) min(((short)3391), (((/* implicit */short) var_3))))) ? (((((/* implicit */_Bool) (short)3391)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (short)3391)))))))))));
                                var_20 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-3392)), (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        arr_29 [i_5] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3640105244895538421LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)58))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_5] [i_5]))) % (var_11))))), (((/* implicit */unsigned long long int) arr_14 [i_5] [i_6] [i_5] [i_8] [(_Bool)1]))));
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [9] [(unsigned char)4] [0] [i_8] [i_6])))))) | (arr_18 [i_5])))));
                        arr_30 [i_7] [i_7] [i_7] [i_6] [i_5] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) var_0))), (((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5]))))))))));
                    }
                } 
            } 
        } 
        arr_31 [i_5] = min((((/* implicit */int) arr_27 [4LL] [i_5])), ((~((-(((/* implicit */int) arr_7 [4] [i_5] [i_5])))))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5] [i_5])) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min(((~(1165671588887226014LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [(unsigned short)6])) != (((/* implicit */int) (short)3391)))))))) : (min((((((/* implicit */_Bool) arr_3 [(short)12] [i_5])) ? (1594429068271464787ULL) : (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */unsigned long long int) 25165824))))));
    }
}
