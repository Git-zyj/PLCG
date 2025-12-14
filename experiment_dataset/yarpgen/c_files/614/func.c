/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/614
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned char) (+(var_6)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_2] = ((/* implicit */short) ((_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)13] [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (1984ULL))), (13155793331904522856ULL))));
                            var_15 = ((/* implicit */_Bool) -1895080812);
                            arr_11 [i_2] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned char)68)) : (var_8))) & (((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 3] [7ULL] [i_1 - 3]))))) & (arr_6 [i_0] [i_2] [i_0] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)120)), (-2092952819)))) ^ ((~(1004634327723415008ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25923))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) arr_14 [i_4])) : ((~(((/* implicit */int) (_Bool)1))))))));
                var_17 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_9)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))) * (18446744073709549653ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4])))));
            }
        } 
    } 
}
