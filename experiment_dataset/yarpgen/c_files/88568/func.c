/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88568
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
    var_17 -= ((/* implicit */unsigned short) max((var_2), (var_10)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1754089897)) ? (-1754089909) : (((/* implicit */int) var_14)))) ^ (((/* implicit */int) var_4))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2130706432)) ? (((/* implicit */int) (_Bool)1)) : (-570145867))))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_19 -= ((/* implicit */signed char) var_16);
            var_20 = ((/* implicit */signed char) (((_Bool)0) ? (1754089903) : (85709215)));
        }
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((-741737031), ((~(var_8)))))) + (((((/* implicit */_Bool) 16777216U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [18ULL] [8] [i_0]) <= (((/* implicit */int) var_1)))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((((unsigned short) arr_8 [i_3] [i_4 + 1])), ((unsigned short)7190)));
                    arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned short)10030)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (unsigned short)58368))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42288)) == (((/* implicit */int) arr_12 [i_3] [i_3] [i_4]))))), (var_11))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (1996334424) : (arr_14 [i_4] [i_3] [i_3] [i_5 + 3]))) : (((((/* implicit */_Bool) var_12)) ? (arr_15 [i_0] [i_3] [i_0 + 2] [i_3] [18ULL]) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42302))) & (var_5)))) ? (((/* implicit */int) ((_Bool) var_4))) : (var_8)))) : (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)-83)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0 + 3])) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3]) : (arr_10 [i_0 + 2] [i_0] [i_0 + 4] [i_0 + 3]))) != (((/* implicit */unsigned int) min((arr_15 [i_0] [i_3] [i_3] [i_3] [i_0 + 1]), (((/* implicit */int) var_7)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)-83)))))) : (((((/* implicit */int) var_16)) << (((((((/* implicit */_Bool) arr_8 [(signed char)6] [(unsigned short)8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_0 + 2] [(_Bool)1] [i_0 + 2] [i_0] [i_0 + 2] [(_Bool)1])))) - (52098)))))));
    }
    var_26 = ((/* implicit */signed char) (((_Bool)1) ? ((~(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
}
