/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78887
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) 1629554126U)))) : (((((/* implicit */_Bool) 2665413180U)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 20266275)) ? (4294967288U) : (1629554130U)));
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_11))))))) * (((((/* implicit */unsigned long long int) ((unsigned int) var_13))) / (((unsigned long long int) arr_1 [1LL]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) 1629554115U)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_0])) : (var_11)))), (((/* implicit */unsigned long long int) min((min((arr_6 [i_1] [i_2] [i_3]), (2665413180U))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_3] [11U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2665413158U))))))));
                            arr_13 [(_Bool)1] [i_0] [i_0] [i_1] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_0 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */long long int) 327465187)) : (arr_5 [(signed char)2])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))) : (((/* implicit */int) min((((/* implicit */short) arr_7 [i_1] [i_0] [i_1] [i_1 + 1])), (arr_3 [4U] [i_0] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (-(var_19)))), ((-(3947782324U))))), (min((((((/* implicit */_Bool) var_14)) ? (var_7) : (var_14))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_18)), ((unsigned short)36399))))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) ((_Bool) var_11)))))))));
}
