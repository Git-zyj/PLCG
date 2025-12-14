/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7188
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
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (var_14) : (((/* implicit */unsigned int) ((int) (unsigned char)209)))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((long long int) var_12)))))))));
    var_21 = var_18;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) arr_12 [i_1]);
                            arr_15 [i_0] [i_3] [i_3] [i_1] [i_4 - 1] = ((/* implicit */int) arr_11 [i_1] [i_1] [i_2 + 3] [i_1] [i_3] [i_4]);
                        }
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((((unsigned int) arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1])), ((-(arr_9 [12] [i_1] [12] [i_1 + 2] [i_1 - 1] [i_1])))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((long long int) ((var_16) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                        }
                        arr_18 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((7688273508049969464LL) | (468389463466231651LL)));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0]))))), (((var_18) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))))));
        var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [(signed char)10] [i_0] [i_0] [i_0] [i_0] [(signed char)10])))) ? (var_9) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))))));
        arr_19 [i_0] = ((/* implicit */short) (+(var_13)));
    }
}
