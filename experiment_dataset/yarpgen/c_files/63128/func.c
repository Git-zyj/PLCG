/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63128
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
    var_16 = ((/* implicit */short) var_10);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (0ULL) : (((/* implicit */unsigned long long int) 9223372036854775797LL))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((int) var_9)))) / (min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_10))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(signed char)6] = ((/* implicit */long long int) ((unsigned long long int) 15991575127533541871ULL));
        arr_3 [i_0] [(short)0] = ((/* implicit */unsigned int) max((arr_1 [14U]), (((((/* implicit */int) arr_0 [i_0])) < ((-2147483647 - 1))))));
        arr_4 [(signed char)14] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) min((arr_1 [i_1]), (arr_1 [i_1])))), (min(((unsigned char)27), (((/* implicit */unsigned char) (_Bool)1))))));
        arr_9 [i_1] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */_Bool) (~(2455168946176009744ULL)));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_2]))))))));
        }
        arr_14 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 2455168946176009744ULL)))))), (arr_7 [i_1] [i_1])));
    }
    for (short i_3 = 4; i_3 < 14; i_3 += 3) 
    {
        arr_18 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) < (2455168946176009752ULL)))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3])) ? (15991575127533541871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73)))))))))));
        arr_19 [i_3] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((int) 7408959988610715608LL))) ? (((((/* implicit */unsigned int) -194328797)) & (arr_16 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))), ((~(arr_16 [i_3 - 2] [i_3 + 1])))));
    }
}
