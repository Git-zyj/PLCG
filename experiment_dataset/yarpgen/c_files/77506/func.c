/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77506
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_15)))) < (max((((/* implicit */unsigned long long int) var_7)), (8646911284551352320ULL)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16777))) | (1193564763U)))));
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_2 [(unsigned short)3] [i_0] [i_0]);
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((long long int) arr_3 [i_0 - 1] [i_1]));
                arr_6 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_1 - 3])) | (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_1 + 3])))));
                var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((~((-2147483647 - 1)))), (((/* implicit */int) (signed char)-18)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((signed char) var_12));
}
