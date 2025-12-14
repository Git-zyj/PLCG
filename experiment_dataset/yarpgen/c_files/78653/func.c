/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78653
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_6))))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) (-((~((+(16400871379348841036ULL)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
            {
                var_13 = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)19))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-((+(arr_2 [i_0] [i_1]))))))));
                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))));
                arr_11 [i_0] = ((/* implicit */short) (+((-(arr_1 [i_0])))));
                var_16 *= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_6)))))))));
                arr_16 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((~(arr_15 [i_0] [i_0] [i_0] [21U]))))))));
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(var_9))))))));
                arr_17 [i_0] |= (-((-((-(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((+(var_3))))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((-((~(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
            {
                var_20 = ((/* implicit */short) (-((-((-(((/* implicit */int) (signed char)22))))))));
                var_21 = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) (_Bool)1))))))));
                var_22 ^= ((/* implicit */unsigned int) (-((-((-(arr_18 [i_0] [i_0] [i_6])))))));
                var_23 = ((/* implicit */unsigned short) (-((-((-(((/* implicit */int) arr_24 [i_0] [i_0] [(short)8]))))))));
            }
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(short)4] [i_1] [(_Bool)1] [i_1]))))))))));
            arr_28 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0]))))))))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~((-((~(var_3))))))))));
        }
        var_26 = ((/* implicit */unsigned char) (-((+((~(var_2)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_33 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) arr_22 [i_7] [i_7] [i_7])))))))));
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_8)))))))));
    }
    var_28 = ((/* implicit */short) (-((~((+(((/* implicit */int) var_5))))))));
}
