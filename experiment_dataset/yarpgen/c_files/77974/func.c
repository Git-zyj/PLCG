/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77974
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
    var_20 = var_16;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) (~((((+(((/* implicit */int) (unsigned short)16256)))) % (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])))))))));
                        var_22 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_7 [i_2 - 2] [i_3] [i_2] [i_3 - 1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) (+(26U)));
                            arr_11 [i_0] [0U] [(_Bool)1] [i_3] [i_0] [0U] = ((/* implicit */short) var_11);
                        }
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */int) arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_5] [i_5]);
                            arr_15 [i_0] [i_1] [(short)6] [i_3] [i_3] = ((/* implicit */unsigned int) var_7);
                            var_25 = ((/* implicit */unsigned short) ((_Bool) arr_12 [i_0] [i_0] [i_2]));
                            arr_16 [i_0] [i_0] [i_2] [i_3 - 1] [i_5] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((34U), (((/* implicit */unsigned int) (unsigned short)23551))))) ? (-3860008604756036286LL) : (((/* implicit */long long int) 26U)))));
                            arr_17 [i_0] [i_0] [i_2] [(short)4] [i_5] |= ((/* implicit */int) (+(arr_5 [i_2 - 1] [6U])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [9] [i_1] [i_2] [i_3] [i_6] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_6] [i_3] [(unsigned short)9] [i_1] [i_0])) : (((((/* implicit */int) (short)1920)) + (((/* implicit */int) arr_3 [i_2] [i_2] [15LL])))));
                            var_26 |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])))))) | (max((arr_18 [i_0] [i_1] [i_2] [(unsigned short)10] [i_6]), (((/* implicit */unsigned long long int) var_3)))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_24 [i_0] [0] [i_2] [2] [i_7] [i_7] = ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) == (max((((/* implicit */int) arr_10 [i_0] [7LL] [i_2] [i_3 - 4] [i_3 - 4])), (var_11))))), ((!(((/* implicit */_Bool) min((4294967267U), (((/* implicit */unsigned int) 2147483647)))))))));
                            var_27 -= ((/* implicit */_Bool) ((unsigned long long int) var_9));
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) % (1163403248U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))))));
        arr_25 [i_0] = ((/* implicit */unsigned int) (~((-2147483647 - 1))));
        arr_26 [i_0] [0LL] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [5] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [9LL] [i_0]))))));
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_6))));
}
