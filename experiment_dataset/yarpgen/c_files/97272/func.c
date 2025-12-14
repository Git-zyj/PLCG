/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97272
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = arr_1 [i_0] [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned char) ((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)19)))) / (((((/* implicit */_Bool) 1354834877)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = arr_1 [i_0] [i_0];
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]));
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_7)), (-619670814))), (((/* implicit */int) ((short) (_Bool)1)))))) : (70368744177663ULL)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) & (arr_6 [6ULL])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (-1333240176)))) : ((((_Bool)1) ? (3487701905U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))));
            arr_11 [i_2] = ((/* implicit */unsigned char) (short)-1);
        }
        var_17 = ((/* implicit */short) max((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((arr_6 [16ULL]) / (var_9))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [(signed char)0] [i_0] [(signed char)0])))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
        {
            {
                arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (unsigned short)37944))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))) : (arr_15 [i_3 - 1] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [9] [i_4 - 3]) == (((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_15 [i_3] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_4]))))))))) : (4246308622U)));
                var_18 = ((/* implicit */unsigned short) max((((unsigned long long int) min((((/* implicit */long long int) -853359176)), (var_6)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255)))))));
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)45259))));
                var_19 ^= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_4)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (4382627968982740630ULL))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_12 [i_3]))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-12775))))) * (((var_0) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (max((((/* implicit */unsigned long long int) -7191855230805230013LL)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_3))))) : (((/* implicit */unsigned long long int) 1333240197))));
    var_21 = ((/* implicit */long long int) (~(var_3)));
}
