/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99026
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_6))))))))))))));
    var_19 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) << (((var_9) + (5480828888085904001LL)))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_9))))))) ^ ((-(var_8)))));
                arr_9 [i_0] [i_0] [i_0] [(short)13] = (+(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_0)))))));
            }
            var_21 ^= ((/* implicit */unsigned long long int) var_4);
        }
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_19 [18ULL] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100)))))));
                        arr_20 [i_0] [i_3] [i_4] [i_0] [i_5] = ((/* implicit */unsigned int) (-(var_7)));
                    }
                } 
            } 
        } 
        arr_21 [i_0 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_12 [i_0 - 1]))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            {
                arr_28 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_6] [i_6] [i_6])))))));
                var_22 ^= ((/* implicit */_Bool) arr_22 [i_7]);
                var_23 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [(_Bool)1] [i_7] [i_7]))))))));
            }
        } 
    } 
    var_24 = (~(7450945085392931168LL));
}
