/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95852
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
    var_12 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 8444249301319680ULL))))));
    var_13 = (~((~((~(((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_6 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) arr_2 [i_2] [i_2] [3ULL]))))))));
                    arr_7 [(_Bool)1] [i_0] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
                }
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [11ULL] [i_5] [i_5] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4] [i_3] [i_0] [i_0])))))))));
                                var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))))))));
                                var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_0)))))))));
                                arr_17 [i_5] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(var_9))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */signed char) (~((~((~(((/* implicit */int) var_10))))))));
                                var_17 += ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) arr_19 [5ULL]))))))));
                                arr_24 [i_0] [i_6] = ((/* implicit */_Bool) (~((~((~(arr_21 [i_0] [10ULL] [10ULL] [i_3] [3ULL] [i_6] [i_7])))))));
                                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_3] [i_1] [(_Bool)1])))))))));
                                arr_25 [i_0] [10U] [(unsigned short)5] [(unsigned short)6] = ((/* implicit */short) (~((~((~(var_9)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-25))))))))))));
                }
                arr_26 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))));
                arr_27 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                arr_28 [(signed char)2] = ((/* implicit */_Bool) (-((-((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
