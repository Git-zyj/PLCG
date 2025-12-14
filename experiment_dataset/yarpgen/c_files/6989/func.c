/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6989
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
    var_14 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) ((_Bool) var_10))))) % (((/* implicit */int) (unsigned char)247))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)6696)))), (((/* implicit */int) var_0)))) >> (((((/* implicit */int) var_8)) - (113)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned char) var_12);
        arr_5 [i_0] [i_0 - 1] = ((/* implicit */_Bool) var_1);
        var_16 = ((/* implicit */unsigned char) max((var_16), (var_5)));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (unsigned char)45);
        arr_9 [i_1] = ((/* implicit */long long int) arr_8 [i_1] [i_1]);
        var_18 = ((/* implicit */_Bool) arr_2 [i_1]);
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
        arr_13 [i_2] = ((/* implicit */unsigned char) ((max((((long long int) (signed char)-4)), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)118))))))) << (((/* implicit */int) ((unsigned char) arr_6 [i_2] [i_2])))));
        var_19 = ((/* implicit */unsigned char) var_9);
        arr_14 [i_2] = ((/* implicit */long long int) arr_1 [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) var_1);
        arr_19 [i_3] = ((/* implicit */unsigned char) min((max((max(((signed char)-61), (((/* implicit */signed char) (_Bool)0)))), ((signed char)25))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3]))) != (arr_0 [i_3]))))));
        arr_20 [(signed char)12] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-37)), ((unsigned char)0)));
    }
    var_21 = ((/* implicit */unsigned char) 3751714411U);
}
