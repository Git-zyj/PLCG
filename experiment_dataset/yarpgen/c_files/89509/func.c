/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89509
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((867726947) ^ (((/* implicit */int) var_8)))))) ? (var_13) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) var_1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_4 [(signed char)15] [(signed char)15] [i_2]))))))));
                    var_21 &= min((min((arr_6 [i_0] [i_1] [i_2 - 2]), (arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]))), (((arr_6 [i_0] [i_0] [i_2 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                }
                var_22 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) arr_6 [i_0] [i_0] [i_0])));
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) ^ (1711546466U)))) & (((arr_0 [i_5 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 + 4] [i_5 - 1] [i_5 + 4])))))));
                                arr_17 [i_0] [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) max(((signed char)-14), ((signed char)110)))), ((-(arr_2 [i_5 + 4])))));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_1] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_4])))) / (arr_14 [i_1] [i_4] [i_5 + 1] [i_5 + 4] [i_5]))), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_12 [i_5] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) (unsigned char)13))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
