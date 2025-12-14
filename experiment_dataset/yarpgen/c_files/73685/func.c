/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73685
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((18159577172766774655ULL) ^ (arr_1 [i_0]))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0]))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_13))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_3);
    var_20 = ((/* implicit */unsigned long long int) ((short) var_14));
    var_21 = ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -340437612671155155LL)))) : (arr_3 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), ((+((-(var_3)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */long long int) ((signed char) arr_4 [i_2 + 3] [i_2 + 3]));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (signed char)-66))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((arr_8 [i_2]) != (((/* implicit */long long int) arr_7 [i_1])))))))) % ((((+(-3325992303751904856LL))) % (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned long long int) ((340437612671155161LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (short)991)))))))))));
        }
    }
    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((int) ((unsigned char) arr_10 [i_3])));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_3])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_3])), (arr_2 [i_3 - 2] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_3 - 1]) : (((/* implicit */long long int) var_7))))));
    }
}
