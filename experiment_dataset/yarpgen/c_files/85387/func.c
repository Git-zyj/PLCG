/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85387
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) var_12)) ? (var_7) : (var_9)))))) ? ((~(max((((/* implicit */unsigned int) (unsigned char)127)), (var_5))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_10)) << (((var_19) - (42003112U))))), (((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((signed char) (+(((((/* implicit */_Bool) 7644264905131759869ULL)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_22 = ((/* implicit */long long int) (((-(arr_2 [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_1] [i_0] [13U]))))));
            arr_6 [i_0] = ((/* implicit */unsigned short) arr_2 [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_16 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (65535U)));
                            arr_17 [i_3] [i_2] [i_2] [i_3] [i_4] [(short)6] [i_2] = ((/* implicit */unsigned int) arr_13 [i_0] [14U] [i_1] [14U] [14U] [14U]);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (arr_10 [i_0 - 1] [i_2] [i_4]))))));
                            arr_18 [i_0] [5U] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13085840770678341309ULL)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1))))) : (8139155370884239236ULL)));
                            arr_19 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((signed char) (unsigned short)2047));
                        }
                    } 
                } 
            } 
        }
        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((int) var_1)), (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) (-(-1096250488)))) : (arr_2 [i_0 + 2])));
    }
    var_25 = ((/* implicit */long long int) (-(var_18)));
    var_26 += ((/* implicit */long long int) min((((unsigned long long int) -829426481)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_11)))))))));
}
