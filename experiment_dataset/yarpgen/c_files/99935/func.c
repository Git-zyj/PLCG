/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99935
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
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_2)) + (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) > (arr_2 [i_1] [i_1 - 1] [i_0 + 2]))))));
            arr_6 [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)-96)) | (((/* implicit */int) (signed char)-42)))) + (2147483647))) << (((((-1156684052) + (1156684070))) - (18)))));
        }
        arr_7 [3] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ^ (-2558761616871461128LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)0])))));
    }
}
