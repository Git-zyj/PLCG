/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71751
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min(((short)15548), ((short)32767)));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_3 [6ULL] [(unsigned short)4])), (arr_1 [11ULL] [(unsigned char)9]))) * (arr_1 [(unsigned short)9] [(unsigned char)1])))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_7 [(_Bool)1] [(unsigned short)3] [i_1] [(signed char)10] = min((((/* implicit */short) (unsigned char)60)), ((short)-32757));
                    var_21 = ((/* implicit */short) arr_6 [(short)7] [(signed char)4]);
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) min((arr_9 [i_1] [11]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3])))))));
                    arr_11 [8U] [(unsigned char)4] [i_1] [5] = (~(min((arr_0 [i_0] [i_3]), (arr_0 [i_0] [i_1]))));
                    arr_12 [3ULL] [2ULL] [(short)2] [i_1] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) 3305834946496043162LL)), (arr_0 [i_0] [(_Bool)1])))));
                }
                for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min(((unsigned char)141), (min(((unsigned char)115), ((unsigned char)126))))))));
                    arr_17 [9ULL] [i_1] [i_1] [(short)7] = ((/* implicit */unsigned int) min((min((arr_16 [i_0] [0ULL] [i_1]), (arr_0 [(short)9] [i_4]))), (min((min((arr_10 [(unsigned char)3] [i_1] [(unsigned char)3] [(short)8]), (((/* implicit */unsigned long long int) arr_5 [8ULL] [(signed char)10] [6ULL] [i_1])))), (((/* implicit */unsigned long long int) (!(arr_5 [i_1] [(short)8] [(unsigned char)7] [i_1]))))))));
                }
                var_24 |= ((/* implicit */unsigned short) (+(min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
    var_26 = ((/* implicit */unsigned long long int) var_9);
}
