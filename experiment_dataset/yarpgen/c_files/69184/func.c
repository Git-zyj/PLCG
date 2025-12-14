/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69184
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
    var_15 = ((max((((((/* implicit */_Bool) (unsigned char)43)) && (((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) (unsigned char)43)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (var_6))))))));
    var_16 = min((((/* implicit */int) min(((_Bool)0), ((!(((/* implicit */_Bool) (unsigned char)43))))))), (var_13));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)108)))) ? (min((var_13), (((/* implicit */int) var_9)))) : (min((((/* implicit */int) ((signed char) (unsigned char)212))), (((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)0))))))));
        arr_4 [i_0] = max(((-(((/* implicit */int) (unsigned char)40)))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))) && ((!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_17 = ((/* implicit */long long int) (unsigned short)2048);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)192)) ? (arr_7 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (_Bool)1))));
            var_18 = ((((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)200)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))));
        }
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_1])), (var_8)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 835579913)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (unsigned char)0);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((long long int) (short)-8115)))));
            arr_15 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))));
        arr_20 [i_4] = min((((/* implicit */int) arr_13 [i_4] [i_4 + 1] [i_4 + 2])), (min(((-(((/* implicit */int) (unsigned char)198)))), ((-(((/* implicit */int) (unsigned short)50027)))))));
        var_23 = ((((((/* implicit */_Bool) arr_19 [i_4])) && (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) ((signed char) min((var_2), (((/* implicit */int) (_Bool)1)))))));
    }
}
