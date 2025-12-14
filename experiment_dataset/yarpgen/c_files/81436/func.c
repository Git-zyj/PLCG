/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81436
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)47))))))) & (((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)22589)) : (((/* implicit */int) var_2))))) : (18420492028446680920ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) & (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)44))) | (arr_3 [i_1 + 3] [i_0] [i_0]))), (((/* implicit */long long int) arr_2 [i_1 + 2] [20LL] [i_1]))))));
                arr_6 [i_0] [i_0] [14ULL] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (max((((/* implicit */unsigned char) (signed char)-44)), ((unsigned char)255)))));
                var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)42947)) : (((/* implicit */int) (unsigned short)0))))) : (min((var_10), (15007912125665061170ULL))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) min(((unsigned short)63488), (((/* implicit */unsigned short) (signed char)-70))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3]))) : (arr_5 [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) var_5)) : ((((_Bool)1) ? (11131318125385746999ULL) : (var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_1 [i_2 - 1]))));
        arr_11 [(unsigned char)19] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-100))));
    }
}
