/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72907
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
    var_15 *= ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)9] [i_1])) ? (((/* implicit */int) var_14)) : (arr_0 [i_1])))) || (((/* implicit */_Bool) ((unsigned short) arr_4 [(unsigned short)7]))))))));
                arr_6 [i_1] = ((unsigned int) arr_1 [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (~(arr_2 [i_0] [i_0] [i_2]));
                    var_17 = ((/* implicit */long long int) min((var_17), (6250897819043595102LL)));
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_12)), (var_11)))))) >= (arr_5 [1LL] [1LL])));
                    var_18 -= max((((((arr_5 [i_0] [i_1]) + (9223372036854775807LL))) >> (((arr_5 [i_0] [i_1]) + (3710394710742095379LL))))), (((/* implicit */long long int) (-(-795024462)))));
                }
                var_19 = ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_0] [i_0]) : (var_6)));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (int i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_20 = (-(9221120237041090560LL));
                            arr_20 [i_0] [i_1] [i_5] = ((/* implicit */int) var_4);
                            arr_21 [i_5] [i_0] [2LL] [i_5] = ((/* implicit */short) arr_19 [i_5] [i_4] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
