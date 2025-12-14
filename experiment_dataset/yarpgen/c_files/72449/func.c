/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72449
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
    var_11 += ((/* implicit */unsigned short) 4503595332403200ULL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((arr_4 [i_0] [i_1] [i_1]) / (((/* implicit */long long int) 16757706U)))) / ((~(arr_4 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0])), (-1)))))))));
                var_12 = ((/* implicit */unsigned short) 4278209590U);
            }
        } 
    } 
    var_13 = (+((~(((((/* implicit */int) var_7)) / (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2 - 1] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)6]))))), (((((arr_7 [(signed char)20]) >> (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) ((arr_8 [i_2] [i_2 + 1]) != (((/* implicit */unsigned long long int) arr_7 [i_2]))))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (int i_5 = 3; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_17 [i_5] [i_3] [10LL] [i_5] [i_5 - 2] = ((/* implicit */int) 4278209590U);
                        arr_18 [i_4] [i_3] [i_2] [i_3] [i_2] |= (~(arr_7 [19]));
                        arr_19 [i_2 - 1] [i_3] [i_2 - 1] [i_5] = ((/* implicit */int) arr_11 [i_2]);
                        var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_2] [i_2] [i_2 - 2] [i_2 + 1] [i_2] [i_2]))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) (((+((+(((/* implicit */int) (unsigned char)109)))))) / (((/* implicit */int) (signed char)-1))));
    }
}
