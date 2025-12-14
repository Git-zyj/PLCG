/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78819
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2470099925U) % (4294967295U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) && (((/* implicit */_Bool) var_10)))))) : (1839805958202456LL)));
        var_18 = ((/* implicit */unsigned int) ((var_5) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8128)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8128))) + (5655389296704471849LL)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_19 = ((/* implicit */int) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)));
            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) arr_4 [(unsigned short)0] [i_1 + 2])) ? (((/* implicit */int) arr_4 [2U] [i_2])) : (((/* implicit */int) arr_4 [(signed char)2] [i_1 + 2]))))));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) + (var_12))));
            var_22 = ((/* implicit */long long int) ((arr_9 [i_1] [i_3]) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_10 [i_3] [i_3] [i_3])))));
            var_23 = ((/* implicit */_Bool) var_1);
        }
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))));
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)18)) ? (arr_7 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) -439546865)))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10)) * (((/* implicit */int) (unsigned short)6606)))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                var_26 -= ((/* implicit */unsigned int) ((-7061466169279874050LL) | (((/* implicit */long long int) ((/* implicit */int) (short)1150)))));
                var_27 = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_10);
}
