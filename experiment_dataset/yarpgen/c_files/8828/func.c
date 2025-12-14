/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8828
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
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned char) arr_1 [(signed char)1] [(signed char)1])))));
        var_18 -= ((/* implicit */signed char) 2129732240);
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (unsigned short)56860);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56860))) * (4192569179U))) / (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))))))))))));
                    var_20 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9402990029341506041ULL)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned char)14))))), (9043754044368045574ULL))), (((/* implicit */unsigned long long int) (+(arr_1 [i_2 - 1] [i_1]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) max((arr_5 [i_1]), (((/* implicit */int) var_16))))) * (var_0)))));
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                for (signed char i_6 = 3; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_22 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(arr_17 [i_1] [i_4] [i_5] [i_6]))) : (((((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */unsigned long long int) var_12)) : (9043754044368045574ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (var_4)));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_6 - 3])))), (((/* implicit */int) ((9402990029341506041ULL) == (4645527412637330617ULL))))))) ? (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_6)), (1675518871)))))) : (((((((/* implicit */int) (signed char)-87)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)31553)), (arr_18 [i_1] [i_1])))) : (((((/* implicit */unsigned long long int) arr_0 [i_1])) - (13407209428769106407ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_24 ^= ((/* implicit */unsigned short) max((((var_9) ? (((int) var_6)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (unsigned char)195)))))), ((+(((/* implicit */int) var_9))))));
}
