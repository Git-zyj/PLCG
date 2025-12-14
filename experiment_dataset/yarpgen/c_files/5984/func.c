/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5984
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
    var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)-21092)) ? (((/* implicit */int) var_3)) : (var_4))) : (((/* implicit */int) var_5)))) - (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
    var_14 = ((/* implicit */signed char) (_Bool)1);
    var_15 = ((/* implicit */short) (~(max((min((((/* implicit */int) var_11)), (var_4))), ((~(((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(var_4)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2285363293558408071LL)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)0))))));
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_5 [i_0]))));
        }
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_3 [i_0] [i_2]), ((unsigned short)0))))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_7))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_9 [i_3])), ((~(((/* implicit */int) (unsigned char)162))))));
        var_20 = ((/* implicit */signed char) min((var_20), (var_0)));
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)72), (arr_9 [i_3]))))));
    }
    for (short i_4 = 4; i_4 < 21; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */short) (_Bool)0);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-94))))), (((unsigned char) arr_12 [i_4 + 1] [i_4 - 2]))))) ? (((/* implicit */long long int) ((unsigned int) ((unsigned long long int) arr_11 [(unsigned char)21] [i_4])))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_4])) | (var_4)))) & (var_9))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_4] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (arr_12 [i_4 + 4] [i_4 - 2]))))));
    }
}
