/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91255
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
    var_16 = ((/* implicit */signed char) (short)31);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned int) max((min((arr_9 [i_0] [19ULL] [i_2] [i_3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (var_1)))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                var_19 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (!(arr_0 [i_1] [i_1])))))));
                                var_20 = ((/* implicit */int) var_13);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                                var_22 = ((/* implicit */int) ((((((((/* implicit */int) arr_7 [i_1] [i_1] [0ULL])) | (((/* implicit */int) var_9)))) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) < (((/* implicit */int) var_12))));
                            }
                            var_23 = ((/* implicit */signed char) min((((unsigned long long int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_3])), (min((arr_17 [i_0] [i_1] [i_2] [i_3]), (16449720272154733418ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned char) ((signed char) ((unsigned char) min((arr_12 [i_0] [(unsigned char)6]), (((/* implicit */int) (short)15222))))));
                            var_25 = ((/* implicit */_Bool) var_15);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_11);
}
