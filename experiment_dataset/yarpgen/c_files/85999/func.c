/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85999
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((min((arr_1 [i_1 + 2]), (((/* implicit */unsigned long long int) var_1)))), (max((((/* implicit */unsigned long long int) var_14)), (arr_1 [i_1 - 1])))));
                var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)0)))), (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (short)0))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (max((min((arr_2 [i_1 + 2] [i_1 + 2] [i_1 - 2]), ((_Bool)1))), (max(((_Bool)1), (var_9)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((short)32767), ((short)-32752)))), (max((arr_1 [i_1 - 2]), (((/* implicit */unsigned long long int) var_13))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_1 + 2])), (arr_3 [i_0] [(unsigned char)4]))), (((/* implicit */unsigned int) (short)32753))))), (min((((/* implicit */unsigned long long int) min((-8336894286854034161LL), (((/* implicit */long long int) (short)-32752))))), (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) 10799562902989111498ULL);
        var_23 = ((/* implicit */_Bool) -1368352232);
    }
    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) min((min((31), (((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 1])))), (max((((/* implicit */int) var_9)), (1519221547)))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) max((max((arr_15 [i_4 - 1]), (arr_15 [i_4 - 1]))), (max((((/* implicit */unsigned long long int) -53)), (max((((/* implicit */unsigned long long int) 29)), (18446744073709551609ULL)))))));
                    var_25 = max((max((60190154), (((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_2 [i_3 + 3] [i_3 - 1] [i_3 - 1]), (var_17)))));
                    var_26 = min((min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) var_12)), (var_8))))), (((/* implicit */unsigned long long int) min(((unsigned short)32935), (((/* implicit */unsigned short) (_Bool)1))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) max((max((arr_15 [i_3 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_17)), (10U)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_17)), ((unsigned short)29265))))));
    }
    var_28 = ((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) var_13))));
}
