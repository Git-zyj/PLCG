/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54996
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
    var_17 = ((/* implicit */long long int) var_10);
    var_18 = ((/* implicit */signed char) 9081220691008012558LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [1LL] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)40)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (arr_1 [i_0])))));
        arr_4 [15] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [(unsigned char)15]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((var_6) != (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(signed char)6]))))))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((signed char) var_4)))));
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) 2506083089018706874LL);
        arr_10 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) | (min((max((-7217919946882943264LL), (((/* implicit */long long int) arr_0 [(signed char)10])))), (((/* implicit */long long int) arr_8 [i_2 - 1] [(_Bool)1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_21 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_13 [i_3] [(unsigned short)6]) : (((/* implicit */int) arr_11 [i_3]))))));
        var_22 = var_13;
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) ((unsigned char) (signed char)-14));
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2506083089018706846LL) > (-1LL))))) != (var_12)));
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) | (((/* implicit */int) arr_15 [i_4]))));
        var_24 = ((/* implicit */signed char) arr_11 [i_4]);
    }
    var_25 = ((/* implicit */long long int) var_6);
}
