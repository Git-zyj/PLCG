/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79306
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
    var_19 = ((/* implicit */signed char) var_12);
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) var_10)) * (max((var_0), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0 + 2]))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_10);
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1752002668)) ? (13441487011786537655ULL) : (5005257061923013961ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) (unsigned char)58)))))));
        var_23 = ((/* implicit */unsigned char) (-(arr_1 [i_1])));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_24 *= ((/* implicit */_Bool) arr_5 [i_2]);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46682))) & (arr_8 [i_2] [i_2] [i_1]))))))))));
        }
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_26 -= ((/* implicit */long long int) arr_13 [i_3]);
                var_27 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned long long int) arr_13 [i_3]))));
            }
        } 
    } 
}
